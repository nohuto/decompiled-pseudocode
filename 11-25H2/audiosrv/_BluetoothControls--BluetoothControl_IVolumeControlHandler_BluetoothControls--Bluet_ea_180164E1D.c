/*
 * XREFs of _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::catch$13 @ 0x180164E1D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B23C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 192) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 184),
                            (void *)0xCC,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                            a4);
  return 0LL;
}
