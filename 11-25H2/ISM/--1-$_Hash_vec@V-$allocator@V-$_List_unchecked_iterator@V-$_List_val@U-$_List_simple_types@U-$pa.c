/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180064430
 * Callers:
 *     _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0____::_1_::dtor$1 @ 0x1801C8006 (_std--_Hash_std--_Umap_traits_DWMPointerMapping_CursorId_std--_Uhash_compare_DWMPointerMapping_D.c)
 *     _GestureServices::GestureServices_::_1_::dtor$16 @ 0x1801C857C (_GestureServices--GestureServices_--_1_--dtor$16.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$4 @ 0x1801CA464 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$4.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$24 @ 0x1801CA697 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$24.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$13 @ 0x1801CAEA9 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$13.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$7 @ 0x1801CB079 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$7.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$12 @ 0x1801CB2DF (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$12.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback____0___::_Hash_std::_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback____0____std::allocator_std::_List_node_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback__void________::_1_::dtor$1 @ 0x1801CB365 (_std--_Hash_std--_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std--__ea_1801CB365.c)
 *     _CBaseInputObserverServer_11_::CBaseInputObserverServer_11__::_1_::dtor$7 @ 0x1801CBFBE (_CBaseInputObserverServer_11_--CBaseInputObserverServer_11__--_1_--dtor$7.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$31 @ 0x1801CC3FC (_Win32kInterop--Win32kInterop_--_1_--dtor$31.c)
 *     _CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor$2 @ 0x1801CD262 (_CUIHierarchy--NotifyWindowOfActivationStateChange_--_1_--dtor$2.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$1 @ 0x1801D0220 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$1.c)
 *     _ISMHeatFrameworkHost::BroadcastContextMessage_::_1_::dtor$14 @ 0x1801D0DFC (_ISMHeatFrameworkHost--BroadcastContextMessage_--_1_--dtor$14.c)
 *     _PenHapticInterface::PenHapticInterface_::_1_::dtor$10 @ 0x1801D1111 (_PenHapticInterface--PenHapticInterface_--_1_--dtor$10.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
