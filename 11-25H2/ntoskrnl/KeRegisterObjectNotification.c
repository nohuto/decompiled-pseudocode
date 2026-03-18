/*
 * XREFs of KeRegisterObjectNotification @ 0x140306594
 * Callers:
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140306390 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14064E8B0 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x1409A67B0 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140C324E4 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiWaitSatisfyOther @ 0x14027FA20 (KiWaitSatisfyOther.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v5);
  if ( *(int *)(v5 + 4) > 0 )
  {
    KiWaitSatisfyOther(v5);
    *(_BYTE *)(a3 + 17) = 5;
    KiInsertQueueInternal(a2, (__int64 *)a3);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    KiExitDispatcher(KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
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
