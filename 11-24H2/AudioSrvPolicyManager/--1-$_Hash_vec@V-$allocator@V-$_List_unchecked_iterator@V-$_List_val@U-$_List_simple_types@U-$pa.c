/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x1800197B4
 * Callers:
 *     _CApplication::NotifyVolumePolicyChange_::_1_::dtor$0 @ 0x180049780 (_CApplication--NotifyVolumePolicyChange_--_1_--dtor$0.c)
 *     _CEndpointVolumeStateManager::CEndpointVolumeStateManager_::_1_::dtor$8 @ 0x18004A532 (_CEndpointVolumeStateManager--CEndpointVolumeStateManager_--_1_--dtor$8.c)
 *     _std::_Hash_std::_Umap_traits_void___wil::com_ptr_t_IWeakReference_wil::err_returncode_policy__std::_Uhash_compare_void___std::hash_void____std::equal_to_void______std::allocator_std::pair_void___const_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy______0___::_Hash_std::_Umap_traits_void___wil::com_ptr_t_IWeakReference_wil::err_returncode_policy__std::_Uhash_compare_void___std::hash_void____std::equal_to_void______std::allocator_std::pair_void___const_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy______0____::_1_::dtor$1 @ 0x18004AEFD (_std--_Hash_std--_Umap_traits_void___wil--com_ptr_t_IWeakReference_wil--err_returnc_ea_18004AEFD.c)
 *     _TSSession::TSSession_::_1_::dtor$3 @ 0x18004B320 (_TSSession--TSSession_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002AE04 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>>(
        __int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  struct std::nothrow_t *v4; // rdx
  struct std::nothrow_t *v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
    v6 = v2;
    v4 = (struct std::nothrow_t *)(v3 & 0xFFFFFFFFFFFFFFF8uLL);
    v5 = v4;
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, (unsigned __int64 *)&v5);
      v4 = v5;
      v2 = v6;
    }
    operator delete(v2, v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
