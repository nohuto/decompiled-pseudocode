/*
 * XREFs of DxgkGetDriverVersionNoLock @ 0x14018C9F0
 * Callers:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14005D260 (DpiQueryIntegratedDescriptorWrapper.c)
 *     DpiMdmProcessStartAdapter @ 0x1400893FC (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkGetDriverVersionNoLock(__int64 a1)
{
  return *(unsigned int *)(a1 + 3004);
}
