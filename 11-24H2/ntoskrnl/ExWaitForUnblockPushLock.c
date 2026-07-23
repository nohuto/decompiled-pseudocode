/*
 * XREFs of ExWaitForUnblockPushLock @ 0x1402BA490
 * Callers:
 *     <none>
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x1402BB8D0 (ExTimedWaitForUnblockPushLock.c)
 */

__int64 __fastcall ExWaitForUnblockPushLock(__int64 a1, __int64 a2)
{
  return ExTimedWaitForUnblockPushLock(a1, a2, 0LL);
}
