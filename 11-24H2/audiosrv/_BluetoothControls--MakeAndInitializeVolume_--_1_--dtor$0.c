/*
 * XREFs of _BluetoothControls::MakeAndInitializeVolume_::_1_::dtor$0 @ 0x18016E3DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BluetoothControls::MakeAndInitializeVolume_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>((volatile signed __int32 **)(a2 + 40));
}
