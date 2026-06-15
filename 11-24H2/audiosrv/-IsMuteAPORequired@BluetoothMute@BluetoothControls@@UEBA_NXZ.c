/*
 * XREFs of ?IsMuteAPORequired@BluetoothMute@BluetoothControls@@UEBA_NXZ @ 0x180063850
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006398C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall BluetoothControls::BluetoothMute::IsMuteAPORequired(BluetoothControls::BluetoothMute *this)
{
  _QWORD *TargetedControl; // rax
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                                this,
                                &v4);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*TargetedControl + 64LL))(*TargetedControl);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}
