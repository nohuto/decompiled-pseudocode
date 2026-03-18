/*
 * XREFs of ZwMapUserPhysicalPagesScatter @ 0x1406A6470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwMapUserPhysicalPagesScatter()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
