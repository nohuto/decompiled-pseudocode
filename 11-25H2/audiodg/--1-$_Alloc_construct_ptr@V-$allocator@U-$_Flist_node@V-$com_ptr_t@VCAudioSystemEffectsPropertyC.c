/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x14004B724
 * Callers:
 *     _std::forward_list_wil::com_ptr_t_CAudioSystemEffectsPropertyChangeNotificationsHandler_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioSystemEffectsPropertyChangeNotificationsHandler_wil::err_returncode_policy_____::emplace_front_CAudioSystemEffectsPropertyChangeNotificationsHandler___&__::_1_::dtor$0 @ 0x1400956BE (_std--forward_list_wil--com_ptr_t_CAudioSystemEffectsPropertyChangeNotificationsHandler_wil--err.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018588 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x10uLL);
}
