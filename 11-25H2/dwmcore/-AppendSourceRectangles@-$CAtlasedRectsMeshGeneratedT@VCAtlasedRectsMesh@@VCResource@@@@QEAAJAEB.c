/*
 * XREFs of ?AppendSourceRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@@Z @ 0x180076ED8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$insert@PEBUD2D_RECT_F@@$0A@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@PEBUD2D_RECT_F@@1@Z @ 0x1800786A4 (--$insert@PEBUD2D_RECT_F@@$0A@@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA-.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::AppendSourceRectangles(
        CResource *this,
        _QWORD *a2)
{
  char v4; // [rsp+50h] [rbp+18h] BYREF

  std::vector<D2D_RECT_F>::insert<D2D_RECT_F const *,0>(
    (_DWORD)this + 80,
    (unsigned int)&v4,
    *((_QWORD *)this + 11),
    a2[1],
    a2[1] + 16LL * *a2);
  *((_BYTE *)this + 144) = 1;
  CResource::OnPropertyChanged(this);
  return 0LL;
}
