/*
 * XREFs of ?ReloadMuteState@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D64D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D8210 (-TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolumeA.c)
 *     ?TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D83DC (-TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIMute.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BluetoothControls::CBluetoothMuteInterceptor::ReloadMuteState(
        BluetoothControls::CBluetoothMuteInterceptor *this)
{
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF
  volatile signed __int32 *v2; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( (int)BluetoothControls::CBluetoothMuteInterceptor::TryGetOwner(this, &v2) >= 0 )
  {
    v1 = 0LL;
    if ( (int)BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedMuteControl(v2, &v1) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v1);
  }
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>(&v2);
}
