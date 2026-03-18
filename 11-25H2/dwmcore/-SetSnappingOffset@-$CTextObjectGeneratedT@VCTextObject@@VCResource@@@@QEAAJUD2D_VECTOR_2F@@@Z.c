/*
 * XREFs of ?SetSnappingOffset@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x180284AA8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CTextObjectGeneratedT<CTextObject,CResource>::SetSnappingOffset(CResource *a1, __int64 a2)
{
  *((_QWORD *)a1 + 10) = a2;
  CResource::OnPropertyChanged(a1);
  return 0LL;
}
