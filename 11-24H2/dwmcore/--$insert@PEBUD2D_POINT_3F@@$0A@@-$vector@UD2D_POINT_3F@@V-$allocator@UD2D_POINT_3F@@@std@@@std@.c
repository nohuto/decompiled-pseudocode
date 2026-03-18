/*
 * XREFs of ??$insert@PEBUD2D_POINT_3F@@$0A@@?$vector@UD2D_POINT_3F@@V?$allocator@UD2D_POINT_3F@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@PEBUD2D_POINT_3F@@1@Z @ 0x1801F5A38
 * Callers:
 *     ?AppendVertexPositions@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBUD2D_POINT_3F@@$0?0@gsl@@@Z @ 0x1801F56A0 (-AppendVertexPositions@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV-$.c)
 *     ?SetOrAppendVertexPositions@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJAEBV?$span@$$CBUD2D_POINT_3F@@$0?0@gsl@@_N@Z @ 0x1801F56E8 (-SetOrAppendVertexPositions@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJA.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBUD2D_POINT_3F@@@?$vector@UD2D_POINT_3F@@V?$allocator@UD2D_POINT_3F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@PEBUD2D_POINT_3F@@_K@Z @ 0x1801F5AB4 (--$_Insert_counted_range@PEBUD2D_POINT_3F@@@-$vector@UD2D_POINT_3F@@V-$allocator@UD2D_POINT_3F@@.c)
 */

_QWORD *__fastcall std::vector<D2D_POINT_3F>::insert<D2D_POINT_3F const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  _QWORD *result; // rax

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a3 - *a1) >> 2);
  std::vector<D2D_POINT_3F>::_Insert_counted_range<D2D_POINT_3F const *>(
    a1,
    a3,
    a4,
    0xAAAAAAAAAAAAAAABuLL * ((a5 - a4) >> 2));
  result = a2;
  *a2 = *a1 + 12 * v6;
  return result;
}
