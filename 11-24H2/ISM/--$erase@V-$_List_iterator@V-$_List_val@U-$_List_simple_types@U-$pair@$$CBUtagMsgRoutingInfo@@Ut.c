/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800920C8
 * Callers:
 *     ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x18003AD44 (-OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 *     ?OnAppThreadDisconnected@NonBamoInputDeliveryServer@@QEAAJI@Z @ 0x1800780EC (-OnAppThreadDisconnected@NonBamoInputDeliveryServer@@QEAAJI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rbx

  v4 = a1[3];
  v5 = (unsigned __int64)*((unsigned int *)a3 + 4) << 32;
  v6 = 2 * (a1[6] & (v5 | *((unsigned int *)a3 + 5)));
  if ( *(__int64 **)(v4 + 16 * (a1[6] & (v5 | *((unsigned int *)a3 + 5))) + 8) == a3 )
  {
    if ( *(__int64 **)(v4 + 16 * (a1[6] & (v5 | *((unsigned int *)a3 + 5)))) == a3 )
    {
      v7 = a1[1];
      *(_QWORD *)(v4 + 8 * v6) = v7;
    }
    else
    {
      v7 = a3[1];
    }
    *(_QWORD *)(v4 + 8 * v6 + 8) = v7;
  }
  else if ( *(__int64 **)(v4 + 16 * (a1[6] & (v5 | *((unsigned int *)a3 + 5)))) == a3 )
  {
    *(_QWORD *)(v4 + 16 * (a1[6] & (v5 | *((unsigned int *)a3 + 5)))) = *a3;
  }
  v8 = *a3;
  --a1[2];
  *(_QWORD *)a3[1] = v8;
  *(_QWORD *)(v8 + 8) = a3[1];
  std::_Deallocate<16,0>((char *)a3, (const struct std::nothrow_t *)0x68);
  *a2 = v8;
  return a2;
}
