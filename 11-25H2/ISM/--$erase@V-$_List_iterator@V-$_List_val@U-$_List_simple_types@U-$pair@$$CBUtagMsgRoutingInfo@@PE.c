/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@1@V21@@Z @ 0x180094CD0
 * Callers:
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18003F880 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??RRoutingInfoHash@@QEBA_KAEBUtagMsgRoutingInfo@@@Z @ 0x18007146C (--RRoutingInfoHash@@QEBA_KAEBUtagMsgRoutingInfo@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *result; // rax

  v6 = RoutingInfoHash::operator()((__int64)a1, (int *)a3 + 4);
  v7 = a1[3];
  v8 = 2 * (a1[6] & v6);
  if ( *(__int64 **)(v7 + 16 * (a1[6] & v6) + 8) == a3 )
  {
    if ( *(__int64 **)(v7 + 16 * (a1[6] & v6)) == a3 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 8 * v8) = v9;
    }
    else
    {
      v9 = a3[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (a1[6] & v6)) == a3 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & v6)) = *a3;
  }
  v10 = *a3;
  --a1[2];
  *(_QWORD *)a3[1] = v10;
  *(_QWORD *)(v10 + 8) = a3[1];
  std::_Deallocate<16,0>((char *)a3, (const struct std::nothrow_t *)0x40);
  result = a2;
  *a2 = v10;
  return result;
}
