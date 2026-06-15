/*
 * XREFs of ?FillLevels@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAXIPEAM@Z @ 0x1800D3550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D825C (-TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolum.c)
 *     ?TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D846C (-TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIVo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BluetoothControls::CBluetoothVolumeInterceptor::FillLevels(
        BluetoothControls::CBluetoothVolumeInterceptor *this,
        unsigned int a2,
        float *a3)
{
  volatile signed __int32 *v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v5[0] = 0LL;
  if ( (int)BluetoothControls::CBluetoothVolumeInterceptor::TryGetOwner(this, v5) >= 0 )
  {
    v6 = 0LL;
    if ( (int)BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedVolumeControl(v5[0], &v6) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, float *))(*(_QWORD *)v6 + 48LL))(v6, a2, a3);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
  }
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>(v5);
}
