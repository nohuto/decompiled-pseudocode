/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180065D74
 * Callers:
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x18014E5F4 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-.c)
 *     ??$_Erase@_K@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x1801A6CD4 (--$_Erase@_K@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = a2[3];
  if ( v3 )
  {
    a2[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  operator delete(a2, (const struct std::nothrow_t *)0x20);
}
