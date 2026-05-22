/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBI@Z @ 0x180027468
 * Callers:
 *     ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800FD1D8 (-GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::find<void>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r10
  _QWORD *v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *result; // rax
  __int64 v11; // rdx

  v4 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         a1,
         a3);
  v7 = v5[3];
  v8 = 2 * (v5[6] & v4);
  v9 = *(_QWORD *)(v7 + 8 * v8 + 8);
  if ( v9 == v5[1] )
  {
LABEL_2:
    v9 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(v7 + 8 * v8);
    while ( *a3 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == v11 )
        goto LABEL_2;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  result = v6;
  if ( !v9 )
    v9 = v5[1];
  *v6 = v9;
  return result;
}
