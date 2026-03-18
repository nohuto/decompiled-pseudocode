/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1401C4AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400D8310 (-GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

_BOOL8 __fastcall GreIsVisRgnLockedShared(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return GrepIsLockOwnedByCurrentThread((struct _ERESOURCE *)(**(_QWORD **)(SessionState + 88) + 728LL));
}
