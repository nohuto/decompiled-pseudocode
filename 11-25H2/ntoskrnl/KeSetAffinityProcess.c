/*
 * XREFs of KeSetAffinityProcess @ 0x140269780
 * Callers:
 *     PspSetProcessAffinitySafe @ 0x140A48864 (PspSetProcessAffinitySafe.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B47620 (KiInitializeDynamicProcessorDpc.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KiUpdateProcessAvailableCpuState @ 0x140267998 (KiUpdateProcessAvailableCpuState.c)
 *     KiSetIdealNodeProcessByGroup @ 0x140268C58 (KiSetIdealNodeProcessByGroup.c)
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x140269A70 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiSetAffinityThread @ 0x140271884 (KiSetAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReleaseProcessLockExclusive @ 0x1403AE69C (KiReleaseProcessLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404F8BC0 (KiNotifyAvailableCpusChangeProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeSetAffinityProcess(struct _KPROCESS *a1, char a2, struct _KAFFINITY_EX *a3)
{
  struct _KPROCESS *v5; // rbx
  char v6; // r13
  char v7; // r15
  char v8; // r14
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  unsigned __int8 CurrentIrql; // r12
  __int64 v12; // rdx
  char v13; // r14
  struct _KAFFINITY_EX *Affinity; // rdi
  unsigned __int16 v15; // di
  __int64 v16; // r9
  _LIST_ENTRY *j; // rdi
  __int64 v18; // r8
  unsigned __int16 Count; // ax
  unsigned __int16 v21; // r14
  __int64 *v22; // r15
  signed __int64 v23; // r13
  char v24; // r12
  __int64 v25; // r8
  bool v26; // zf
  char v27; // [rsp+20h] [rbp-E0h]
  char v28; // [rsp+21h] [rbp-DFh]
  unsigned __int16 v29; // [rsp+22h] [rbp-DEh]
  unsigned __int8 v30; // [rsp+28h] [rbp-D8h]
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPROCESS *v32; // [rsp+38h] [rbp-C8h]
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-C0h]
  _KGROUP_MASK i; // [rsp+48h] [rbp-B8h] BYREF
  struct _KAFFINITY_EX v35; // [rsp+60h] [rbp-A0h] BYREF

  v32 = a1;
  v5 = a1;
  memset_0(&v35.8, 0, sizeof(v35.8));
  *(_QWORD *)&v35.Count = 2097153LL;
  v6 = 0;
  v27 = 0;
  v7 = 0;
  v31 = 0LL;
  v8 = 0;
  memset_0(&v35.8, 0, sizeof(v35.8));
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v8 = 1;
    else
      v27 = 1;
  }
  v10 = 0;
  for ( i = 0LL; v10 < a3->Count; ++v10 )
  {
    v9 = v10;
    if ( a3->Bitmap[v10] )
      _bittestandset64((signed __int64 *)&i, v10);
  }
  CurrentIrql = KeGetCurrentIrql();
  v30 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v9);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v5->ProcessLock);
  if ( v8 && (*(_DWORD *)&v5->0 & 0x1000) != 0 )
  {
    LOBYTE(v12) = CurrentIrql;
    KiReleaseProcessLockExclusive(v5, v12);
    return 3221225485LL;
  }
  v13 = v27;
  Affinity = v5->Affinity;
  if ( !v27 )
  {
    KiCopyAffinityEx(Affinity, Affinity->Size, a3);
    v7 = 1;
    v15 = 0;
    if ( !a3->Count )
    {
LABEL_14:
      KiSelectIdealProcessorSetsForProcess(
        v5,
        &v5->IdealProcessorAssignmentBlock->ExpectedConcurrencyCount,
        &v5->IdealProcessorAssignmentBlock->IdealProcessorSets,
        &v5->IdealProcessorAssignmentBlock->Breakpoints);
      for ( j = v5->ThreadListHead.Flink; j != &v5->ThreadListHead; j = j->Flink )
      {
        LOBYTE(v16) = CurrentIrql;
        KiSetAffinityThread(&j[-48].Blink, &v31, v5->Affinity, v16);
      }
      if ( !v13 )
        v5->ActiveGroupsMask = i;
      goto LABEL_19;
    }
    do
    {
      if ( a3->Bitmap[v15] )
      {
        KiSetIdealNodeProcessByGroup((__int64)v5, 0LL, v15);
        if ( !v6 )
        {
          v6 = 1;
          v5->IdealGlobalNode = v5->IdealProcessorAssignmentBlock->IdealNode[v15];
          v5->PrimaryGroup = v15;
        }
      }
      ++v15;
    }
    while ( v15 < a3->Count );
LABEL_13:
    v13 = v27;
    goto LABEL_14;
  }
  Count = Affinity->Count;
  v21 = 0;
  v29 = Affinity->Count;
  if ( Affinity->Count )
  {
    v22 = (__int64 *)&Affinity->8;
    v23 = (char *)a3 - (char *)Affinity;
    v24 = 0;
    do
    {
      v25 = *v22;
      if ( *v22 )
      {
        if ( v21 < a3->Count && (*(__int64 *)((char *)v22 + v23) | v25) != v25 )
        {
          v25 |= *(__int64 *)((char *)v22 + v23);
          v24 = 1;
        }
        KeAddGroupAffinityEx(&v35.Count, v21, v25);
        Count = v29;
      }
      ++v21;
      ++v22;
    }
    while ( v21 < Count );
    v5 = v32;
    v26 = v24 == 0;
    v28 = v24;
    CurrentIrql = v30;
    if ( !v26 )
    {
      KiCopyAffinityEx(Affinity, Affinity->Size, &v35);
      v7 = v28;
      goto LABEL_13;
    }
    v7 = v28;
  }
LABEL_19:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v5->ProcessLock);
  LOBYTE(v18) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v31, v18);
  if ( v7 )
  {
    KiUpdateProcessAvailableCpuState((__int64)v5, 0);
    KiNotifyAvailableCpusChangeProcess(v5);
  }
  return 0LL;
}
