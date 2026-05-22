/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800178F0
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180014970 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@PE.c)
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180015654 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180015FB0 (--1-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ??1?$_Deleted_copy_assign@U?$_Variant_destroy_layer_@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x1800178C8 (--1-$_Deleted_copy_assign@U-$_Variant_destroy_layer_@PEAXV-$unique_any_t@V-$unique_storage@U-$ha.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x180017914 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18001B830 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ??1?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@QEAA@XZ @ 0x180065C8C (--1-$list@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@V-$allocator@U-$pair@$$CBIUConta.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18006D3A8 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInputMed.c)
 *     ?_Destroy@?$_Ref_count_obj2@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@EEAAXXZ @ 0x180075D40 (-_Destroy@-$_Ref_count_obj2@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6A.c)
 *     ??1InputRedirectionTarget@@MEAA@XZ @ 0x1801AFCE8 (--1InputRedirectionTarget@@MEAA@XZ.c)
 *     _InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor$2 @ 0x1801D0380 (_InputSiteManager--GetInputSiteFromInputSinkData_--_1_--dtor$2.c)
 *     _wil::details::shared_storage_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_null_resource_policy_long_(__cdecl_)(void__)_&NtCloseCompositionInputSink_______::reset_::_1_::dtor$0 @ 0x1801D3B15 (_wil--details--shared_storage_wil--unique_any_t_wil--details--unique_storage_wil--details--handl.c)
 *     _LegacyInputSinkData::GetDuplicatedInputSinkHandle_::_1_::dtor$0 @ 0x1801D715B (_LegacyInputSinkData--GetDuplicatedInputSinkHandle_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(
        _QWORD *a1)
{
  unsigned __int64 result; // rax

  result = *a1 - 1LL;
  if ( result <= 0xFFFFFFFFFFFFFFFDuLL )
    return NtCloseCompositionInputSink();
  return result;
}
