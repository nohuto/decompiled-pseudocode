/*
 * XREFs of KiRcuFlushCompletedWorkerRoutine @ 0x1405BBF10
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 */

__int64 KiRcuFlushCompletedWorkerRoutine()
{
  __int64 result; // rax

  do
  {
    _InterlockedAnd(&dword_140F20CC0, 0xFFFFFFFD);
    KiRcuFlushCompleted(1);
    result = (unsigned int)_InterlockedCompareExchange(&dword_140F20CC0, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
