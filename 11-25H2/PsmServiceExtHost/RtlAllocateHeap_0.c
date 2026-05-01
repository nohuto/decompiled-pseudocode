/*
 * XREFs of RtlAllocateHeap_0 @ 0x180073320
 * Callers:
 *     CompatCacheLookupPackage @ 0x18003FFBC (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x180040390 (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall RtlAllocateHeap_0(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  return RtlAllocateHeap(HeapHandle, Flags, Size);
}
