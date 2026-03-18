/*
 * XREFs of PopFxIdleWorker @ 0x14034964C
 * Callers:
 *     PopFxIdleComponent @ 0x14034C3F8 (PopFxIdleComponent.c)
 *     PopFxComponentWork @ 0x14045A530 (PopFxComponentWork.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     PopFxIdleWorkerTail @ 0x1403492B0 (PopFxIdleWorkerTail.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopFxAddLogEntry @ 0x140359640 (PopFxAddLogEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopFxIdleWorker(_QWORD *BugCheckParameter2, unsigned int a2, void *a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  char v8; // di
  __int64 v9; // rdx

  v6 = *(_QWORD *)(BugCheckParameter2[109] + 8LL * a2);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 128));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0x40000000, 0x80000000) != 0x80000000 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 128), v7);
    return;
  }
  KeResetEvent((PRKEVENT)(v6 + 104));
  *(_DWORD *)(v6 + 136) = 2;
  v8 = 0;
  if ( BugCheckParameter2[15] )
  {
    guard_dispatch_icall_no_overrides(BugCheckParameter2[24], a2);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 136), 0xFFFFFFFF) != 1 )
    {
      PopFxAddLogEntry(BugCheckParameter2[6], a2, 13LL);
      goto LABEL_5;
    }
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 136), 0xFFFFFFFE);
  }
  v8 = 1;
LABEL_5:
  KxReleaseSpinLock(v6 + 128);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = v7;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  __writecr8(v7);
  if ( v8 )
    PopFxIdleWorkerTail(BugCheckParameter2, a2, a3);
}
