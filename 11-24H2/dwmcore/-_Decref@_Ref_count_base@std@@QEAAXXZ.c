/*
 * XREFs of ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801A1820 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801A2620 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x1801A2CAC (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1801A300C (--$_Try_emplace@AEB_K$$V@-$map@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A3420 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A3F60 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1801A3FC8 (-ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801A4054 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x1801A41C0 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x18024CBCC (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ??1?$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ @ 0x1802687EC (--1-$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ.c)
 *     ?erase@?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VMonitorData@CCursorState@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VMonitorData@CCursorState@@@std@@@std@@@2@@Z @ 0x18026D5C0 (-erase@-$vector@VMonitorData@CCursorState@@V-$allocator@VMonitorData@CCursorState@@@std@@@std@@Q.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A6D84 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x1802A6EF8 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 *     _lambda_39668c2dc6e40fe158f11373301c566a_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___ @ 0x1802B07B8 (_lambda_39668c2dc6e40fe158f11373301c566a_--operator()_std--shared_ptr_CCursorState--ShapeData__s.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@0@@Z @ 0x1802B0918 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 *     ??$_Destroy_range@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@YAXPEAVMonitorData@CCursorState@@QEAV12@AEAV?$allocator@VMonitorData@CCursorState@@@0@@Z @ 0x1802B0958 (--$_Destroy_range@V-$allocator@VMonitorData@CCursorState@@@std@@@std@@YAXPEAVMonitorData@CCursor.c)
 *     std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a_____ @ 0x1802B0CD4 (std--_Insertion_sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_3.c)
 *     std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a_____ @ 0x1802B0DE0 (std--_Make_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_39668c.c)
 *     std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a_____ @ 0x1802B12FC (std--_Sort_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_39668c.c)
 *     ??4?$shared_ptr@VShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802B1ADC (--4-$shared_ptr@VShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802B269C (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_NAEBVCMILMatrix@@@Z @ 0x1802B2818 (-EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802B30A8 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 *     ?SetHardwareShapeAndPosition@CCursorState@@AEAA_NPEAVMonitorData@1@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@1_N@Z @ 0x1802B3CCC (-SetHardwareShapeAndPosition@CCursorState@@AEAA_NPEAVMonitorData@1@AEBV-$TMilRect_@HUtagRECT@@UD.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x1802B4380 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B47F4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@UEAA@XZ @ 0x1802D7960 (--1CDxHandleAdvancedDirectFlipBitmapRealization@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Ref_count_base::_Decref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))this)(this);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
  }
}
