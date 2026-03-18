/*
 * XREFs of ExTimerRundown @ 0x1404380AC
 * Callers:
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExpCancelTimer @ 0x1402EC9C0 (ExpCancelTimer.c)
 *     ObDereferenceObjectExWithTag @ 0x1404381A0 (ObDereferenceObjectExWithTag.c)
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
