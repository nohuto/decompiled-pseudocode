/*
 * XREFs of ??1?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ @ 0x18014A79C
 * Callers:
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x18014A8A8 (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x18014D870 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DD44 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18014E1B8 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 *     ??1MessageInfo@ResizeProcessor@@QEAA@XZ @ 0x180150510 (--1MessageInfo@ResizeProcessor@@QEAA@XZ.c)
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x1801522C0 (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180152448 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801526F4 (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ??R?$default_delete@VEdgyRecognizer@@@std@@QEBAXPEAVEdgyRecognizer@@@Z @ 0x18015372C (--R-$default_delete@VEdgyRecognizer@@@std@@QEBAXPEAVEdgyRecognizer@@@Z.c)
 *     ??0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180155D94 (--0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::MessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo____0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$9 @ 0x1801D7690 (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessor--MessageInfo_std--_U_ea_1801D7690.c)
 *     _EdgyRecognizer::EdgyRecognizer_::_1_::dtor$0 @ 0x1801D7D0A (_EdgyRecognizer--EdgyRecognizer_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z @ 0x18014AA84 (--R-$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<DragGestureTracker>::~unique_ptr<DragGestureTracker>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<DragGestureTracker>::operator()();
  return result;
}
