/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x14006DBD4
 * Callers:
 *     ??$_Emplace@AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@?$list@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@1@QEAU21@AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x14006DA5C (--$_Emplace@AEAV-$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@-$list@V-$.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)(v2 + 16));
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>(a1);
}
