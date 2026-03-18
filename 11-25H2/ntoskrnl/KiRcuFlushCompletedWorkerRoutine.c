/*
 * XREFs of KiRcuFlushCompletedWorkerRoutine @ 0x1405B8070
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 */

__int64 KiRcuFlushCompletedWorkerRoutine()
{
  __int64 result; // rax

  do
  {
    _InterlockedAnd(&dword_140F20520, 0xFFFFFFFD);
    KiRcuFlushCompleted(1);
    result = (unsigned int)_InterlockedCompareExchange(&dword_140F20520, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
