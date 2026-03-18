/*
 * XREFs of DxgkSubmitCommandToHwQueue @ 0x1402C59F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402C5A10 (DxgkSubmitCommandToHwQueueInternal.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueue(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1)
{
  return DxgkSubmitCommandToHwQueueInternal(a1);
}
