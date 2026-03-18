/*
 * XREFs of ?SetSourceRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@@Z @ 0x180026C90
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBUD2D_RECT_F@@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@PEBUD2D_RECT_F@@_K@Z @ 0x180026D40 (--$_Insert_counted_range@PEBUD2D_RECT_F@@@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::SetSourceRectangles(
        CResource *this,
        _QWORD *a2)
{
  _QWORD *v3; // rcx

  v3 = (_QWORD *)((char *)this + 80);
  if ( *v3 != v3[1] )
    v3[1] = *v3;
  std::vector<D2D_RECT_F>::_Insert_counted_range<D2D_RECT_F const *>(
    v3,
    *((_QWORD *)this + 11),
    a2[1],
    (16LL * *a2) >> 4);
  *((_BYTE *)this + 144) = 1;
  CResource::OnPropertyChanged(this);
  return 0LL;
}
