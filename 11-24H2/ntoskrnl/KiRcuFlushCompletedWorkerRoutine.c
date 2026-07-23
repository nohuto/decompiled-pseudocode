/*
 * XREFs of KiRcuFlushCompletedWorkerRoutine @ 0x1405B9540
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 */

__int64 __fastcall KiRcuFlushCompletedWorkerRoutine(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  do
  {
    _InterlockedAnd(&dword_140F20640, 0xFFFFFFFD);
    KiRcuFlushCompleted(1LL, a2);
    result = (unsigned int)_InterlockedCompareExchange(&dword_140F20640, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
