/*
 * XREFs of ExTimerRundown @ 0x14027DA04
 * Callers:
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpCancelTimer @ 0x1402BE0F0 (ExpCancelTimer.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectExWithTag @ 0x1403B3DE0 (ObDereferenceObjectExWithTag.c)
 */

void ExTimerRundown()
{
  struct _KTHREAD *CurrentThread; // rdi
  KIRQL v1; // al
  void **p_StackBase; // r14
  KIRQL v3; // bp
  _QWORD *v4; // rax
  ULONG_PTR v5; // rsi
  KIRQL v6; // r12

  CurrentThread = KeGetCurrentThread();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  p_StackBase = &CurrentThread[1].StackBase;
  while ( 1 )
  {
    v3 = v1;
    v4 = *p_StackBase;
    if ( *p_StackBase == p_StackBase )
      break;
    v5 = (ULONG_PTR)(v4 - 28);
    ObfReferenceObjectWithTag(v4 - 28, 0x746C6644u);
    KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit, v3);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 64));
    if ( (*(_BYTE *)(v5 + 304) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v5 + 80) )
      ExpCancelTimer((PKTIMER)v5);
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 64), v6);
    ObDereferenceObjectExWithTag(v5);
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit, v3);
}
