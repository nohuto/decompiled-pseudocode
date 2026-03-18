/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C00B2DA0
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C00B2D80 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C016A580 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
