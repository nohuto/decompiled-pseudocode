/*
 * XREFs of ?AppendTriangleIndices@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x180206B18
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ??$_Insert_counted_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@1@PEBH_K@Z @ 0x180206BBC (--$_Insert_counted_range@PEBH@-$vector@HV-$allocator@H@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 */

__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::AppendTriangleIndices(
        CResource *this,
        _QWORD *a2)
{
  std::vector<int>::_Insert_counted_range<int const *>(
    (char *)this + 144,
    *((_QWORD *)this + 19),
    a2[1],
    (4LL * *a2) >> 2);
  CResource::OnPropertyChanged(this);
  return 0LL;
}
