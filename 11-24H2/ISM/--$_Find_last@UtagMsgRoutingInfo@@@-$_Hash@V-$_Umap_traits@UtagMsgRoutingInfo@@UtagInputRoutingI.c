/*
 * XREFs of ??$_Find_last@UtagMsgRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@1@AEBUtagMsgRoutingInfo@@_K@Z @ 0x18003B0E8
 * Callers:
 *     ??$emplace@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_N@1@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x18003AF34 (--$emplace@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRouti.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Find_last<tagMsgRoutingInfo>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax

  v4 = a1[3];
  v5 = a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD *)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 8 * v6);
    while ( 1 )
    {
      if ( *(_DWORD *)a3 == *(_DWORD *)(v7 + 16)
        && *(_DWORD *)(a3 + 4) == *(_DWORD *)(v7 + 20)
        && *(_QWORD *)(a3 + 8) == *(_QWORD *)(v7 + 24)
        && *(_QWORD *)(a3 + 16) == *(_QWORD *)(v7 + 32) )
      {
        v9 = *(_QWORD *)(a3 + 24) - *(_QWORD *)(v7 + 40);
        if ( !v9 )
          v9 = *(_QWORD *)(a3 + 32) - *(_QWORD *)(v7 + 48);
        if ( !v9 )
        {
          *a2 = *(_QWORD *)v7;
          a2[1] = v7;
          return a2;
        }
      }
      if ( v7 == v8 )
        break;
      v7 = *(_QWORD *)(v7 + 8);
    }
    *a2 = v7;
  }
  a2[1] = 0LL;
  return a2;
}
