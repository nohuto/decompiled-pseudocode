/*
 * XREFs of ?GetVolumeRange@BluetoothVolume@BluetoothControls@@UEAAJIPEAM00@Z @ 0x180065380
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006398C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::BluetoothVolume::GetVolumeRange(
        BluetoothControls::BluetoothVolume *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5)
{
  __int64 *TargetedControl; // rax
  unsigned int v9; // ebx
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  TargetedControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                      (__int64)this,
                      v11);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, float *, float *, float *))(*(_QWORD *)*TargetedControl + 176LL))(
         *TargetedControl,
         a2,
         a3,
         a4,
         a5);
  if ( v11[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  return v9;
}
