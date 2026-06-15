/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@2@@Z @ 0x180029828
 * Callers:
 *     _dynamic_initializer_for__s_validSettingsForSchema__ @ 0x180008A90 (_dynamic_initializer_for__s_validSettingsForSchema__.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180148704 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V-$_Uhas.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180029914 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 v7; // rcx
  unsigned __int64 *result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // rdi
  __int64 size_of; // rax
  __int64 v12; // rax
  char *v13; // rcx
  __int64 v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  char *v16; // r8
  char *v17; // rcx

  v5 = *(_QWORD *)(a1 + 8);
  v7 = v5 - *(_QWORD *)a1;
  if ( v7 >> 3 < a2 )
  {
    size_of = std::_Get_size_of_n<8>(a2);
    v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v13 = *(char **)a1;
    v10 = (unsigned __int64 *)v12;
    v14 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( v14 )
    {
      v15 = (const struct std::nothrow_t *)(8 * v14);
      if ( (unsigned __int64)v15 >= 0x1000 )
      {
        v16 = (char *)*((_QWORD *)v13 - 1);
        v15 = (const struct std::nothrow_t *)((char *)v15 + 39);
        v17 = (char *)(v13 - v16);
        if ( (unsigned __int64)(v17 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v17, v15);
          __debugbreak();
          JUMPOUT(0x18002990ELL);
        }
        v13 = v16;
      }
      operator delete(v13, v15);
    }
    result = &v10[a2];
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = result;
    while ( v10 != result )
      *v10++ = a3;
  }
  else
  {
    result = 0LL;
    v9 = (unsigned __int64)(v7 + 7) >> 3;
    if ( *(_QWORD *)a1 > v5 )
      v9 = 0LL;
    if ( v9 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*(void **)a1, a3, v9);
    }
  }
  return result;
}
