/*
 * XREFs of ?NotifyAudioDGTerminated@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ @ 0x1800D58F8
 * Callers:
 *     ?NotifyAudioDGTerminated@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D5980 (-NotifyAudioDGTerminated@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ.c)
 *     ?NotifyAudioDGTerminated@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D59C0 (-NotifyAudioDGTerminated@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D83DC (-TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIMute.c)
 *     ?TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D846C (-TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIVo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BluetoothControls::BluetoothVolumeAndMute::NotifyAudioDGTerminated(
        BluetoothControls::BluetoothVolumeAndMute *this)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( (int)BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedVolumeControl(this, &v3) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  v2 = 0LL;
  if ( (int)BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedMuteControl(this, &v2) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v3);
}
