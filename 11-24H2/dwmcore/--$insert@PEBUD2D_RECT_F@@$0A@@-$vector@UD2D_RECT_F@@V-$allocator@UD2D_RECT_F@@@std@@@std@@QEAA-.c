/*
 * XREFs of ??$insert@PEBUD2D_RECT_F@@$0A@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@PEBUD2D_RECT_F@@1@Z @ 0x180026CE4
 * Callers:
 *     ?AppendSourceRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@@Z @ 0x18021E358 (-AppendSourceRectangles@-$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEB.c)
 *     ?AppendDestinationRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@@Z @ 0x18021F9A8 (-AppendDestinationRectangles@-$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEA.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBUD2D_RECT_F@@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@PEBUD2D_RECT_F@@_K@Z @ 0x180026D40 (--$_Insert_counted_range@PEBUD2D_RECT_F@@@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@.c)
 */

_QWORD *__fastcall std::vector<D2D_RECT_F>::insert<D2D_RECT_F const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = a3 - *a1;
  std::vector<D2D_RECT_F>::_Insert_counted_range<D2D_RECT_F const *>(a1, a3, a4, (a5 - a4) >> 4);
  result = a2;
  *a2 = *a1 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
