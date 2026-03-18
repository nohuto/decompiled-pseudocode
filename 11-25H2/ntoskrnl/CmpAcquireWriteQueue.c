/*
 * XREFs of CmpAcquireWriteQueue @ 0x140494C0C
 * Callers:
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407C8754 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  __int64 *result; // rax

  result = KeAbPreAcquire((__int64)a1, 0LL);
  *a1 = KeGetCurrentThread();
  if ( result )
    *((_BYTE *)result + 10) = 1;
  return result;
}
