/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x140424B70
 * Callers:
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 * Callees:
 *     SmStoreExistsForProcess @ 0x14020DF24 (SmStoreExistsForProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     MiGetFirstVad @ 0x1403C6358 (MiGetFirstVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     KeForceAttachProcess @ 0x140424E30 (KeForceAttachProcess.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F78D8 (MiIsVadEligibleForCommitRelease.c)
 *     SmQueryStoreCommitUsage @ 0x14060B030 (SmQueryStoreCommitUsage.c)
 *     MiCheckCommitReleaseFromVad @ 0x14066AA50 (MiCheckCommitReleaseFromVad.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14066B248 (MiLogOutswappedProcessCommitRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(struct _EPROCESS *a1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *Pool; // r14
  unsigned __int8 v8; // al
  __int64 v9; // rbp
  BOOL v10; // r15d
  __int64 v11; // r13
  __int64 i; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  unsigned __int8 v15; // al
  unsigned int EntireFlags; // ecx
  void **p_CommitReleaseContext; // [rsp+30h] [rbp-58h]
  unsigned __int8 v18; // [rsp+93h] [rbp+Bh]
  __int64 v19; // [rsp+A0h] [rbp+18h]
  unsigned __int64 *p_ReleasedCommitDebt; // [rsp+A8h] [rbp+20h]

  KeForceAttachProcess((ULONG_PTR)a1);
  v2 = 1LL;
  if ( (a1->Vm.Instance.Flags.EntireFlags & 0xF) == 1 )
  {
    p_ReleasedCommitDebt = (unsigned __int64 *)&unk_140E38888;
    p_CommitReleaseContext = (void **)&unk_140E388A0;
  }
  else
  {
    p_ReleasedCommitDebt = &a1->Vm.Shared.ReleasedCommitDebt;
    p_CommitReleaseContext = &a1->Vm.Shared.CommitReleaseContext;
  }
  CurrentThread = KeGetCurrentThread();
  v4 = *((_QWORD *)qword_140E300C8 + a1->Vm.Instance.PartitionId);
  v19 = v4;
  Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x38uLL, 1917020493);
  if ( !Pool )
    goto LABEL_25;
  v8 = MiLockWorkingSetExclusive((__int64)&a1->Vm);
  a1->Vm.Instance.Flags.u2 = HIBYTE(a1->Vm.Instance.Flags.EntireFlags) | 0x30;
  MiUnlockWorkingSetExclusive((__int64)&a1->Vm, v8);
  if ( dword_140FC5250 != 1 )
  {
    v10 = 0;
    v11 = 0LL;
    if ( *(_DWORD *)(v4 + 1204) != -1 )
      v10 = SmStoreExistsForProcess((__int64)a1);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)a1);
    for ( i = (__int64)MiGetFirstVad((__int64)a1); ; i = MiGetNextVad(v14) )
    {
      v14 = i;
      if ( !i )
        break;
      MiLockVad((__int64)CurrentThread, i);
      if ( (unsigned int)MiIsVadEligibleForCommitRelease(v14) )
      {
        v13 = MiCheckCommitReleaseFromVad(v19, (_DWORD)a1, (int)a1 + 1024, v14, v10, (__int64)(Pool + 4));
        MiUnlockVad((__int64)CurrentThread, v14);
        v11 += v13;
      }
      else
      {
        MiUnlockVad((__int64)CurrentThread, v14);
      }
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)a1);
    v2 = v11;
    _InterlockedExchange64((volatile __int64 *)&a1->Vm.Shared.ResetPagesRepurposedCount, 0LL);
    v9 = Pool[4];
    if ( v10 )
    {
      SmQueryStoreCommitUsage(a1);
      if ( !v11 )
      {
        v2 = 0LL;
        goto LABEL_20;
      }
      v2 = v11;
    }
    if ( v2 )
      MiReturnCommit(v19, v2, 0);
    goto LABEL_20;
  }
  v9 = 0LL;
LABEL_20:
  v15 = MiLockWorkingSetExclusive((__int64)&a1->Vm);
  EntireFlags = a1->Vm.Instance.Flags.EntireFlags;
  if ( v2 )
  {
    v18 = HIBYTE(EntireFlags) & 0xCF | 0x20;
    *p_ReleasedCommitDebt = v2;
    *p_CommitReleaseContext = Pool;
    Pool = 0LL;
  }
  else
  {
    v18 = HIBYTE(EntireFlags) & 0xCF;
  }
  a1->Vm.Instance.Flags.u2 = v18;
  MiUnlockWorkingSetExclusive((__int64)&a1->Vm, v15);
  MiLogOutswappedProcessCommitRelease(a1, v2, v9);
LABEL_25:
  KeForceDetachProcess(0LL, 0, v5, v6);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
