/*
 * XREFs of ?GetVolumeRange@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJIPEAM00@Z @ 0x1800D4820
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D825C (-TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolum.c)
 *     ?TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D846C (-TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIVo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothControls::CBluetoothVolumeInterceptor::GetVolumeRange(
        BluetoothControls::CBluetoothVolumeInterceptor *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5)
{
  int Owner; // eax
  unsigned int v9; // ebx
  int TargetedVolumeControl; // eax
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v13[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v13[0] = 0LL;
  Owner = BluetoothControls::CBluetoothVolumeInterceptor::TryGetOwner(this, v13);
  v9 = Owner;
  if ( Owner >= 0 )
  {
    v12 = 0LL;
    TargetedVolumeControl = BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedVolumeControl(v13[0], &v12);
    v9 = TargetedVolumeControl;
    if ( TargetedVolumeControl >= 0 )
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, float *, float *, float *))(*(_QWORD *)v12 + 176LL))(
             v12,
             a2,
             a3,
             a4,
             a5);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x497,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)TargetedVolumeControl);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x494,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)Owner);
  }
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>(v13);
  return v9;
}
