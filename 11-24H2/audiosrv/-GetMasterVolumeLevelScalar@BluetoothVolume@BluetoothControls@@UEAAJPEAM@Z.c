/*
 * XREFs of ?GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x180065450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006398C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     ?WriteCachedControlValue@BluetoothVolume@BluetoothControls@@AEAAXM@Z @ 0x1800654E4 (-WriteCachedControlValue@BluetoothVolume@BluetoothControls@@AEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::BluetoothVolume::GetMasterVolumeLevelScalar(
        BluetoothControls::BluetoothVolume *this,
        float *a2)
{
  __int64 *TargetedControl; // rax
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  TargetedControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                      (__int64)this,
                      &v8);
  v5 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)*TargetedControl + 136LL))(*TargetedControl, a2);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x257,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  else
  {
    BluetoothControls::BluetoothVolume::WriteCachedControlValue(this, *a2);
    return 0LL;
  }
}
