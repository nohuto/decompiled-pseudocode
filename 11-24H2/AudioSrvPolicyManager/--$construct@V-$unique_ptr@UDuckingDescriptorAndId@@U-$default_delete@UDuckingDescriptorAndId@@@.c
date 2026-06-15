/*
 * XREFs of ??$construct@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@V12@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@PEAX@std@@@1@QEAV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@1@$$QEAV31@@Z @ 0x18003CBEC
 * Callers:
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180003760 (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ??$emplace_after@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@?$forward_list@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@V?$allocator@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@2@@std@@QEAA?AV?$_Flist_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@std@@@std@@@1@V?$_Flist_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@1@@Z @ 0x18003CD88 (--$emplace_after@V-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::_Flist_node<std::unique_ptr<DuckingDescriptorAndId>,void *>>>::construct<std::unique_ptr<DuckingDescriptorAndId>,std::unique_ptr<DuckingDescriptorAndId>>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 result; // rax

  result = *a3;
  *a3 = 0LL;
  *a2 = result;
  return result;
}
