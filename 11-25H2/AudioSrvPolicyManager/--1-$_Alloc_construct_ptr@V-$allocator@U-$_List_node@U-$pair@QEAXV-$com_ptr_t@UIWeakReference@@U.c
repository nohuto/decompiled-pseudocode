/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001F210
 * Callers:
 *     _std::_Hash_std::_Umap_traits_void___wil::com_ptr_t_IWeakReference_wil::err_returncode_policy__std::_Uhash_compare_void___std::hash_void____std::equal_to_void______std::allocator_std::pair_void___const_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy______0___::emplace_IAudioSessionInfo___&_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy__&__::_1_::dtor$1 @ 0x18004D394 (_std--_Hash_std--_Umap_traits_void___wil--com_ptr_t_IWeakReference_wil--err_returnc_ea_18004D394.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x20);
}
