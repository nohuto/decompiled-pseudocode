/*
 * XREFs of ?AppendVertexPositions@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBUD2D_POINT_3F@@$0?0@gsl@@@Z @ 0x180076E44
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$insert@PEBUD2D_POINT_3F@@$0A@@?$vector@UD2D_POINT_3F@@V?$allocator@UD2D_POINT_3F@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@PEBUD2D_POINT_3F@@1@Z @ 0x180077770 (--$insert@PEBUD2D_POINT_3F@@$0A@@-$vector@UD2D_POINT_3F@@V-$allocator@UD2D_POINT_3F@@@std@@@std@.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::AppendVertexPositions(
        CResource *this,
        _QWORD *a2)
{
  char v4; // [rsp+50h] [rbp+18h] BYREF

  std::vector<D2D_POINT_3F>::insert<D2D_POINT_3F const *,0>(
    (_DWORD)this + 96,
    (unsigned int)&v4,
    *((_QWORD *)this + 13),
    a2[1],
    a2[1] + 12LL * *a2);
  CResource::OnPropertyChanged(this);
  return 0LL;
}
