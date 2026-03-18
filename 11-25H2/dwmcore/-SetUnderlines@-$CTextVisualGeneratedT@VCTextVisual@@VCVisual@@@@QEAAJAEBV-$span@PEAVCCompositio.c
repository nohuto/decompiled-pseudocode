/*
 * XREFs of ?SetUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x1802850F0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetUnderlines(struct CResource ***a1, __int64 a2)
{
  return CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendUnderlines(a1, a2, 0);
}
