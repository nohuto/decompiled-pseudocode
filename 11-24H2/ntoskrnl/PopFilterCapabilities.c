/*
 * XREFs of PopFilterCapabilities @ 0x14099F88C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404CF814 (PopIdleArmAoAcDozeS4Timer.c)
 *     PoTtmInitiatePowerStateTransition @ 0x14075C2E8 (PoTtmInitiatePowerStateTransition.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x14099EB18 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopVerifyPowerActionPolicy @ 0x14099F5BC (PopVerifyPowerActionPolicy.c)
 *     PopUpdateSystemIdleContext @ 0x1409A0024 (PopUpdateSystemIdleContext.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopSmartSuspendMakePredictions @ 0x140ABAB98 (PopSmartSuspendMakePredictions.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     IopAppendLegacyVeto @ 0x140730FF0 (IopAppendLegacyVeto.c)
 *     PopLogSleepDisabled @ 0x14099E748 (PopLogSleepDisabled.c)
 *     PopLogDisabledSleepReason @ 0x14099FBA0 (PopLogDisabledSleepReason.c)
 *     PopCheckDisabledState @ 0x14099FC54 (PopCheckDisabledState.c)
 *     IopGetLegacyVetoListDrivers @ 0x14099FC84 (IopGetLegacyVetoListDrivers.c)
 *     IopGetLegacyVetoListDeviceNode @ 0x14099FF2C (IopGetLegacyVetoListDeviceNode.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14099FFA0 (PopRemoveReasonRecordByReasonCode.c)
 *     PopGetReasonListByReasonCode @ 0x14099FFEC (PopGetReasonListByReasonCode.c)
 *     EmClientQueryRuleState @ 0x140B6A420 (EmClientQueryRuleState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFilterCapabilities(__int64 a1, __int64 a2)
{
  bool v3; // zf
  char v4; // di
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  int v7; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rcx
  char v10; // r9
  char v11; // r10
  unsigned int v12; // r11d
  __int64 Pool2; // rax
  __int64 *v15; // rcx
  __int64 v16; // r9
  char *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rcx
  const void *v21[2]; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+30h] [rbp-20h] BYREF
  int v23; // [rsp+38h] [rbp-18h]
  int v24; // [rsp+3Ch] [rbp-14h]
  int *v25; // [rsp+40h] [rbp-10h]
  int *v26; // [rsp+48h] [rbp-8h]
  int v27; // [rsp+80h] [rbp+30h] BYREF
  int v28; // [rsp+88h] [rbp+38h] BYREF
  PVOID P; // [rsp+90h] [rbp+40h] BYREF

  v3 = PnPInitialized == 0;
  v4 = 0;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  v24 = 0;
  v5 = *(_OWORD *)(a1 + 16);
  HIDWORD(v21[0]) = 0;
  P = 0LL;
  *(_OWORD *)(a2 + 16) = v5;
  v28 = 0;
  v6 = *(_OWORD *)(a1 + 32);
  v27 = 0;
  *(_OWORD *)(a2 + 32) = v6;
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 72);
  if ( v3 )
    goto LABEL_11;
  v23 = 0;
  p_P = &P;
  v25 = &v28;
  v26 = &v27;
  IopGetLegacyVetoListDrivers(&p_P);
  v7 = v27;
  if ( v27 < 0 )
    goto LABEL_42;
  if ( !v28 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    IopGetLegacyVetoListDeviceNode(IopRootDeviceNode, &p_P);
    ExReleaseResourceLite(&IopDeviceTreeLock);
    KeLeaveCriticalRegion();
    v7 = v27;
  }
  if ( v7 < 0 )
    goto LABEL_42;
  if ( v28 )
  {
    LODWORD(v21[0]) = 0x20000;
    v21[1] = &word_140AEDAC0;
    IopAppendLegacyVeto((const void ***)&p_P, v21);
    v7 = v27;
  }
  if ( v7 < 0 )
  {
LABEL_42:
    v9 = (char *)P;
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v7 = v27;
      v9 = 0LL;
      P = 0LL;
    }
  }
  else
  {
    v9 = (char *)P;
  }
  if ( v7 < 0 )
    goto LABEL_11;
  if ( v28 )
  {
    v4 = 1;
    v16 = 0LL;
    v17 = v9;
    if ( *(_WORD *)v9 )
    {
      do
      {
        v18 = -1LL;
        do
          ++v18;
        while ( *(_WORD *)&v17[2 * v18] );
        v16 += 2 * v18 + 2;
        v17 = &v9[v16];
      }
      while ( *(_WORD *)&v9[v16] );
    }
    PopLogSleepDisabled(4, 31, v9, v16 + 2);
    v9 = (char *)P;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( !v4 )
LABEL_11:
    PopRemoveReasonRecordByReasonCode(4LL);
  v27 = 1;
  EmClientQueryRuleState(EM_RULE_DISABLE_FASTS4_GUID, &v27);
  if ( v27 == 2 )
  {
    if ( !PopGetReasonListByReasonCode(7LL) )
    {
      Pool2 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x66756263u);
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 24) = 7;
        *(_BYTE *)(Pool2 + 22) = 1;
        v15 = (__int64 *)qword_140F0B578;
        if ( *(__int64 **)qword_140F0B578 != &PowerStateDisableReasonListHead )
          goto LABEL_52;
        *(_QWORD *)Pool2 = &PowerStateDisableReasonListHead;
        *(_QWORD *)(Pool2 + 8) = v15;
        *v15 = Pool2;
        qword_140F0B578 = Pool2;
      }
    }
  }
  else
  {
    PopRemoveReasonRecordByReasonCode(7LL);
  }
  if ( !byte_140F0B39D )
  {
    PopRemoveReasonRecordByReasonCode(14LL);
    goto LABEL_16;
  }
  if ( !PopGetReasonListByReasonCode(14LL) )
  {
    v19 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x66756263u);
    if ( v19 )
    {
      *(_DWORD *)(v19 + 24) = 14;
      *(_WORD *)(v19 + 16) = 257;
      *(_BYTE *)(v19 + 18) = 1;
      v20 = (__int64 *)qword_140F0B578;
      if ( *(__int64 **)qword_140F0B578 == &PowerStateDisableReasonListHead )
      {
        *(_QWORD *)v19 = &PowerStateDisableReasonListHead;
        *(_QWORD *)(v19 + 8) = v20;
        *v20 = v19;
        qword_140F0B578 = v19;
        goto LABEL_16;
      }
LABEL_52:
      __fastfail(3u);
    }
  }
LABEL_16:
  PopLogDisabledSleepReason();
  if ( (unsigned __int8)PopCheckDisabledState(0LL) )
    *(_BYTE *)(a2 + 3) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(1LL) )
    *(_BYTE *)(a2 + 4) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(2LL) )
    *(_BYTE *)(a2 + 5) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(3LL) )
    *(_BYTE *)(a2 + 6) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(6LL) )
    *(_BYTE *)(a2 + 17) = 0;
  if ( !*(_BYTE *)(a2 + 5) || (v11 = v10) == 0 )
  {
    *(_BYTE *)(a2 + 17) = 0;
    if ( !v11 )
      *(_BYTE *)(a2 + 18) = 0;
  }
  return v12;
}
