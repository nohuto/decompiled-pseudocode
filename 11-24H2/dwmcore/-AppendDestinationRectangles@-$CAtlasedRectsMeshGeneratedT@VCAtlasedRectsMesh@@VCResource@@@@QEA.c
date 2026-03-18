/*
 * XREFs of ?AppendDestinationRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@@Z @ 0x18021F9A8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$insert@PEBUD2D_RECT_F@@$0A@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@PEBUD2D_RECT_F@@1@Z @ 0x180026CE4 (--$insert@PEBUD2D_RECT_F@@$0A@@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA-.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::AppendDestinationRectangles(
        CResource *this,
        _QWORD *a2)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  std::vector<D2D_RECT_F>::insert<D2D_RECT_F const *,0>(
    (_QWORD *)this + 13,
    &v4,
    *((_QWORD *)this + 14),
    a2[1],
    a2[1] + 16LL * *a2);
  *((_BYTE *)this + 144) = 1;
  CResource::OnPropertyChanged(this);
  return 0LL;
}
