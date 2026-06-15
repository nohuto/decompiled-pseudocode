/*
 * XREFs of ?InitializeAPOs@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800D5170
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

__int64 __fastcall BluetoothControls::CBluetoothVolumeInterceptor::InitializeAPOs(
        BluetoothControls::CBluetoothVolumeInterceptor *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int Owner; // eax
  unsigned int v8; // ebx
  int TargetedVolumeControl; // eax
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v12[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12[0] = 0LL;
  Owner = BluetoothControls::CBluetoothVolumeInterceptor::TryGetOwner(this, v12);
  v8 = Owner;
  if ( Owner >= 0 )
  {
    v11 = 0LL;
    TargetedVolumeControl = BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedVolumeControl(v12[0], &v11);
    v8 = TargetedVolumeControl;
    if ( TargetedVolumeControl >= 0 )
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v11 + 72LL))(
             v11,
             a2,
             a3,
             a4);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4CE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)TargetedVolumeControl);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4CB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)Owner);
  }
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>(v12);
  return v8;
}
