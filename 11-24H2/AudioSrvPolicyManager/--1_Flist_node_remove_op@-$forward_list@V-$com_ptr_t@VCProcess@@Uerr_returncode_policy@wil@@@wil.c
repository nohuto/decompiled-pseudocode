/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18003D784
 * Callers:
 *     _lambda_458ffd326e5965d00ecb8a039a2797a1_::operator() @ 0x18003DA5C (_lambda_458ffd326e5965d00ecb8a039a2797a1_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op(
        __int64 a1)
{
  volatile signed __int32 **v1; // rdi
  volatile signed __int32 *v2; // rbx

  v1 = *(volatile signed __int32 ***)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = *v1;
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(v1 + 1);
      std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x10);
      v1 = (volatile signed __int32 **)v2;
    }
    while ( v2 );
  }
}
