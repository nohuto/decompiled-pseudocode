/*
 * XREFs of ?SetSurfaceScale@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x180284B74
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CCompositionGlyphRunGeneratedT<CCompositionGlyphRun,CTextObject>::SetSurfaceScale(
        CResource *a1,
        __int64 a2)
{
  *((_QWORD *)a1 + 13) = a2;
  CResource::OnPropertyChanged(a1);
  return 0LL;
}
