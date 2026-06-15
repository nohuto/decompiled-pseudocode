/*
 * XREFs of ?RequiresRefreshOnEndpointActivation@BluetoothMute@BluetoothControls@@UEBA_NXZ @ 0x1800D68B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetRealControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006C228 (-GetRealControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall BluetoothControls::BluetoothMute::RequiresRefreshOnEndpointActivation(
        BluetoothControls::BluetoothMute *this)
{
  _QWORD *RealControl; // rax
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  RealControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetRealControl(
                  (__int64)this,
                  &v4);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*RealControl + 56LL))(*RealControl);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v4);
  return v2;
}
