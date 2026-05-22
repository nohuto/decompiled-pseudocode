/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800209D0
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??0?$unordered_map@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@U?$hash@PEAUIInputTarget@@@3@U?$equal_to@PEAUIInputTarget@@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@@std@@QEAA@XZ @ 0x180021E80 (--0-$unordered_map@PEAUIInputTarget@@V-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocat.c)
 *     ??0?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@_K@1@@Z @ 0x180027640 (--0-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x18002DF58 (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$hash@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009B468 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_comp.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800B0D78 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18019BFEC (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUIInputTarget@@V-$unordered_set@KU-$hash@K@std@@U-$eq.c)
 * Callees:
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18002F2F4 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rsi
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rdi
  char *v11; // rcx
  __int64 v12; // rax
  const struct std::nothrow_t *v13; // rdx
  unsigned __int64 v14; // rcx
  char *v15; // r8
  char *v16; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  v6 = v3 - *(_QWORD *)a1;
  result = v6 >> 3;
  if ( v6 >> 3 < a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v8 = a2;
    if ( 8 * a2 >= 0x1000 )
    {
      v9 = (unsigned __int64 *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(8 * a2);
    }
    else
    {
      if ( !(v8 * 8) )
      {
        v10 = 0LL;
        goto LABEL_7;
      }
      v9 = (unsigned __int64 *)operator new(8 * a2);
    }
    v10 = v9;
LABEL_7:
    v11 = *(char **)a1;
    v12 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( v12 )
    {
      v13 = (const struct std::nothrow_t *)(8 * v12);
      if ( (unsigned __int64)(8 * v12) >= 0x1000 )
      {
        v15 = (char *)*((_QWORD *)v11 - 1);
        v13 = (const struct std::nothrow_t *)((char *)v13 + 39);
        v16 = (char *)(v11 - v15);
        if ( (unsigned __int64)(v16 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v16, v13);
          __debugbreak();
          JUMPOUT(0x180020B0FLL);
        }
        v11 = v15;
      }
      operator delete(v11, v13);
    }
    result = (__int64)&v10[v8];
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = &v10[v8];
    *(_QWORD *)(a1 + 16) = &v10[v8];
    while ( v10 != (unsigned __int64 *)result )
      *v10++ = a3;
    return result;
  }
  v14 = (unsigned __int64)(v6 + 7) >> 3;
  if ( *(_QWORD *)a1 > v3 )
    v14 = 0LL;
  if ( v14 )
  {
    result = a3;
    memset64(*(void **)a1, a3, v14);
  }
  return result;
}
