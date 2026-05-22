/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBUtagMsgRoutingInfo@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUtagMsgRoutingInfo@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003F69C
 * Callers:
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x18003F4CC (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInpu.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,IInputTarget *>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,IInputTarget *>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _OWORD **a4)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  a1[1] = v6;
  v7 = *a4;
  v6[1] = **a4;
  v6[2] = v7[1];
  v6[3] = *((unsigned __int64 *)v7 + 4);
  return a1;
}
