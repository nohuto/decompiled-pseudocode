/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180067FEC
 * Callers:
 *     ??$_Emplace@AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@?$_Tree@V?$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@std@@_N@1@AEAK$$QEAW4DeviceEnumerationState@DockableDeviceCollection@@@Z @ 0x1800DDE3C (--$_Emplace@AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@-$_Tree@V-$_Tmap_traits@KW4D.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800F63BC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$shared_ptr@VGestureHandl.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801393C0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputObserverClient@-$CBas.c)
 *     ??$_Emplace@W4GazeProperty@@G@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@_N@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x180183810 (--$_Emplace@W4GazeProperty@@G@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ButtonProcessor::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo____0___::emplace_unsigned_long_&_ButtonProcessor::TargetingInfo__::_1_::dtor$1 @ 0x1801D14B0 (_std--_Hash_std--_Umap_traits_unsigned_long_ButtonProcessor--TargetingInfo_std--_Uhash_compare_u.c)
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$2 @ 0x1801D1870 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$2.c)
 *     _std::_Hash_std::_Umap_traits_enum_TestCommandMessageType_std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)__std::_Uhash_compare_enum_TestCommandMessageType_std::hash_enum_TestCommandMessageType__std::equal_to_enum_TestCommandMessageType____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)______0___::_Try_emplace_enum_TestCommandMessageType__::_1_::dtor$1 @ 0x1801D197C (_std--_Hash_std--_Umap_traits_enum_TestCommandMessageType_std--pair_void___bool_(___ea_1801D197C.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x28);
}
