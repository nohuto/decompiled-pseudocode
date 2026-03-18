/*
 * XREFs of ?_Tidy@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ @ 0x180203F5C
 * Callers:
 *     ??1?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@UEAA@XZ @ 0x180203F2C (--1-$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@UEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ @ 0x180263D4C (--1-$_Tidy_guard@V-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$tuple@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ @ 0x180263E38 (--1-$tuple@V-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@V-$vector@UD2D_RECT_F@@V.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180264314 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x18028B628 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<D2D_RECT_F>::_Tidy(__int64 a1)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
