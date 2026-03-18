/*
 * XREFs of IommuInitializeLibrary @ 0x140564434
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4D550 (HalpIommuInitSystem.c)
 * Callees:
 *     IommupHvInitializeLibrary @ 0x140C14944 (IommupHvInitializeLibrary.c)
 */

__int64 IommuInitializeLibrary()
{
  IommupSystemContextListPushLock = 0LL;
  qword_140F8ED38 = (__int64)&IommupSystemContextListHead;
  IommupSystemContextListHead = &IommupSystemContextListHead;
  if ( HalpHvIommu )
    IommupHvInitializeLibrary();
  return 0LL;
}
