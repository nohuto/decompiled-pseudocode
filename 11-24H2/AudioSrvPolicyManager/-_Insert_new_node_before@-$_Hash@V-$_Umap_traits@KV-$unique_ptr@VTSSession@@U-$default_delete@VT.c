/*
 * XREFs of ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180040F9C
 * Callers:
 *     ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18003CC00 (--$emplace@AEAKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@-$_Hash@V-$_.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Insert_new_node_before(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++qword_180064AB0;
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = qword_180064AB8;
  v6 = 2 * (a2 & qword_180064AD0);
  v7 = *(_QWORD *)(qword_180064AB8 + 16 * (a2 & qword_180064AD0));
  if ( v7 == qword_180064AA8 )
  {
    *(_QWORD *)(qword_180064AB8 + 8 * v6) = a4;
LABEL_6:
    *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
    return a4;
  }
  if ( v7 == a3 )
  {
    *(_QWORD *)(qword_180064AB8 + 8 * v6) = a4;
  }
  else if ( *(_QWORD **)(qword_180064AB8 + 8 * v6 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}
