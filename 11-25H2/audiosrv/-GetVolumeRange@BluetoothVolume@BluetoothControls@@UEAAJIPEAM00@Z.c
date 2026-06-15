/*
 * XREFs of ?GetVolumeRange@BluetoothVolume@BluetoothControls@@UEAAJIPEAM00@Z @ 0x180073940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800739B8 (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::BluetoothVolume::GetVolumeRange(
        BluetoothControls::BluetoothVolume *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5)
{
  _QWORD *TargetedControl; // rax
  unsigned int v9; // ebx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                                this,
                                v11);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(*(_QWORD *)*TargetedControl + 160LL))(
         *TargetedControl,
         a2,
         a3,
         a4,
         a5);
  if ( v11[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  return v9;
}
