/*
 * XREFs of ?AppendChildren@?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@QEAAJAEBV?$span@PEAVCGeometry2D@@$0?0@gsl@@@Z @ 0x180280C04
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>::AppendChildren(
        struct CResource ***a1,
        __int64 a2)
{
  return CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>::SetOrAppendChildren(a1, a2, 1);
}
