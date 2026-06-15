/*
 * XREFs of ?VolumeStepDown@BluetoothVolume@BluetoothControls@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800D8760
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006398C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolume::VolumeStepDown(
        BluetoothControls::BluetoothVolume *this,
        const struct _GUID *a2,
        int *a3)
{
  BluetoothControls::BluetoothVolume *v5; // rbx
  __int64 *TargetedControl; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  (*(void (__fastcall **)(BluetoothControls::BluetoothVolume *))(*(_QWORD *)this + 240LL))(this);
  TargetedControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                      (__int64)v5,
                      &v8);
  LODWORD(v5) = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, int *))(*(_QWORD *)*TargetedControl + 200LL))(
                  *TargetedControl,
                  a2,
                  a3);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  return (unsigned int)v5;
}
