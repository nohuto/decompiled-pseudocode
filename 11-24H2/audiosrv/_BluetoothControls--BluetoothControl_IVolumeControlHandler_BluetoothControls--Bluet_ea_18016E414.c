/*
 * XREFs of _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::catch$17 @ 0x18016E414
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 208) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 200),
                            (void *)0x112,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                            a4);
  return 0LL;
}
