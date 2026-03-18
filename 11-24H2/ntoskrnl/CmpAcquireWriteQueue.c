/*
 * XREFs of CmpAcquireWriteQueue @ 0x14049399C
 * Callers:
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D7EEC (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
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
