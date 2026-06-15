/*
 * XREFs of ?GetMasterVolumeLevelScalar@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJPEAM@Z @ 0x1800D4590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?HandleGetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAM@Z @ 0x1800D4A28 (-HandleGetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAM@Z.c)
 *     ?TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D825C (-TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolum.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::CBluetoothVolumeInterceptor::GetMasterVolumeLevelScalar(
        BluetoothControls::CBluetoothVolumeInterceptor *this,
        float *a2)
{
  int Owner; // eax
  unsigned int MasterVolumeLevelScalar; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  BluetoothControls::BluetoothVolumeAndMute *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  Owner = BluetoothControls::CBluetoothVolumeInterceptor::TryGetOwner(this, &v7);
  MasterVolumeLevelScalar = Owner;
  if ( Owner >= 0 )
    MasterVolumeLevelScalar = BluetoothControls::BluetoothVolumeAndMute::HandleGetMasterVolumeLevelScalar(v7, a2);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)Owner);
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>((volatile signed __int32 **)&v7);
  return MasterVolumeLevelScalar;
}
