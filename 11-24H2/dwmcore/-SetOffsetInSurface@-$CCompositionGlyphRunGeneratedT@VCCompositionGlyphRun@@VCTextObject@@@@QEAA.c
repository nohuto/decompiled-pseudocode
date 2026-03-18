/*
 * XREFs of ?SetOffsetInSurface@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x180278F5C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CCompositionGlyphRunGeneratedT<CCompositionGlyphRun,CTextObject>::SetOffsetInSurface(
        CResource *a1,
        __int64 a2)
{
  *((_QWORD *)a1 + 12) = a2;
  CResource::OnPropertyChanged(a1);
  return 0LL;
}
