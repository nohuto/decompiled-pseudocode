/*
 * XREFs of ?RegisterForNotifications@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJXZ @ 0x1800D63D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?RegisterForNotifications@BluetoothVolumeAndMute@BluetoothControls@@QEAAJXZ @ 0x1800D6264 (-RegisterForNotifications@BluetoothVolumeAndMute@BluetoothControls@@QEAAJXZ.c)
 *     ?TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D825C (-TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolum.c)
 */

__int64 __fastcall BluetoothControls::CBluetoothVolumeInterceptor::RegisterForNotifications(
        BluetoothControls::CBluetoothVolumeInterceptor *this)
{
  int Owner; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  BluetoothControls::BluetoothVolumeAndMute *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  Owner = BluetoothControls::CBluetoothVolumeInterceptor::TryGetOwner(this, &v5);
  v2 = Owner;
  if ( Owner >= 0 )
    v2 = BluetoothControls::BluetoothVolumeAndMute::RegisterForNotifications(v5);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)Owner);
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>((volatile signed __int32 **)&v5);
  return v2;
}
