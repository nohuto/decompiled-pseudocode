/*
 * XREFs of ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x14011E458
 * Callers:
 *     GreIsDynamicModeChangeLocked @ 0x14011E420 (GreIsDynamicModeChangeLocked.c)
 *     GreIsDisplayLocked @ 0x1401C4A10 (GreIsDisplayLocked.c)
 *     GreIsVisRgnLocked @ 0x1401C4AA0 (GreIsVisRgnLocked.c)
 *     GreIsVisRgnPublishLocked @ 0x1401C4B20 (GreIsVisRgnPublishLocked.c)
 * Callees:
 *     <none>
 */

bool __fastcall GrepIsLockOwnedExclusiveByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredExclusiveLite(a1) != 0;
}
