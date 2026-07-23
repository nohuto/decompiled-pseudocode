/*
 * XREFs of KeRegisterObjectNotification @ 0x14032D090
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x14032CFE0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     NtAssociateWaitCompletionPacket @ 0x1404DC340 (NtAssociateWaitCompletionPacket.c)
 *     ExpWorkerFactoryManagerThread @ 0x140659160 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x1409901C0 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140C45D44 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiWaitSatisfyOther @ 0x14032D1A0 (KiWaitSatisfyOther.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rcx

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  v5 = a1;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v5);
  if ( *(int *)(v5 + 4) > 0 )
  {
    KiWaitSatisfyOther(v5, v7, v8, v9);
    *(_BYTE *)(a3 + 17) = 5;
    KiInsertQueueInternal(a2, (__int64 *)a3);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    KiExitDispatcher((unsigned __int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
    return 1;
  }
  else
  {
    v10 = *(_QWORD **)(v5 + 16);
    if ( *v10 != v5 + 8 )
      __fastfail(3u);
    *(_QWORD *)a3 = v5 + 8;
    *(_QWORD *)(a3 + 8) = v10;
    *v10 = a3;
    *(_QWORD *)(v5 + 16) = a3;
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(CurrentIrql);
    return 0;
  }
}
