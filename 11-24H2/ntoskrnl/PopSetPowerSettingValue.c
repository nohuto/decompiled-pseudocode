/*
 * XREFs of PopSetPowerSettingValue @ 0x1409A2EB4
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x1403E66D0 (PopInitilizeAcDcSettings.c)
 *     PopScanIdleList @ 0x1404E1E10 (PopScanIdleList.c)
 *     PopSetSessionDisplayStatus @ 0x1409A0EDC (PopSetSessionDisplayStatus.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409A2014 (PopAdaptiveGetConsoleSessionState.c)
 *     PopSetSessionUserStatus @ 0x1409A2C18 (PopSetSessionUserStatus.c)
 *     PopSetNewPolicyValue @ 0x1409A2CCC (PopSetNewPolicyValue.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409A2DCC (PopSetPowerSettingValueAcDc.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopUpdateConsoleDisplayState @ 0x140A1B91C (PopUpdateConsoleDisplayState.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A1BB98 (PopPdcIdleResiliencyCallback.c)
 *     PopNotifyLidStateChange @ 0x140AA6AB8 (PopNotifyLidStateChange.c)
 * Callees:
 *     PopIncrementPowerSettingPendingUpdates @ 0x1402B9D70 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1402B9F60 (PopDecrementPowerSettingPendingUpdates.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x1403E6A78 (PopSetNotificationWork.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PopGetListHead @ 0x1409A2E44 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1409A32B8 (PopStateIsSessionSpecific.c)
 *     PopFindPowerSettingConfiguration @ 0x1409A3300 (PopFindPowerSettingConfiguration.c)
 *     PopValidatePowerSettingData @ 0x1409A3388 (PopValidatePowerSettingData.c)
 *     PopArePowerSettingsEqual @ 0x1409A408C (PopArePowerSettingsEqual.c)
 *     PopUnreferencePowerSetting @ 0x1409A44C4 (PopUnreferencePowerSetting.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopSetPowerSettingValue(GUID *a1, unsigned int a2, int a3, unsigned int a4, void *Src)
{
  size_t v5; // r13
  bool v6; // r14
  GUID *v8; // r12
  _DWORD *v9; // rsi
  void *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // r12
  unsigned int v14; // edi
  __int64 v16; // rax
  _QWORD *v17; // r14
  char v18; // r15
  bool v19; // zf
  _DWORD *v20; // rax
  signed __int32 v21; // eax
  _QWORD *i; // rax
  __int64 v23; // rax
  PVOID *ListHead; // rax
  __int64 *v25; // r8
  PVOID *v26; // r10
  __int64 *v27; // rcx
  __int64 *v28; // r9
  __int64 v29; // rdx
  __int64 **v30; // rax
  __int64 **v31; // rdx
  __int64 *v32; // rdx
  __int64 *v33; // rax
  char IsSessionSpecific; // [rsp+40h] [rbp-68h]
  char v35; // [rsp+41h] [rbp-67h]
  char v36; // [rsp+42h] [rbp-66h]
  void *Pool2; // [rsp+50h] [rbp-58h]
  __int64 PowerSettingConfiguration; // [rsp+60h] [rbp-48h]

  v5 = a4;
  v6 = 0;
  v35 = 0;
  v8 = a1;
  v36 = 0;
  v9 = 0LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, a4, 0x74655350u);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  PopIncrementPowerSettingPendingUpdates(0);
  memmove(Pool2, Src, (unsigned int)v5);
  PopValidatePowerSettingData(v8, (unsigned int)v5, Pool2);
  IsSessionSpecific = PopStateIsSessionSpecific(v8);
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(v8, a2);
  v11 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v12 = 0LL;
  }
  else
  {
    v23 = ExAllocatePool2(0x100uLL, 0x58uLL, 0x74655350u);
    PowerSettingConfiguration = v23;
    v11 = v23;
    if ( !v23 )
    {
      v14 = -1073741670;
      goto LABEL_7;
    }
    *(GUID *)(v23 + 32) = *v8;
    ListHead = PopGetListHead(v8);
    v25 = (__int64 *)(v11 + 16);
    v26 = ListHead;
    *(_QWORD *)(v11 + 24) = v11 + 16;
    *(_QWORD *)(v11 + 16) = v11 + 16;
    if ( !IsSessionSpecific )
    {
      v27 = (__int64 *)PopRegisteredPowerSettingCallbacks;
      while ( v27 != &PopRegisteredPowerSettingCallbacks )
      {
        v28 = v27;
        v27 = (__int64 *)*v27;
        v29 = *(__int64 *)((char *)v28 + 36) - *(_QWORD *)&v8->Data1;
        if ( !v29 )
          v29 = *(__int64 *)((char *)v28 + 44) - *(_QWORD *)v8->Data4;
        if ( !v29 )
        {
          v30 = (__int64 **)v27[1];
          if ( *v30 != v27 )
            goto LABEL_60;
          v31 = (__int64 **)v30[1];
          if ( *v31 != (__int64 *)v30 )
            goto LABEL_60;
          v27[1] = (__int64)v31;
          *v31 = v27;
          v32 = *(__int64 **)(v11 + 24);
          if ( (__int64 *)*v32 != v25 )
            goto LABEL_60;
          *v30 = v25;
          v30[1] = v32;
          *v32 = (__int64)v30;
          *(_QWORD *)(v11 + 24) = v30;
        }
      }
      a2 = -1;
    }
    *(_DWORD *)(v11 + 48) = a2;
    v33 = (__int64 *)v26[1];
    if ( (PVOID *)*v33 != v26 )
LABEL_60:
      __fastfail(3u);
    *(_QWORD *)(v11 + 8) = v33;
    v12 = 0LL;
    *(_QWORD *)v11 = v26;
    *v33 = v11;
    v26[1] = (PVOID)v11;
    v35 = 1;
    if ( PopPopPowerSettingSetChangeNotification.Data[0] || PopPopPowerSettingSetChangeNotification.Data[1] )
      v36 = 1;
  }
  v13 = *(_QWORD *)(v11 + 8LL * a3 + 64);
  if ( !(unsigned __int8)PopArePowerSettingsEqual(v13, Pool2, (unsigned int)v5) )
  {
    v16 = a3;
    v17 = (_QWORD *)(v11 + 64);
    v18 = 0;
    do
    {
      if ( v12 != v16 )
      {
        if ( !v9 )
        {
          v19 = (unsigned __int8)PopArePowerSettingsEqual(*v17, Pool2, (unsigned int)v5) == 0;
          v16 = a3;
          if ( !v19 )
          {
            v9 = (_DWORD *)*v17;
            ++*(_DWORD *)*v17;
          }
        }
        if ( *v17 == v13 )
          v18 = 1;
      }
      ++v12;
      ++v17;
    }
    while ( v12 < 3 );
    v14 = 0;
    if ( !v9 )
    {
      v20 = (_DWORD *)ExAllocatePool2(0x100uLL, (unsigned int)(v5 + 12), 0x74655350u);
      v9 = v20;
      if ( !v20 )
      {
        v6 = 0;
        v14 = -1073741670;
        LOBYTE(v9) = 0;
LABEL_39:
        v10 = Pool2;
        goto LABEL_6;
      }
      v20[1] = v5;
      *v20 = 1;
      do
        v21 = _InterlockedIncrement(&PopPowerSettingChangeStamp);
      while ( !v21 );
      v9[2] = v21;
      memmove(v9 + 3, Pool2, v5);
    }
    if ( v13 )
    {
      if ( !v18 )
      {
        for ( i = *(_QWORD **)(PowerSettingConfiguration + 16);
              i != (_QWORD *)(PowerSettingConfiguration + 16);
              i = (_QWORD *)*i )
        {
          if ( i[9] == v13 )
            i[9] = 0LL;
        }
      }
      PopUnreferencePowerSetting(v13);
    }
    v6 = 0;
    *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) = v9;
    if ( dword_140F0B38C == a3 )
      v6 = IsSessionSpecific == 0;
    if ( *(_DWORD *)(PowerSettingConfiguration + 56) || *(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      *(_DWORD *)(PowerSettingConfiguration + 52) |= 1u;
      LOBYTE(v9) = 1;
    }
    else
    {
      LOBYTE(v9) = 0;
    }
    goto LABEL_39;
  }
  v14 = 0;
LABEL_6:
  v8 = a1;
LABEL_7:
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v35 )
    PoRegisterPowerSettingCallback(0LL, v8, PopTracePowerSettingChange, 0LL, 0LL);
  ExFreePoolWithTag(v10, 0x74655350u);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v36 )
      ZwUpdateWnfStateData(&PopPopPowerSettingSetChangeNotification, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( v6 )
    {
      PopIncrementPowerSettingPendingUpdates(1);
      PopSetNotificationWork(0x20u);
    }
    if ( (_BYTE)v9 )
      PopSetNotificationWork(0x80u);
  }
  PopDecrementPowerSettingPendingUpdates(0);
  return v14;
}
