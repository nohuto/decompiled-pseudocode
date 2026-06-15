/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x180003534
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18003C0CC (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18003C0CC.c)
 *     ??0CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x18003D164 (--0CStreamClassPolicyGainsWrapper@@QEAA@XZ.c)
 *     ??0CEndpointVolumeStateManager@@QEAA@XZ @ 0x180043AB0 (--0CEndpointVolumeStateManager@@QEAA@XZ.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180044368 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a_ea_180044368.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180004DE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18001F754 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002AE04 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  void *v9; // rcx
  unsigned __int64 *v10; // rdi
  __int64 v11; // rdx
  struct std::nothrow_t *v12; // rdx
  unsigned __int64 *result; // rax
  unsigned __int64 v14; // rcx
  struct std::nothrow_t *v15; // [rsp+40h] [rbp+8h] BYREF
  void *v16; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = v3 - *(_QWORD *)a1;
  if ( v6 >> 3 >= a2 )
  {
    result = 0LL;
    v14 = (unsigned __int64)(v6 + 7) >> 3;
    if ( *(_QWORD *)a1 > v3 )
      v14 = 0LL;
    if ( v14 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*(void **)a1, a3, v14);
    }
  }
  else
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = a2;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * a2);
    v9 = *(void **)a1;
    v10 = (unsigned __int64 *)v8;
    v11 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( v11 )
    {
      v12 = (struct std::nothrow_t *)(8 * v11);
      v15 = v12;
      v16 = v9;
      if ( (unsigned __int64)v12 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v16, (unsigned __int64 *)&v15);
        v12 = v15;
        v9 = v16;
      }
      operator delete(v9, v12);
    }
    result = &v10[v7];
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = &v10[v7];
    *(_QWORD *)(a1 + 16) = &v10[v7];
    while ( v10 != result )
      *v10++ = a3;
  }
  return result;
}
