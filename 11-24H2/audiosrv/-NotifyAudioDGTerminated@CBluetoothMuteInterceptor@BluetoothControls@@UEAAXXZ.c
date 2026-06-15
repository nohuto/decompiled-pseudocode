/*
 * XREFs of ?NotifyAudioDGTerminated@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D5980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?NotifyAudioDGTerminated@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ @ 0x1800D58F8 (-NotifyAudioDGTerminated@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ.c)
 *     ?TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D8210 (-TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolumeA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BluetoothControls::CBluetoothMuteInterceptor::NotifyAudioDGTerminated(
        BluetoothControls::CBluetoothMuteInterceptor *this)
{
  BluetoothControls::BluetoothVolumeAndMute *v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( (int)BluetoothControls::CBluetoothMuteInterceptor::TryGetOwner(this, &v1) >= 0 )
    BluetoothControls::BluetoothVolumeAndMute::NotifyAudioDGTerminated(v1);
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>((volatile signed __int32 **)&v1);
}
