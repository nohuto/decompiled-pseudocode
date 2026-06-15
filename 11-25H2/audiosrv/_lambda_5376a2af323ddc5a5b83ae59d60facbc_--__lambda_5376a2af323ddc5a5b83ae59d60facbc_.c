/*
 * XREFs of _lambda_5376a2af323ddc5a5b83ae59d60facbc_::__lambda_5376a2af323ddc5a5b83ae59d60facbc_ @ 0x1800DF59C
 * Callers:
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800E1BD0 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_5376a2af323ddc5a5b83ae59d60facbc__void_::_Delete_this @ 0x1800E2F30 (std--_Func_impl_no_alloc__lambda_5376a2af323ddc5a5b83ae59d60facbc__void_--_Delete_this.c)
 *     ?OnEndpointStateChanged@DummyBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800F78C0 (-OnEndpointStateChanged@DummyBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     _DummyBroadcastProvider::OnEndpointStateChanged_::_1_::dtor$2 @ 0x180165955 (_DummyBroadcastProvider--OnEndpointStateChanged_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VDummyBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800DF614 (--1-$com_ptr_t@VDummyBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall lambda_5376a2af323ddc5a5b83ae59d60facbc_::__lambda_5376a2af323ddc5a5b83ae59d60facbc_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  wil::com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>::~com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>(a1 + 32);
  v2 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
