/*
 * XREFs of RtlAllocateHeap_0 @ 0x1800731F0
 * Callers:
 *     CompatCacheLookupPackage @ 0x18003FF3C (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x180040310 (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall RtlAllocateHeap_0(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  return RtlAllocateHeap(HeapHandle, Flags, Size);
}
