/*
 * XREFs of ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x18003B250
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@1@AEBUtagMsgRoutingInfo@@@Z @ 0x18003B850 (--$find@X@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@UtagMs.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18003C310 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterInputHost(__int64 a1, __int64 a2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::find<void>(
    a1 + 32,
    v4,
    a2);
  if ( v4[0] != *(_QWORD *)(a1 + 40) )
    DWMInputRouter::RemoveTarget(a1 - 56, v4);
  return 0LL;
}
