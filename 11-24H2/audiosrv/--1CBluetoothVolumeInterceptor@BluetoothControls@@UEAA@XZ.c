/*
 * XREFs of ??1CBluetoothVolumeInterceptor@BluetoothControls@@UEAA@XZ @ 0x1800D2794
 * Callers:
 *     ??_GCBluetoothVolumeInterceptor@BluetoothControls@@UEAAPEAXI@Z @ 0x1800D2A50 (--_GCBluetoothVolumeInterceptor@BluetoothControls@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 */

void __fastcall BluetoothControls::CBluetoothVolumeInterceptor::~CBluetoothVolumeInterceptor(
        volatile signed __int32 **this)
{
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>(this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
