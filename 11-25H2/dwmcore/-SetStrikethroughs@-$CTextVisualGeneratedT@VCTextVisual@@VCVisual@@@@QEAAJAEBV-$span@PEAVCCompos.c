/*
 * XREFs of ?SetStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x180284ADC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetStrikethroughs(struct CResource ***a1, __int64 a2)
{
  return CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendStrikethroughs(a1, a2, 0);
}
