/*
 * XREFs of ??0?$com_ptr_t@VDummyBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDummyBroadcastProvider@@@Z @ 0x1800DEE38
 * Callers:
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800E1AA0 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800E1BD0 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_01de1b5ef4ca3e46b34c9c5607c760ef__void_::_Copy @ 0x1800E2E80 (std--_Func_impl_no_alloc__lambda_01de1b5ef4ca3e46b34c9c5607c760ef__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Copy @ 0x1800E2EF0 (std--_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_--_Copy.c)
 *     ?OnEndpointPropertyChanged@DummyBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800F7790 (-OnEndpointPropertyChanged@DummyBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@DummyBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800F78C0 (-OnEndpointStateChanged@DummyBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_::_Copy @ 0x1800F8380 (std--_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_5376a2af323ddc5a5b83ae59d60facbc__void_::_Copy @ 0x1800F83C0 (std--_Func_impl_no_alloc__lambda_5376a2af323ddc5a5b83ae59d60facbc__void_--_Copy.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18002C450 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

volatile int **__fastcall wil::com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>::com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>(
        volatile int **a1,
        volatile int *a2)
{
  volatile int **v2; // r8

  *a1 = a2;
  v2 = a1;
  if ( a2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 3), a2);
  return v2;
}
