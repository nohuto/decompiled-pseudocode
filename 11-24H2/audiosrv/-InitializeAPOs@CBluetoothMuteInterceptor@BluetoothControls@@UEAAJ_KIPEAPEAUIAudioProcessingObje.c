/*
 * XREFs of ?InitializeAPOs@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800D5090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D8210 (-TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolumeA.c)
 *     ?TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D83DC (-TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIMute.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothControls::CBluetoothMuteInterceptor::InitializeAPOs(
        BluetoothControls::CBluetoothMuteInterceptor *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int Owner; // eax
  unsigned int v8; // ebx
  int TargetedMuteControl; // eax
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v12[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12[0] = 0LL;
  Owner = BluetoothControls::CBluetoothMuteInterceptor::TryGetOwner(this, v12);
  v8 = Owner;
  if ( Owner >= 0 )
  {
    v11 = 0LL;
    TargetedMuteControl = BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedMuteControl(v12[0], &v11);
    v8 = TargetedMuteControl;
    if ( TargetedMuteControl >= 0 )
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v11 + 80LL))(
             v11,
             a2,
             a3,
             a4);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)TargetedMuteControl);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)Owner);
  }
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>(v12);
  return v8;
}
