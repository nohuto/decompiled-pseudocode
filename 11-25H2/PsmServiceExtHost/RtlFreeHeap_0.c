/*
 * XREFs of RtlFreeHeap_0 @ 0x18007332C
 * Callers:
 *     CompatCacheLookupPackage @ 0x18003FFBC (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x180040390 (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall RtlFreeHeap_0(HANDLE HeapHandle, ULONG Flags, PVOID P)
{
  return RtlFreeHeap(HeapHandle, Flags, P);
}
