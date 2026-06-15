/*
 * XREFs of ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18003D560
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003CBA8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_delete.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003D3B0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-.c)
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x18003DE7C (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _TSSession::Create_::_1_::dtor$1 @ 0x18004B3BA (_TSSession--Create_--_1_--dtor$1.c)
 *     _TsSessionCreate_::_1_::dtor$0 @ 0x18004B468 (_TsSessionCreate_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z @ 0x18003DE4C (--R-$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<TSSession>::~unique_ptr<TSSession>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<TSSession>::operator()();
  return result;
}
