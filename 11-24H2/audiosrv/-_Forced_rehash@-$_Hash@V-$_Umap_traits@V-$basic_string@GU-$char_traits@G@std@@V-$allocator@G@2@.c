/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009E8C8
 * Callers:
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18012F95C (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$com_ptr_t@VCEn.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180029E3C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180029E3C.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180043350 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_co_ea_180043350.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180044DD4 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Uhash_compare@V-$basic_st.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 *v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // r11
  _QWORD *v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r11
  __int64 v14; // rbp
  __int64 v15; // r14
  _QWORD *v16; // rdi
  __int64 v17; // r11
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // r15
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  v5 = a1 + 3;
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v7,
    v4);
  a1[7] = v7;
  LOBYTE(v9) = v7 - 1;
  a1[6] = v7 - 1;
  v10 = *(_QWORD **)a1[1];
  v11 = v10;
  while ( v10 != (_QWORD *)v4 )
  {
    v11 = (_QWORD *)*v11;
    v12 = (__int64)(v10 + 2);
    v9 = std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring>(
           (__int64)v8,
           (__int64)(v10 + 2));
    v14 = *v5;
    v15 = 2 * (a1[6] & v9);
    if ( *(_QWORD *)(*v5 + 16 * (a1[6] & v9)) == v4 )
    {
      *(_QWORD *)(v14 + 16 * (a1[6] & v9)) = v13;
      *(_QWORD *)(v14 + 8 * v15 + 8) = v13;
    }
    else
    {
      v16 = *(_QWORD **)(v14 + 16 * (a1[6] & v9) + 8);
      LOBYTE(v9) = std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                     (__int64)v8,
                     v12,
                     (__int64)(v16 + 2));
      if ( (_BYTE)v9 )
      {
        v20 = v16;
        while ( *(_QWORD **)(v14 + 8 * v15) != v20 )
        {
          v16 = (_QWORD *)v16[1];
          v20 = v16;
          if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                  (__int64)v8,
                  v12,
                  (__int64)(v16 + 2)) )
          {
            v21 = *v16;
            v22 = *(_QWORD **)(v17 + 8);
            *v22 = v11;
            v8 = (_QWORD *)v11[1];
            *v8 = v21;
            v9 = *(_QWORD *)(v21 + 8);
            *(_QWORD *)v9 = v17;
            *(_QWORD *)(v21 + 8) = v8;
            v11[1] = v22;
            *(_QWORD *)(v17 + 8) = v9;
            goto LABEL_16;
          }
        }
        v23 = *(_QWORD **)(v17 + 8);
        *v23 = v11;
        v8 = (_QWORD *)v11[1];
        *v8 = v16;
        v9 = v16[1];
        *(_QWORD *)v9 = v17;
        v16[1] = v8;
        v11[1] = v23;
        *(_QWORD *)(v17 + 8) = v9;
        *(_QWORD *)(v14 + 8 * v15) = v17;
      }
      else
      {
        v18 = *v16;
        if ( *v16 != v17 )
        {
          v19 = *(_QWORD **)(v17 + 8);
          *v19 = v11;
          v8 = (_QWORD *)v11[1];
          *v8 = v18;
          v9 = *(_QWORD *)(v18 + 8);
          *(_QWORD *)v9 = v17;
          *(_QWORD *)(v18 + 8) = v8;
          v11[1] = v19;
          *(_QWORD *)(v17 + 8) = v9;
        }
        *(_QWORD *)(v14 + 8 * v15 + 8) = v17;
      }
LABEL_16:
      v5 = a1 + 3;
    }
    v10 = v11;
  }
  return v9;
}
