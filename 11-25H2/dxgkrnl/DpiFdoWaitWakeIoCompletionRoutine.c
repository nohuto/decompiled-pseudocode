/*
 * XREFs of DpiFdoWaitWakeIoCompletionRoutine @ 0x14008B170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoWaitWakeIoCompletionRoutine(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 2752LL), 7) == 5 )
    return 3221225494LL;
  return result;
}
