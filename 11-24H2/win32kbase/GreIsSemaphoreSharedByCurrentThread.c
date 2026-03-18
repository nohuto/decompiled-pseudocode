/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1401366B0
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x140136690 (EngIsSemaphoreSharedByCurrentThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
