/*
 * XREFs of ?AppendChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@@Z @ 0x180280BF4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>::AppendChildren(
        struct CResource ***a1,
        __int64 a2)
{
  return CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>::SetOrAppendChildren(a1, a2, 1);
}
