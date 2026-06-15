/*
 * XREFs of ?SetMute@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D7FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D25A4 (--1-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAA@.c)
 *     ?HandleSetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D4DC0 (-HandleSetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJHPEBU_GUID@@PEAH@Z.c)
 *     ?TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D8210 (-TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolumeA.c)
 */

__int64 __fastcall BluetoothControls::CBluetoothMuteInterceptor::SetMute(
        BluetoothControls::CBluetoothMuteInterceptor *this,
        int a2,
        __m128i *a3,
        int *a4)
{
  int Owner; // eax
  unsigned int v8; // ebx
  BluetoothControls::BluetoothVolumeAndMute *v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10[0] = 0LL;
  Owner = BluetoothControls::CBluetoothMuteInterceptor::TryGetOwner(this, v10);
  v8 = Owner;
  if ( Owner >= 0 )
    v8 = BluetoothControls::BluetoothVolumeAndMute::HandleSetMute(v10[0], a2, a3, a4);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x510,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)Owner);
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::~com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>((volatile signed __int32 **)v10);
  return v8;
}
