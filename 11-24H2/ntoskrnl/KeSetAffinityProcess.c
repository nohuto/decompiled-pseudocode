/*
 * XREFs of KeSetAffinityProcess @ 0x140202B7C
 * Callers:
 *     PspSetProcessAffinitySafe @ 0x140A4B2A4 (PspSetProcessAffinitySafe.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B575C0 (KiInitializeDynamicProcessorDpc.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x140202778 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 *     KiSetIdealNodeProcessByGroup @ 0x140202E3C (KiSetIdealNodeProcessByGroup.c)
 *     KiUpdateProcessAvailableCpuState @ 0x140204268 (KiUpdateProcessAvailableCpuState.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiSetAffinityThread @ 0x1403B1A08 (KiSetAffinityThread.c)
 *     KiReleaseProcessLockExclusive @ 0x1403B3B08 (KiReleaseProcessLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404FB240 (KiNotifyAvailableCpusChangeProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  $B38C3B1372D6E954799962D5DD404846 *v21; // r15
  signed __int64 v22; // r13
  char v23; // r12
  unsigned __int64 v24; // r8
  char v25; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v26; // [rsp+22h] [rbp-DEh]
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-C0h]
  _KGROUP_MASK i; // [rsp+48h] [rbp-B8h] BYREF
  struct _KAFFINITY_EX v30; // [rsp+60h] [rbp-A0h] BYREF

  v5 = a1;
  memset_0(&v30.8, 0, sizeof(v30.8));
  *(_QWORD *)&v30.Count = 2097153LL;
  v6 = 0;
  v25 = 0;
  v7 = 0;
  v8 = 0;
  memset_0(&v30.8, 0, sizeof(v30.8));
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v8 = 1;
    else
      v25 = 1;
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
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = 2;
    LOBYTE(v9) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v9, v10, 1LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v5->ProcessLock);
  if ( v8 && (*(_DWORD *)&v5->0 & 0x1000) != 0 )
  {
    LOBYTE(v13) = CurrentIrql;
    KiReleaseProcessLockExclusive(v5, v13);
    return 3221225485LL;
  }
  v14 = v25;
  Affinity = v5->Affinity;
  if ( !v25 )
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
    v14 = v25;
    goto LABEL_14;
  }
  Count = Affinity->Count;
  v20 = 0;
  v26 = Affinity->Count;
  if ( Affinity->Count )
  {
    v21 = &Affinity->8;
    v22 = (char *)a3 - (char *)Affinity;
    v23 = 0;
    do
    {
      v24 = v21->Bitmap[0];
      if ( v21->Bitmap[0] )
      {
        if ( v20 < a3->Count && (*(unsigned __int64 *)((char *)v21->Bitmap + v22) | v24) != v24 )
        {
          v24 |= *(unsigned __int64 *)((char *)v21->Bitmap + v22);
          v23 = 1;
        }
        KeAddGroupAffinityEx(&v30, v20, v24);
        Count = v26;
      }
      ++v20;
      v21 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v21 + 8);
    }
    while ( v20 < Count );
    v5 = a1;
    if ( v23 )
    {
      KiCopyAffinityEx(Affinity, Affinity->Size, &v30);
      v7 = v23;
      goto LABEL_13;
    }
    v7 = 0;
  }
LABEL_19:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v5->ProcessLock);
  KiProcessDeferredReadyList(CurrentPrcb);
  if ( v7 )
  {
    KiUpdateProcessAvailableCpuState(v5, 0LL);
    KiNotifyAvailableCpusChangeProcess(v5);
  }
  return 0LL;
}
