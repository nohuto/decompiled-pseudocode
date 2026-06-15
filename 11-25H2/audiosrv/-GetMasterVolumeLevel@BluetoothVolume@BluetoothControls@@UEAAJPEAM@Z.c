/*
 * XREFs of ?GetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x18007E000
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::BluetoothVolume::GetMasterVolumeLevel(
        BluetoothControls::BluetoothVolume *this,
        float *a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi

  if ( *((_BYTE *)this + 112)
    && *((_QWORD *)this + 13)
    && (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 113) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 13) + 120LL);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  else
  {
    v4 = *((_QWORD *)this + 15);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v4 + 112LL))(v4, a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
