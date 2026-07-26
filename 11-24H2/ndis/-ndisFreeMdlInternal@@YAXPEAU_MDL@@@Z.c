/*
 * XREFs of ?ndisFreeMdlInternal@@YAXPEAU_MDL@@@Z @ 0x140021E90
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x140021FE0 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMdlInternal(PMDL Mdl)
{
  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  ExFreePoolWithTag(Mdl, 0);
}
