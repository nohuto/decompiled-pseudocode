/*
 * XREFs of ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x180011FB0
 * Callers:
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x1800066A0 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18001AFD4 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@V.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Find_last<std::wstring>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v6; // r9
  _QWORD *result; // rax
  _QWORD *v8; // rsi
  char v9; // bl
  _QWORD *v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // r10
  _QWORD *v16; // r11
  __int64 v17; // rdx

  v4 = a1[1];
  v6 = (_QWORD *)(a1[3] + 16 * (a1[6] & a4));
  if ( v6[1] == v4 )
  {
    *a2 = v4;
    result = a2;
    a2[1] = 0LL;
  }
  else
  {
    v8 = (_QWORD *)*v6;
    v9 = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a3, a2, a3, *(_QWORD *)(a3 + 16));
    while ( 1 )
    {
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                              v12 + 16,
                              *(_QWORD *)(v12 + 32),
                              v10,
                              v11) )
        v14 = (_QWORD *)*v14;
      v10 = v16;
      if ( v9 )
        v10 = (_QWORD *)*v16;
      if ( v11 == v13 )
        break;
LABEL_13:
      if ( v15 == v8 )
      {
        *a2 = v15;
        a2[1] = 0LL;
        return a2;
      }
      v12 = v15[1];
    }
    v17 = v11;
    v10 = (_QWORD *)((char *)v10 - (__int64)v14);
    while ( v17 )
    {
      if ( *(_WORD *)((char *)v14 + (_QWORD)v10) != *(_WORD *)v14 )
        goto LABEL_13;
      --v17;
      v14 = (_QWORD *)((char *)v14 + 2);
    }
    *a2 = *v15;
    a2[1] = v15;
    return a2;
  }
  return result;
}
