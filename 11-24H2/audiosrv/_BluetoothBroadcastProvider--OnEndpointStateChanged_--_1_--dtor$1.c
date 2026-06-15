/*
 * XREFs of _BluetoothBroadcastProvider::OnEndpointStateChanged_::_1_::dtor$1 @ 0x18016EFCD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BluetoothBroadcastProvider::OnEndpointStateChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::~com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>((__int64 *)(a2 + 200));
}
