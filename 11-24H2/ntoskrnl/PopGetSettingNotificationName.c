/*
 * XREFs of PopGetSettingNotificationName @ 0x1409A14CC
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x1403E6A78 (PopSetNotificationWork.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405E43C8 (PsIsSessionInCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopCreateNotificationName @ 0x1409A07D8 (PopCreateNotificationName.c)
 *     PopValidateContextMembership @ 0x1409A0A00 (PopValidateContextMembership.c)
 *     PsIsServiceSession @ 0x1409A1044 (PsIsServiceSession.c)
 *     PopStateIsSessionSpecific @ 0x1409A32B8 (PopStateIsSessionSpecific.c)
 *     PopFindPowerSettingConfiguration @ 0x1409A3300 (PopFindPowerSettingConfiguration.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140A86B00 (PopDiagTracePowerSettingRegistration.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, _WNF_STATE_NAME *a2)
{
  char v3; // r12
  char v4; // r13
  char v5; // r14
  unsigned int v6; // esi
  _QWORD *v7; // r15
  __int64 PowerSettingConfiguration; // rax
  _WNF_STATE_NAME *v9; // rdi
  _WNF_STATE_NAME v10; // rax
  int v11; // ebx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v13; // r8
  unsigned int SessionId; // eax
  unsigned int v16; // edi
  __int64 v17; // rcx
  _WNF_STATE_NAME StateName; // [rsp+40h] [rbp-38h] BYREF

  StateName = 0LL;
  v3 = 0;
  v4 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  v5 = 1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 16);
  else
    v6 = -1;
  v7 = (_QWORD *)(a1 & -(__int64)(a1 != 0));
  if ( !v7 )
  {
    v10 = PopPopPowerSettingSetChangeNotification;
    if ( PopPopPowerSettingSetChangeNotification == __PAIR64__(PopPopPowerSettingSetChangeNotification.Data[0], 0) )
    {
      v11 = PopCreateNotificationName(&StateName);
      if ( v11 < 0 )
        goto LABEL_12;
      PopPopPowerSettingSetChangeNotification = StateName;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1 & -(__int64)(a1 != 0)) )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v16 = SessionId;
    if ( v6 == -1 || v6 == SessionId )
    {
      if ( SessionId == -1 || PsIsServiceSession(SessionId) )
      {
        v11 = -1073741811;
        goto LABEL_15;
      }
      v6 = v16;
    }
    else
    {
      v11 = PopValidateContextMembership(SeLocalSystemSid);
      if ( v11 < 0 )
      {
        if ( !PsIsServiceSession(v16)
          || !PsIsSessionInCurrentServerSilo(v6)
          || (v11 = PopValidateContextMembership(SeExports->SeLocalServiceSid), v11 < 0) )
        {
LABEL_12:
          if ( v11 && v11 != -1073741275 )
            goto LABEL_15;
          goto LABEL_13;
        }
      }
    }
  }
  else
  {
    v6 = -1;
  }
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, v6);
  v9 = (_WNF_STATE_NAME *)PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v4 = 1;
    if ( !*(_DWORD *)(PowerSettingConfiguration + 56) && !*(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      v11 = PopCreateNotificationName(&StateName);
      if ( v11 < 0 )
        goto LABEL_12;
      v17 = *v7 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
      if ( *v7 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
        v17 = v7[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
      if ( !v17 )
        v9[6].Data[1] |= 8u;
      v9[7] = StateName;
      v9[6].Data[1] |= 1u;
      v3 = 1;
      goto LABEL_11;
    }
    v10 = *(_WNF_STATE_NAME *)(PowerSettingConfiguration + 56);
LABEL_10:
    StateName = v10;
LABEL_11:
    KeReleaseGuardedMutex(&PopSettingLock);
    v5 = 0;
    *a2 = StateName;
    v11 = 0;
    goto LABEL_12;
  }
  v11 = -1073741275;
LABEL_13:
  CurrentSilo = PsGetCurrentSilo();
  if ( !PsIsHostSilo((__int64)CurrentSilo) )
  {
    LOBYTE(v13) = v4;
    PopDiagTracePowerSettingRegistration(v7, v6, v13);
  }
LABEL_15:
  if ( v5 )
    KeReleaseGuardedMutex(&PopSettingLock);
  if ( v3 )
    PopSetNotificationWork(0x80u);
  return (unsigned int)v11;
}
