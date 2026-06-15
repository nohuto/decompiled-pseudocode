/*
 * XREFs of ?OnNotify@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x1800D5D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?OnMuteNotify@BluetoothVolumeAndMute@BluetoothControls@@QEAAJKPEBU_GUID@@@Z @ 0x1800D5BC0 (-OnMuteNotify@BluetoothVolumeAndMute@BluetoothControls@@QEAAJKPEBU_GUID@@@Z.c)
 *     ?TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D825C (-TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolum.c)
 */

__int64 __fastcall BluetoothControls::CBluetoothVolumeInterceptor::OnNotify(
        BluetoothControls::CBluetoothVolumeInterceptor *this,
        unsigned int a2,
        const struct _GUID *a3)
{
  int Owner; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  BluetoothControls::BluetoothVolumeAndMute *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  Owner = BluetoothControls::CBluetoothVolumeInterceptor::TryGetOwner(this, &v9);
  v6 = Owner;
  if ( Owner >= 0 )
    v6 = BluetoothControls::BluetoothVolumeAndMute::OnMuteNotify(v9, a2, a3);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)Owner);
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>((volatile signed __int32 **)&v9);
  return v6;
}
