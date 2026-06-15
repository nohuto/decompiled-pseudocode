/*
 * XREFs of ?NotifyAudioDGTerminated@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D59C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?NotifyAudioDGTerminated@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ @ 0x1800D58F8 (-NotifyAudioDGTerminated@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ.c)
 *     ?TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D825C (-TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolum.c)
 */

void __fastcall BluetoothControls::CBluetoothVolumeInterceptor::NotifyAudioDGTerminated(
        BluetoothControls::CBluetoothVolumeInterceptor *this)
{
  BluetoothControls::BluetoothVolumeAndMute *v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( (int)BluetoothControls::CBluetoothVolumeInterceptor::TryGetOwner(this, &v1) >= 0 )
    BluetoothControls::BluetoothVolumeAndMute::NotifyAudioDGTerminated(v1);
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>((volatile signed __int32 **)&v1);
}
