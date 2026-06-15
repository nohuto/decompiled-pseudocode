/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180019C74
 * Callers:
 *     ??$emplace@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800301F0 (--$emplace@AEAPEAUIAudioSessionInfo@@AEAV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil.c)
 *     _std::_Hash_std::_Umap_traits_void___wil::com_ptr_t_IWeakReference_wil::err_returncode_policy__std::_Uhash_compare_void___std::hash_void____std::equal_to_void______std::allocator_std::pair_void___const_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy______0___::emplace_IAudioSessionInfo___&_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy__&__::_1_::dtor$0 @ 0x18004AB02 (_std--_Hash_std--_Umap_traits_void___wil--com_ptr_t_IWeakReference_wil--err_returncode_policy__s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001778C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)(v2 + 24));
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x20);
}
