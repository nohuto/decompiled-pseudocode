/*
 * XREFs of ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801CA208
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801CAB08 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     _HotKeyProcessor::DetectAndProcessHotKey_::_1_::dtor$12 @ 0x1801D9CE4 (_HotKeyProcessor--DetectAndProcessHotKey_--_1_--dtor$12.c)
 * Callees:
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@@Z @ 0x1801C952C (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_T.c)
 */

void __fastcall std::_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>>::~_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>>(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>::_Erase_head<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
      *(char ***)(a1 + 8),
      *(_QWORD *)a1);
}
