/*
 * XREFs of SepFreeTokenCapabilities @ 0x14046A360
 * Callers:
 *     SepSetTokenCapabilities @ 0x1409854B8 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x140794AA0 (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)(a1 + 792);
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*v1, *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*v1, 0);
}
