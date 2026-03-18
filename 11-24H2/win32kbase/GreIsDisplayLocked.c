/*
 * XREFs of GreIsDisplayLocked @ 0x1401C4A10
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x14011E458 (-GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

_BOOL8 __fastcall GreIsDisplayLocked(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return GrepIsLockOwnedExclusiveByCurrentThread((struct _ERESOURCE *)(**(_QWORD **)(SessionState + 88) + 1144LL));
}
