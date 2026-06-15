/*
 * XREFs of ??1_List_node_remove_op@?$list@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x14006DC8C
 * Callers:
 *     std::list_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy_____::remove_if__lambda_e0016ce6237c0b2005737692aaf38648___ @ 0x14006DA98 (std--list_wil--com_ptr_t_CLocalMmcssWorkQueue_wil--err_returncode_policy__std--allocator_wil--co.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>>::_List_node_remove_op::~_List_node_remove_op(
        __int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v1 + 2);
      std::_Deallocate<16,0>(v1, 0x18uLL);
      v1 = v2;
    }
    while ( v2 );
  }
}
