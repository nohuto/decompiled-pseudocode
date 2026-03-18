/*
 * XREFs of PopGetSettingNotificationName @ 0x1409BAE7C
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x1403F2D58 (PopSetNotificationWork.c)
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405E6DC8 (PsIsSessionInCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopCreateNotificationName @ 0x1409BA188 (PopCreateNotificationName.c)
 *     PopValidateContextMembership @ 0x1409BA3B0 (PopValidateContextMembership.c)
 *     PsIsServiceSession @ 0x1409BA9F4 (PsIsServiceSession.c)
 *     PopStateIsSessionSpecific @ 0x1409BCC68 (PopStateIsSessionSpecific.c)
 *     PopFindPowerSettingConfiguration @ 0x1409BCCB0 (PopFindPowerSettingConfiguration.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140A8A7C0 (PopDiagTracePowerSettingRegistration.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, __int64 *a2)
{
  char v3; // r12
  char v4; // r13
  char v5; // r14
  unsigned int v6; // esi
  _QWORD *v7; // r15
  __int64 PowerSettingConfiguration; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  int NotificationName; // ebx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v13; // r8
  unsigned int SessionId; // eax
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF

  v19 = 0LL;
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
    if ( PopPopPowerSettingSetChangeNotification == __PAIR64__(PopPopPowerSettingSetChangeNotification, 0) )
    {
      NotificationName = PopCreateNotificationName((__int64)&v19);
      if ( NotificationName < 0 )
        goto LABEL_12;
      PopPopPowerSettingSetChangeNotification = v19;
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
        NotificationName = -1073741811;
        goto LABEL_15;
      }
      v6 = v16;
    }
    else
    {
      NotificationName = PopValidateContextMembership(SeLocalSystemSid);
      if ( NotificationName < 0 )
      {
        if ( !PsIsServiceSession(v16)
          || !PsIsSessionInCurrentServerSilo(v6)
          || (NotificationName = PopValidateContextMembership(SeExports->SeLocalServiceSid), NotificationName < 0) )
        {
LABEL_12:
          if ( NotificationName && NotificationName != -1073741275 )
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
  v9 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v4 = 1;
    if ( !*(_DWORD *)(PowerSettingConfiguration + 56) && !*(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      NotificationName = PopCreateNotificationName((__int64)&v19);
      if ( NotificationName < 0 )
        goto LABEL_12;
      v17 = *v7 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
      if ( *v7 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
        v17 = v7[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
      if ( !v17 )
        *(_DWORD *)(v9 + 52) |= 8u;
      *(_QWORD *)(v9 + 56) = v19;
      *(_DWORD *)(v9 + 52) |= 1u;
      v3 = 1;
      goto LABEL_11;
    }
    v10 = *(_QWORD *)(PowerSettingConfiguration + 56);
LABEL_10:
    v19 = v10;
LABEL_11:
    KeReleaseGuardedMutex(&PopSettingLock);
    v5 = 0;
    *a2 = v19;
    NotificationName = 0;
    goto LABEL_12;
  }
  NotificationName = -1073741275;
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
  return (unsigned int)NotificationName;
}
