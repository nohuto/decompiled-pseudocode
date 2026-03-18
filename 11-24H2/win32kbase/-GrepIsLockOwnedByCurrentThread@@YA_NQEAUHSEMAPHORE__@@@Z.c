/*
 * XREFs of ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400D8310
 * Callers:
 *     GreIsVisRgnLockedShared @ 0x1401C4AE0 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

bool __fastcall GrepIsLockOwnedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
