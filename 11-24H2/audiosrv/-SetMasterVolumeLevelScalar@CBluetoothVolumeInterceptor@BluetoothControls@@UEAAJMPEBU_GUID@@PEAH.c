/*
 * XREFs of ?SetMasterVolumeLevelScalar@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D7DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?HandleSetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D4BDC (-HandleSetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJMPEBU_GUID@@PEA.c)
 *     ?TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D825C (-TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolum.c)
 */

__int64 __fastcall BluetoothControls::CBluetoothVolumeInterceptor::SetMasterVolumeLevelScalar(
        BluetoothControls::CBluetoothVolumeInterceptor *this,
        float a2,
        __m128i *a3,
        int *a4)
{
  int Owner; // eax
  unsigned int v7; // ebx
  BluetoothControls::BluetoothVolumeAndMute *v9[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9[0] = 0LL;
  Owner = BluetoothControls::CBluetoothVolumeInterceptor::TryGetOwner(this, v9);
  v7 = Owner;
  if ( Owner >= 0 )
    v7 = BluetoothControls::BluetoothVolumeAndMute::HandleSetMasterVolumeLevelScalar(v9[0], a2, a3, a4);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)Owner);
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>((volatile signed __int32 **)v9);
  return v7;
}
