/*
 * XREFs of ??1?$com_ptr_t@VDummyBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800DF614
 * Callers:
 *     _lambda_5376a2af323ddc5a5b83ae59d60facbc_::__lambda_5376a2af323ddc5a5b83ae59d60facbc_ @ 0x1800DF59C (_lambda_5376a2af323ddc5a5b83ae59d60facbc_--__lambda_5376a2af323ddc5a5b83ae59d60facbc_.c)
 *     _lambda_3ea45eb7d205feda3a4dede396fc4e77_::__lambda_3ea45eb7d205feda3a4dede396fc4e77_ @ 0x1800DF5CC (_lambda_3ea45eb7d205feda3a4dede396fc4e77_--__lambda_3ea45eb7d205feda3a4dede396fc4e77_.c)
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800E1AA0 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800E1BD0 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     ?OnEndpointPropertyChanged@DummyBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800F7790 (-OnEndpointPropertyChanged@DummyBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@DummyBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800F78C0 (-OnEndpointStateChanged@DummyBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     _DummyBroadcastProvider::OnEndpointPropertyChanged_::_1_::dtor$1 @ 0x1801658E2 (_DummyBroadcastProvider--OnEndpointPropertyChanged_--_1_--dtor$1.c)
 *     _DummyBroadcastProvider::OnEndpointStateChanged_::_1_::dtor$1 @ 0x180165943 (_DummyBroadcastProvider--OnEndpointStateChanged_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E2270 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastProvid.c)
 */

__int64 __fastcall wil::com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>::~com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastProvider>::Release(v1);
  return result;
}
