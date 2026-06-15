/*
 * XREFs of ?GetVolumeStepInfo@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJPEAI0@Z @ 0x1800D4960
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
__int64 __fastcall BluetoothControls::CBluetoothVolumeInterceptor::GetVolumeStepInfo(
        BluetoothControls::CBluetoothVolumeInterceptor *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int Owner; // eax
  unsigned int v6; // ebx
  int TargetedVolumeControl; // eax
  volatile signed __int32 *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v9[0] = 0LL;
  Owner = BluetoothControls::CBluetoothVolumeInterceptor::TryGetOwner(this, v9);
  v6 = Owner;
  if ( Owner >= 0 )
  {
    v11 = 0LL;
    TargetedVolumeControl = BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedVolumeControl(v9[0], &v11);
    v6 = TargetedVolumeControl;
    if ( TargetedVolumeControl >= 0 )
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v11 + 184LL))(v11, a2, a3);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A0,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)TargetedVolumeControl);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)Owner);
  }
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>(v9);
  return v6;
}
