/*
 * XREFs of _lambda_3ea45eb7d205feda3a4dede396fc4e77_::__lambda_3ea45eb7d205feda3a4dede396fc4e77_ @ 0x1800DF5CC
 * Callers:
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800E1AA0 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_::_Delete_this @ 0x1800E2F70 (std--_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_--_Delete_this.c)
 *     ?OnEndpointPropertyChanged@DummyBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800F7790 (-OnEndpointPropertyChanged@DummyBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     _DummyBroadcastProvider::OnEndpointPropertyChanged_::_1_::dtor$2 @ 0x1801658F4 (_DummyBroadcastProvider--OnEndpointPropertyChanged_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_3ea45eb7d205feda3a4dede396fc4e77_::__lambda_3ea45eb7d205feda3a4dede396fc4e77_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  return wil::com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>::~com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>(a1);
}
