/*
 * XREFs of SepFreeTokenCapabilities @ 0x14046FF38
 * Callers:
 *     SepSetTokenCapabilities @ 0x140936380 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x140AD88D0 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x140794A18 (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)(a1 + 792);
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*v1, *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*v1, 0);
}
