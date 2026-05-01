/*
 * XREFs of ?_Change_array@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@_K1@Z @ 0x1802A6450
 * Callers:
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z @ 0x1801A4FEC (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z.c)
 *     ??$_Emplace_reallocate@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x18021DB4C (--$_Emplace_reallocate@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAH$$QEAH@Z @ 0x18021E308 (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@AEAAPEAHQEAH$$QEAH@Z.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x18022F83C (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$_Emplace_reallocate@AEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAHAEBH@Z @ 0x1802A6358 (--$_Emplace_reallocate@AEBH@-$vector@HV-$allocator@H@std@@@std@@AEAAPEAHQEAHAEBH@Z.c)
 *     ??$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@AEAAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x180416F8C (--$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAH@Z @ 0x1805B6CF8 (--$_Emplace_reallocate@$$V@-$vector@HV-$allocator@H@std@@@std@@AEAAPEAHQEAH@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@HV?$allocator@H@std@@@std@@AEAAXAEA_K@Z @ 0x1805B7604 (--$_Reallocate@$0A@@-$vector@HV-$allocator@H@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x1805BCF78 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@HV?$allocator@H@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805C3B80 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@HV-$allocator@H@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@KV?$allocator@K@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805FE684 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@KV-$allocator@K@std@@@std@@AEAAX_KAEBU_Val.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
