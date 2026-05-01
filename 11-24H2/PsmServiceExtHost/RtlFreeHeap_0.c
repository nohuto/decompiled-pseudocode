/*
 * XREFs of RtlFreeHeap_0 @ 0x1800731FC
 * Callers:
 *     CompatCacheLookupPackage @ 0x18003FF3C (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x180040310 (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall RtlFreeHeap_0(HANDLE HeapHandle, ULONG Flags, PVOID P)
{
  return RtlFreeHeap(HeapHandle, Flags, P);
}
