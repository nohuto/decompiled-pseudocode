/*
 * XREFs of SepFreeTokenCapabilities @ 0x140471AA8
 * Callers:
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepTokenDeleteMethod @ 0x1409A7370 (SepTokenDeleteMethod.c)
 *     SepSetTokenCapabilities @ 0x140A08CB8 (SepSetTokenCapabilities.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x140785648 (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)(a1 + 792);
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*v1, *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*v1, 0);
}
