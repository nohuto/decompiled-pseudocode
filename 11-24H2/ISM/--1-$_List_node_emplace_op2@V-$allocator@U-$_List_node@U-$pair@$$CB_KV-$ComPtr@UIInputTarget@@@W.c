/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800651A8
 * Callers:
 *     ??$_Try_emplace@_K$$V@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1801A6D78 (--$_Try_emplace@_K$$V@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uha.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Microsoft::WRL::ComPtr_IInputTarget______0___::_Try_emplace_unsigned___int64__::_1_::dtor$0 @ 0x1801D90F9 (_std--_Hash_std--_Umap_traits_unsigned___int64_Microsoft--WRL--ComPtr_IInputTarget__std--_Uhash_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 24);
    if ( v3 )
    {
      *(_QWORD *)(v2 + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      v2 = *(_QWORD *)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>((char *)v2, (const struct std::nothrow_t *)0x20);
  }
}
