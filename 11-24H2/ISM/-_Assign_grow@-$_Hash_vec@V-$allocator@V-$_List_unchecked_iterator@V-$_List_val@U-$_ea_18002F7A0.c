/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@2@@Z @ 0x18002F7A0
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x1801A2BA4 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18002F8B4 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009ADDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  char *v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned __int64 *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *(char **)a1;
  v7 = v3 - *(_QWORD *)a1;
  result = v7 >> 3;
  if ( v7 >> 3 >= a2 )
  {
    v12 = (unsigned __int64)(v7 + 7) >> 3;
    if ( (unsigned __int64)v6 > v3 )
      v12 = 0LL;
    if ( v12 )
    {
      result = a3;
      memset64(v6, a3, v12);
    }
  }
  else
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v9 = a2;
    if ( 8 * a2 >= 0x1000 )
    {
      v10 = (unsigned __int64 *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(8 * a2);
    }
    else if ( v9 * 8 )
    {
      v10 = (unsigned __int64 *)operator new(8 * a2);
    }
    else
    {
      v10 = 0LL;
    }
    v11 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( v11 )
      std::_Deallocate<16,0>(*(char **)a1, (const struct std::nothrow_t *)(8 * v11));
    result = (__int64)&v10[v9];
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = &v10[v9];
    for ( *(_QWORD *)(a1 + 16) = &v10[v9]; v10 != (unsigned __int64 *)result; ++v10 )
      *v10 = a3;
  }
  return result;
}
