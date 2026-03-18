/*
 * XREFs of ?SetSnappingOffset@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x180279E88
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CTextObjectGeneratedT<CTextObject,CResource>::SetSnappingOffset(CResource *a1, __int64 a2)
{
  *((_QWORD *)a1 + 10) = a2;
  CResource::OnPropertyChanged(a1);
  return 0LL;
}
