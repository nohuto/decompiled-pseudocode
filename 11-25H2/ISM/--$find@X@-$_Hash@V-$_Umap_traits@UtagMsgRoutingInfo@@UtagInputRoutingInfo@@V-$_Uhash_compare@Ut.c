/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@AEBUtagMsgRoutingInfo@@@Z @ 0x18003F2D4
 * Callers:
 *     ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x18003E2B4 (-OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18003F480 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r11
  _QWORD *result; // rax

  v5 = a1[1];
  v6 = *(_QWORD *)(a1[3] + 16 * (a1[6] & (a3[1] | ((unsigned __int64)*a3 << 32))) + 8);
  if ( v6 == v5 )
  {
LABEL_5:
    v7 = 0LL;
  }
  else
  {
    while ( !(unsigned __int8)operator==(a3, v6 + 16) )
    {
      if ( v7 == v8 )
        goto LABEL_5;
      v6 = *(_QWORD *)(v7 + 8);
    }
  }
  result = a2;
  if ( !v7 )
    v7 = v5;
  *a2 = v7;
  return result;
}
