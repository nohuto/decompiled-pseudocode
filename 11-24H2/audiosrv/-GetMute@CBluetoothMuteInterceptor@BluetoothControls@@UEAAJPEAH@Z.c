/*
 * XREFs of ?GetMute@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJPEAH@Z @ 0x1800D4600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?HandleGetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAH@Z @ 0x1800D4AEC (-HandleGetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAH@Z.c)
 *     ?TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D8210 (-TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolumeA.c)
 */

__int64 __fastcall BluetoothControls::CBluetoothMuteInterceptor::GetMute(
        BluetoothControls::CBluetoothMuteInterceptor *this,
        int *a2)
{
  int Owner; // eax
  unsigned int Mute; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  BluetoothControls::BluetoothVolumeAndMute *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  Owner = BluetoothControls::CBluetoothMuteInterceptor::TryGetOwner(this, &v7);
  Mute = Owner;
  if ( Owner >= 0 )
    Mute = BluetoothControls::BluetoothVolumeAndMute::HandleGetMute(v7, a2);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x517,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)Owner);
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>((volatile signed __int32 **)&v7);
  return Mute;
}
