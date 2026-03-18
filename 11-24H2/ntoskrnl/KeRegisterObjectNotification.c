/*
 * XREFs of KeRegisterObjectNotification @ 0x140205AB0
 * Callers:
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140205A00 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x1404E5C30 (NtAssociateWaitCompletionPacket.c)
 *     ExpWorkerFactoryManagerThread @ 0x14065AA40 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x1409A6CF0 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140C436D8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiWaitSatisfyOther @ 0x140205BC0 (KiWaitSatisfyOther.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  v5 = a1;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL, a3);
  }
  KiAcquireKobjectLockSafe(v5);
  if ( *(int *)(v5 + 4) > 0 )
  {
    KiWaitSatisfyOther(v5);
    *(_BYTE *)(a3 + 17) = 5;
    KiInsertQueueInternal(a2, a3);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    KiExitDispatcher(KeGetCurrentPrcb(), CurrentIrql);
    return 1;
  }
  else
  {
    v8 = *(_QWORD **)(v5 + 16);
    if ( *v8 != v5 + 8 )
      __fastfail(3u);
    *(_QWORD *)a3 = v5 + 8;
    *(_QWORD *)(a3 + 8) = v8;
    *v8 = a3;
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
