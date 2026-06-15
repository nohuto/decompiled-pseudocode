/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180042DE0
 * Callers:
 *     ?GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@HHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18013466C (-GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV-$basic_string@G.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800BFF80 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rdi
  char v6; // si
  __int64 *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 i; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r10
  char *v18; // r11
  char *v19; // r8
  __int64 v20; // rdx
  signed __int64 v21; // r8

  v3 = *(_QWORD *)(a3 + 16);
  v6 = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a3, a2);
  if ( v6 )
    v8 = *v7;
  v9 = 0LL;
  v10 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v3; v10 = 0x100000001B3LL * (v12 ^ v10) )
  {
    v12 = *(unsigned __int8 *)(i + v8);
    ++i;
  }
  v13 = *(_QWORD *)(a1[3] + 16 * (v10 & a1[6]) + 8);
  if ( v13 != a1[1] )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                              v13 + 16,
                              *(_QWORD *)(v13 + 32)) )
        v15 = (_QWORD *)*v15;
      v19 = v18;
      if ( v6 )
        v19 = *(char **)v18;
      if ( v3 == v14 )
        break;
LABEL_19:
      if ( v16 == v17 )
        goto LABEL_16;
      v13 = *(_QWORD *)(v16 + 8);
    }
    v20 = v3;
    v21 = v19 - (char *)v15;
    while ( v20 )
    {
      if ( *(_WORD *)((char *)v15 + v21) != *(_WORD *)v15 )
        goto LABEL_19;
      --v20;
      v15 = (_QWORD *)((char *)v15 + 2);
    }
    v9 = v16;
  }
LABEL_16:
  if ( v9 )
    *a2 = v9;
  else
    *a2 = a1[1];
  return a2;
}
