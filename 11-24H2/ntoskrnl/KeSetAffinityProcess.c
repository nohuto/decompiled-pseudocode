/*
 * XREFs of KeSetAffinityProcess @ 0x14032B26C
 * Callers:
 *     PspSetProcessAffinitySafe @ 0x140A42004 (PspSetProcessAffinitySafe.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B59640 (KiInitializeDynamicProcessorDpc.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x14032AE68 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 *     KiSetIdealNodeProcessByGroup @ 0x14032B52C (KiSetIdealNodeProcessByGroup.c)
 *     KiUpdateProcessAvailableCpuState @ 0x14032B848 (KiUpdateProcessAvailableCpuState.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiSetAffinityThread @ 0x1403A0218 (KiSetAffinityThread.c)
 *     KiReleaseProcessLockExclusive @ 0x1403A2318 (KiReleaseProcessLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404F8B20 (KiNotifyAvailableCpusChangeProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeSetAffinityProcess(struct _KPROCESS *a1, char a2, struct _KAFFINITY_EX *a3)
{
  struct _KPROCESS *v5; // rbx
  char v6; // r13
  char v7; // r15
  char v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int16 v11; // ax
  unsigned __int8 CurrentIrql; // r12
  __int64 v13; // rdx
  char v14; // r14
  struct _KAFFINITY_EX *Affinity; // rdi
  unsigned __int16 v16; // di
  _LIST_ENTRY *j; // rdi
  unsigned __int16 Count; // ax
  unsigned __int16 v20; // r14
  __int64 *v21; // r15
  signed __int64 v22; // r13
  char v23; // r12
  __int64 v24; // r8
  bool v25; // zf
  char v26; // [rsp+20h] [rbp-E0h]
  char v27; // [rsp+21h] [rbp-DFh]
  unsigned __int16 v28; // [rsp+22h] [rbp-DEh]
  unsigned __int8 v29; // [rsp+28h] [rbp-D8h]
  _QWORD *v30; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPROCESS *v31; // [rsp+38h] [rbp-C8h]
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-C0h]
  _KGROUP_MASK i; // [rsp+48h] [rbp-B8h] BYREF
  struct _KAFFINITY_EX v34; // [rsp+60h] [rbp-A0h] BYREF

  v31 = a1;
  v5 = a1;
  memset_0(&v34.8, 0, sizeof(v34.8));
  *(_QWORD *)&v34.Count = 2097153LL;
  v6 = 0;
  v26 = 0;
  v7 = 0;
  v30 = 0LL;
  v8 = 0;
  memset_0(&v34.8, 0, sizeof(v34.8));
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v8 = 1;
    else
      v26 = 1;
  }
  v10 = 0LL;
  v11 = 0;
  for ( i = 0LL; v11 < a3->Count; ++v11 )
  {
    v9 = v11;
    if ( a3->Bitmap[v11] )
    {
      _bittestandset64((signed __int64 *)&i, v11);
      v10 = 0LL;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  v29 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = 2;
    LOBYTE(v9) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v9, v10);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v5->ProcessLock);
  if ( v8 && (*(_DWORD *)&v5->0 & 0x1000) != 0 )
  {
    LOBYTE(v13) = CurrentIrql;
    KiReleaseProcessLockExclusive(v5, v13);
    return 3221225485LL;
  }
  v14 = v26;
  Affinity = v5->Affinity;
  if ( !v26 )
  {
    KiCopyAffinityEx(Affinity, Affinity->Size, a3);
    v7 = 1;
    v16 = 0;
    if ( !a3->Count )
    {
LABEL_14:
      KiSelectIdealProcessorSetsForProcess(
        (unsigned __int64)v5,
        &v5->IdealProcessorAssignmentBlock->ExpectedConcurrencyCount,
        &v5->IdealProcessorAssignmentBlock->IdealProcessorSets,
        &v5->IdealProcessorAssignmentBlock->Breakpoints);
      for ( j = v5->ThreadListHead.Flink; j != &v5->ThreadListHead; j = j->Flink )
        KiSetAffinityThread((_DWORD)j - 760);
      if ( !v14 )
        v5->ActiveGroupsMask = i;
      goto LABEL_19;
    }
    do
    {
      if ( a3->Bitmap[v16] )
      {
        KiSetIdealNodeProcessByGroup(v5, 0LL, v16);
        if ( !v6 )
        {
          v6 = 1;
          v5->IdealGlobalNode = v5->IdealProcessorAssignmentBlock->IdealNode[v16];
          v5->PrimaryGroup = v16;
        }
      }
      ++v16;
    }
    while ( v16 < a3->Count );
LABEL_13:
    v14 = v26;
    goto LABEL_14;
  }
  Count = Affinity->Count;
  v20 = 0;
  v28 = Affinity->Count;
  if ( Affinity->Count )
  {
    v21 = (__int64 *)&Affinity->8;
    v22 = (char *)a3 - (char *)Affinity;
    v23 = 0;
    do
    {
      v24 = *v21;
      if ( *v21 )
      {
        if ( v20 < a3->Count && (*(__int64 *)((char *)v21 + v22) | v24) != v24 )
        {
          v24 |= *(__int64 *)((char *)v21 + v22);
          v23 = 1;
        }
        KeAddGroupAffinityEx(&v34.Count, v20, v24);
        Count = v28;
      }
      ++v20;
      ++v21;
    }
    while ( v20 < Count );
    v5 = v31;
    v25 = v23 == 0;
    v27 = v23;
    CurrentIrql = v29;
    if ( !v25 )
    {
      KiCopyAffinityEx(Affinity, Affinity->Size, &v34);
      v7 = v27;
      goto LABEL_13;
    }
    v7 = v27;
  }
LABEL_19:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v5->ProcessLock);
  KiProcessDeferredReadyList(CurrentPrcb, &v30, CurrentIrql);
  if ( v7 )
  {
    KiUpdateProcessAvailableCpuState(v5, 0LL);
    KiNotifyAvailableCpusChangeProcess(v5);
  }
  return 0LL;
}
