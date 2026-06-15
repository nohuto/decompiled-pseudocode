/*
 * XREFs of _BluetoothControls::BluetoothVolumeAndMute::RuntimeClassInitialize_::_1_::catch$16 @ 0x18016E4C8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::RuntimeClassInitialize_::_1_::catch_16(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 344),
                           (void *)0x5E1,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                           a4);
  return 0LL;
}
