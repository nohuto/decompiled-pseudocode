/*
 * XREFs of DxgkGetDriverVersionNoLock @ 0x14018AA00
 * Callers:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14005D800 (DpiQueryIntegratedDescriptorWrapper.c)
 *     DpiMdmProcessStartAdapter @ 0x140088D14 (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkGetDriverVersionNoLock(__int64 a1)
{
  return *(unsigned int *)(a1 + 3004);
}
