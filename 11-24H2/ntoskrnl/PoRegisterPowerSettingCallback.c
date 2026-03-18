/*
 * XREFs of PoRegisterPowerSettingCallback @ 0x140A6B150
 * Callers:
 *     HvlPhase2Initialize @ 0x140582B80 (HvlPhase2Initialize.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14075C48C (PopIdleInitAoAcDozeS4Timer.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407617F8 (PopAdaptiveStandbyInitialize.c)
 *     SSHSupportRegisterPowerSettingCallback @ 0x140767938 (SSHSupportRegisterPowerSettingCallback.c)
 *     CmpInitializeLazyWriters @ 0x1407DF164 (CmpInitializeLazyWriters.c)
 *     TtmInitCurrentSession @ 0x140903118 (TtmInitCurrentSession.c)
 *     PopSetPowerSettingValue @ 0x1409BC864 (PopSetPowerSettingValue.c)
 *     VslRegisterIumPowerCallbacks @ 0x140C19BC4 (VslRegisterIumPowerCallbacks.c)
 *     PopInitializePowerSettingCallbacks @ 0x140C2E2C8 (PopInitializePowerSettingCallbacks.c)
 *     PpmInfoRegisterCallbacks @ 0x140C30244 (PpmInfoRegisterCallbacks.c)
 *     PopEsInit @ 0x140C32A6C (PopEsInit.c)
 *     PopModernStandbyNotificationInit @ 0x140C33490 (PopModernStandbyNotificationInit.c)
 *     PopPowerAggregatorInitialize @ 0x140C6809C (PopPowerAggregatorInitialize.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x1403F2D58 (PopSetNotificationWork.c)
 *     RtlPcToFileName @ 0x1403FFB00 (RtlPcToFileName.c)
 *     PopEnsureErratumSubscribed @ 0x1405D2FE0 (PopEnsureErratumSubscribed.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopStateIsSessionSpecific @ 0x1409BCC68 (PopStateIsSessionSpecific.c)
 *     PopFindPowerSettingConfiguration @ 0x1409BCCB0 (PopFindPowerSettingConfiguration.c)
 *     EmClientRuleEvaluate @ 0x140B68400 (EmClientRuleEvaluate.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall PoRegisterPowerSettingCallback(
        PDEVICE_OBJECT DeviceObject,
        LPCGUID SettingGuid,
        PPOWER_SETTING_CALLBACK Callback,
        PVOID Context,
        PVOID *Handle)
{
  GUID *v7; // rdi
  bool v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 Pool2; // rax
  char *v12; // rbx
  GUID v13; // xmm0
  PVOID *PowerSettingConfiguration; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  PVOID **v17; // rcx
  _QWORD *v18; // rax
  NTSTATUS v19; // edi
  __int64 *v21; // rax
  int v22; // [rsp+20h] [rbp-E0h] BYREF
  int v23; // [rsp+24h] [rbp-DCh]
  __int128 *v24; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING v25; // [rsp+30h] [rbp-D0h] BYREF
  PDEVICE_OBJECT v26; // [rsp+40h] [rbp-C0h]
  __int128 v27; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v28[528]; // [rsp+60h] [rbp-A0h] BYREF

  v22 = 0;
  v24 = 0LL;
  v26 = DeviceObject;
  v7 = (GUID *)SettingGuid;
  v23 = dword_140F0BA4C;
  v27 = 0LL;
  v8 = 0;
  v25 = 0LL;
  if ( PopStateIsSessionSpecific(SettingGuid) )
    return -1073741811;
  v9 = 0LL;
  if ( Callback )
  {
    v10 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *(_QWORD *)&v7->Data1;
    if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *(_QWORD *)&v7->Data1 )
      v10 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)v7->Data4;
    if ( !v10 )
    {
      *(_QWORD *)&v25.Length = 34078720LL;
      memset_0(v28, 0, 0x208uLL);
      v25.Buffer = (wchar_t *)v28;
      if ( (int)RtlPcToFileName((unsigned __int64)Callback, &v25) >= 0 )
      {
        DWORD2(v27) = 16;
        *(_QWORD *)&v27 = &v25;
        v24 = &v27;
        if ( (int)EmClientRuleEvaluate(&GUID_EM_PO_CONSOLE_STATE_CHANGE_REMAP_RULE, &v24, 1LL, &v22) >= 0 )
        {
          v21 = &PopPrimaryDisplayVisibleStateErratum;
          if ( v22 != 2 )
            v21 = 0LL;
          v9 = (unsigned __int64 *)v21;
        }
      }
    }
  }
  ExAcquireFastMutex(&PopSettingLock);
  Pool2 = ExAllocatePool2(0x100uLL);
  v12 = (char *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 1952797520;
    v13 = *v7;
    *(_QWORD *)(Pool2 + 80) = Callback;
    *(_QWORD *)(Pool2 + 88) = Context;
    *(GUID *)(Pool2 + 52) = v13;
    *(_QWORD *)(Pool2 + 96) = v26;
    if ( v9 )
    {
      PopEnsureErratumSubscribed(v9);
      v7 = (GUID *)(v9 + 2);
    }
    *(GUID *)(v12 + 36) = *v7;
    PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, -1);
    if ( PowerSettingConfiguration )
    {
      v15 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1 )
        v15 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_IDLE_BACKGROUND_TASK.Data4;
      if ( !v15 )
        goto LABEL_33;
      v16 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1 )
        v16 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_BACKGROUND_TASK_NOTIFICATION.Data4;
      if ( !v16 )
LABEL_33:
        *((_QWORD *)v12 + 9) = PowerSettingConfiguration[v23 + 8];
      v17 = (PVOID **)PowerSettingConfiguration[3];
      if ( *v17 != PowerSettingConfiguration + 2 )
LABEL_19:
        __fastfail(3u);
      *(_QWORD *)v12 = PowerSettingConfiguration + 2;
      *((_QWORD *)v12 + 1) = v17;
      *v17 = (PVOID *)v12;
      PowerSettingConfiguration[3] = v12;
    }
    else
    {
      v18 = (_QWORD *)qword_140F0BE68;
      if ( *(__int64 **)qword_140F0BE68 != &PopRegisteredPowerSettingCallbacks )
        goto LABEL_19;
      *(_QWORD *)v12 = &PopRegisteredPowerSettingCallbacks;
      *((_QWORD *)v12 + 1) = v18;
      *v18 = v12;
      qword_140F0BE68 = (__int64)v12;
    }
    v19 = 0;
    v8 = (unsigned int)PopOsInitPhase >= 3;
    if ( Handle )
      *Handle = v12;
  }
  else
  {
    v19 = -1073741670;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v8 )
    PopSetNotificationWork(0x20u);
  return v19;
}
