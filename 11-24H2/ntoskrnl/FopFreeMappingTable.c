/*
 * XREFs of FopFreeMappingTable @ 0x140BB48AC
 * Callers:
 *     FopFreeFontData @ 0x140BB4800 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140C725F4 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
