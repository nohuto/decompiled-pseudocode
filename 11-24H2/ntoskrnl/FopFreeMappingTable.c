/*
 * XREFs of FopFreeMappingTable @ 0x140BB28AC
 * Callers:
 *     FopFreeFontData @ 0x140BB2800 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140C70494 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
