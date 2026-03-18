/*
 * XREFs of ?SetOrAppendTextureCoordinates@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJAEBV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@_N@Z @ 0x180207E40
 * Callers:
 *     ?SetTextureCoordinates@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x18022F5C4 (-SetTextureCoordinates@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV-$.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ??$_Insert_counted_range@PEBUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_2F@@@std@@@std@@@1@PEBUD2D_POINT_2F@@_K@Z @ 0x180207E98 (--$_Insert_counted_range@PEBUD2D_POINT_2F@@@-$vector@UD2D_POINT_2F@@V-$allocator@UD2D_POINT_2F@@.c)
 */

__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetOrAppendTextureCoordinates(
        CResource *this,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rax

  if ( !a3 )
  {
    v4 = *((_QWORD *)this + 15);
    if ( v4 != *((_QWORD *)this + 16) )
      *((_QWORD *)this + 16) = v4;
  }
  std::vector<D2D_POINT_2F>::_Insert_counted_range<D2D_POINT_2F const *>(
    (char *)this + 120,
    *((_QWORD *)this + 16),
    a2[1],
    (8LL * *a2) >> 3);
  CResource::OnPropertyChanged(this);
  return 0LL;
}
