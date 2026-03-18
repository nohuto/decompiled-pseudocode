/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x14042D608
 * Callers:
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     SmStoreExistsForProcess @ 0x140245744 (SmStoreExistsForProcess.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     MiGetFirstVad @ 0x1404043B8 (MiGetFirstVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     KeForceAttachProcess @ 0x14042D8D0 (KeForceAttachProcess.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F9FF8 (MiIsVadEligibleForCommitRelease.c)
 *     SmQueryStoreCommitUsage @ 0x14060CA70 (SmQueryStoreCommitUsage.c)
 *     MiCheckCommitReleaseFromVad @ 0x140669880 (MiCheckCommitReleaseFromVad.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14066A078 (MiLogOutswappedProcessCommitRelease.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(struct _EPROCESS *a1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // rbp
  _QWORD *Pool; // r14
  unsigned __int8 v6; // al
  __int64 v7; // rbp
  BOOL v8; // r15d
  __int64 v9; // r13
  __int64 i; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  unsigned __int8 v13; // al
  unsigned int EntireFlags; // ecx
  void **p_CommitReleaseContext; // [rsp+30h] [rbp-58h]
  unsigned __int8 v16; // [rsp+93h] [rbp+Bh]
  __int64 v17; // [rsp+A0h] [rbp+18h]
  unsigned __int64 *p_ReleasedCommitDebt; // [rsp+A8h] [rbp+20h]

  KeForceAttachProcess((ULONG_PTR)a1);
  v2 = 1LL;
  if ( (a1->Vm.Instance.Flags.EntireFlags & 0xF) == 1 )
  {
    p_ReleasedCommitDebt = (unsigned __int64 *)&unk_140E38748;
    p_CommitReleaseContext = (void **)&unk_140E38760;
  }
  else
  {
    p_ReleasedCommitDebt = &a1->Vm.Shared.ReleasedCommitDebt;
    p_CommitReleaseContext = &a1->Vm.Shared.CommitReleaseContext;
  }
  CurrentThread = KeGetCurrentThread();
  v4 = *((_QWORD *)qword_140E2FF88 + a1->Vm.Instance.PartitionId);
  v17 = v4;
  Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x38uLL, 1917020493);
  if ( !Pool )
    goto LABEL_25;
  v6 = MiLockWorkingSetExclusive((__int64)&a1->Vm);
  a1->Vm.Instance.Flags.u2 = HIBYTE(a1->Vm.Instance.Flags.EntireFlags) | 0x30;
  MiUnlockWorkingSetExclusive((__int64)&a1->Vm, v6);
  if ( dword_140FC4250 != 1 )
  {
    v8 = 0;
    v9 = 0LL;
    if ( *(_DWORD *)(v4 + 1204) != -1 )
      v8 = SmStoreExistsForProcess((__int64)a1);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)a1);
    for ( i = (__int64)MiGetFirstVad((__int64)a1); ; i = MiGetNextVad(v12) )
    {
      v12 = i;
      if ( !i )
        break;
      MiLockVad((__int64)CurrentThread, i);
      if ( (unsigned int)MiIsVadEligibleForCommitRelease(v12) )
      {
        v11 = MiCheckCommitReleaseFromVad(v17, (_DWORD)a1, (int)a1 + 1024, v12, v8, (__int64)(Pool + 4));
        MiUnlockVad((__int64)CurrentThread, v12);
        v9 += v11;
      }
      else
      {
        MiUnlockVad((__int64)CurrentThread, v12);
      }
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)a1);
    v2 = v9;
    _InterlockedExchange64((volatile __int64 *)&a1->Vm.Shared.ResetPagesRepurposedCount, 0LL);
    v7 = Pool[4];
    if ( v8 )
    {
      SmQueryStoreCommitUsage(a1);
      if ( !v9 )
      {
        v2 = 0LL;
        goto LABEL_20;
      }
      v2 = v9;
    }
    if ( v2 )
      MiReturnCommit(v17, v2, 0);
    goto LABEL_20;
  }
  v7 = 0LL;
LABEL_20:
  v13 = MiLockWorkingSetExclusive((__int64)&a1->Vm);
  EntireFlags = a1->Vm.Instance.Flags.EntireFlags;
  if ( v2 )
  {
    v16 = HIBYTE(EntireFlags) & 0xCF | 0x20;
    *p_ReleasedCommitDebt = v2;
    *p_CommitReleaseContext = Pool;
    Pool = 0LL;
  }
  else
  {
    v16 = HIBYTE(EntireFlags) & 0xCF;
  }
  a1->Vm.Instance.Flags.u2 = v16;
  MiUnlockWorkingSetExclusive((__int64)&a1->Vm, v13);
  MiLogOutswappedProcessCommitRelease(a1, v2, v7);
LABEL_25:
  KeForceDetachProcess(0LL, 0);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
