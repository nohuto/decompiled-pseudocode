/*
 * XREFs of ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801F65D0
 * Callers:
 *     ??$_Emplace_reallocate@UFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@$$QEAU2@@Z @ 0x1801F6344 (--$_Emplace_reallocate@UFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropert.c)
 *     ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x1801F6454 (--$_Emplace_reallocate@AEBUFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipProp.c)
 *     ??$_Emplace_reallocate@UCursorVisualData@@@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@AEAAPEAUCursorVisualData@@QEAU2@$$QEAU2@@Z @ 0x18025977C (--$_Emplace_reallocate@UCursorVisualData@@@-$vector@UCursorVisualData@@V-$allocator@UCursorVisua.c)
 *     ??$_Insert_counted_range@PEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@1@PEBU_DWMCaptureWindowInformation@@_K@Z @ 0x180274058 (--$_Insert_counted_range@PEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformati.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802877D4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UScribbleFrame@CComputeScribbleScheduler@@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180297438 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMipLevelSurface@CCompositionMipmapSurface.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802461D8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<32>(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 32 * a1;
}
