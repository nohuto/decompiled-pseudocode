/*
 * XREFs of ?SetOrAppendVertexPositions@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJAEBV?$span@$$CBUD2D_POINT_3F@@$0?0@gsl@@_N@Z @ 0x1801F56E8
 * Callers:
 *     ?SetVertexPositions@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBUD2D_POINT_3F@@$0?0@gsl@@@Z @ 0x180223A04 (-SetVertexPositions@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV-$spa.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ??$insert@PEBUD2D_POINT_3F@@$0A@@?$vector@UD2D_POINT_3F@@V?$allocator@UD2D_POINT_3F@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@PEBUD2D_POINT_3F@@1@Z @ 0x1801F5A38 (--$insert@PEBUD2D_POINT_3F@@$0A@@-$vector@UD2D_POINT_3F@@V-$allocator@UD2D_POINT_3F@@@std@@@std@.c)
 */

__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetOrAppendVertexPositions(
        CResource *this,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rax
  char v6; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v4 = *((_QWORD *)this + 12);
    if ( v4 != *((_QWORD *)this + 13) )
      *((_QWORD *)this + 13) = v4;
  }
  std::vector<D2D_POINT_3F>::insert<D2D_POINT_3F const *,0>(
    (_DWORD)this + 96,
    (unsigned int)&v6,
    *((_QWORD *)this + 13),
    a2[1],
    a2[1] + 12LL * *a2);
  CResource::OnPropertyChanged(this);
  return 0LL;
}
