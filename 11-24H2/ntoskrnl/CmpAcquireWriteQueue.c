/*
 * XREFs of CmpAcquireWriteQueue @ 0x14048E38C
 * Callers:
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

_QWORD *__fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  _QWORD *result; // rax

  result = KeAbPreAcquire((__int64)a1, 0LL);
  *a1 = KeGetCurrentThread();
  if ( result )
    *((_BYTE *)result + 10) = 1;
  return result;
}
