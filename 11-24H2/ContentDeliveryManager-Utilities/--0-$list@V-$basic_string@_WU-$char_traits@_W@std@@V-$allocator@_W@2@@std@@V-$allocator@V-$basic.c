/*
 * XREFs of ??0?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@AEBV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x180093A58
 * Callers:
 *     ??0?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x180093A88 (--0-$unordered_set@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@U-$hash@V-$b.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@$0A@U?$_List_base_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@2@PEAU32@0@Z @ 0x180096EBC (-_Buynode0@-$_List_alloc@$0A@U-$_List_base_types@V-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 */

_QWORD *__fastcall std::list<std::wstring>::list<std::wstring>(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = std::_List_alloc<0,std::_List_base_types<std::wstring>>::_Buynode0(a1, 0LL, 0LL);
  return a1;
}
