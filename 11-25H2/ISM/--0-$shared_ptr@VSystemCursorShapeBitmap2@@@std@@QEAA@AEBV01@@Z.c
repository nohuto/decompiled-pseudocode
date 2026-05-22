/*
 * XREFs of ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CC834
 * Callers:
 *     ?OnStubDisconnected@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x18006D860 (-OnStubDisconnected@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEBV21@@Z @ 0x1800CC518 (--$_Emplace_reallocate@AEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@-$vector@V-$shared_ptr@ULegacy.c)
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800CCC2C (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x1800CCD48 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D42E0 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z.c)
 *     ?AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F49E0 (-AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCu.c)
 *     ?CreateCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F4E80 (-CreateCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1PEBUCurs.c)
 *     ?DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800F51D0 (-DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z.c)
 *     ??$make_shared@VSystemCursorShapeBitmap2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@3@@std@@YA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@0@@Z @ 0x1800F6F28 (--$make_shared@VSystemCursorShapeBitmap2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEAV-$share.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F7538 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddShape@SystemCursor2@@QEAAJV?$shared_ptr@VSystemCursorShape2@@@std@@@Z @ 0x1800F77DC (-AddShape@SystemCursor2@@QEAAJV-$shared_ptr@VSystemCursorShape2@@@std@@@Z.c)
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F7E10 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800F816C (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 *     ?FindClosestShapeBitmap@SystemCursorShape2@@QEAA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@I@Z @ 0x1800F84C4 (-FindClosestShapeBitmap@SystemCursorShape2@@QEAA-AV-$shared_ptr@VSystemCursorShapeBitmap2@@@std@.c)
 *     ?GetCursor@SystemCursorService2@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@_K@Z @ 0x1800F8630 (-GetCursor@SystemCursorService2@@UEAA-AV-$shared_ptr@VSystemCursor2@@@std@@_K@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800F8A20 (-OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800F8CD0 (-OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800F9688 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801C17E0 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List__ea_1801C17E0.c)
 *     ??$_Copy_nodes@$0A@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@PEAU21@0@Z @ 0x1801C1AD0 (--$_Copy_nodes@$0A@@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_p.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@_N@1@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801C1C54 (--$_Emplace@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyIn.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801C1D70 (--$_Emplace@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allo.c)
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979___ @ 0x1801C23BC (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKeyIn.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x1801C2554 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKey.c)
 *     _lambda_9193c85b91a90ecd300d0af0c9084680_::operator() @ 0x1801C2E94 (_lambda_9193c85b91a90ecd300d0af0c9084680_--operator().c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801C3338 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801C4038 (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801C4840 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
