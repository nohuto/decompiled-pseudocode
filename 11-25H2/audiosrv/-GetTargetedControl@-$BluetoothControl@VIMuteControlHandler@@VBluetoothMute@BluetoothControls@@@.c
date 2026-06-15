/*
 * XREFs of ?GetTargetedControl@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180077748
 * Callers:
 *     ?IsMuteAPORequired@BluetoothMute@BluetoothControls@@UEBA_NXZ @ 0x180077700 (-IsMuteAPORequired@BluetoothMute@BluetoothControls@@UEBA_NXZ.c)
 *     ?InitializeAPOs@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800D0CC0 (-InitializeAPOs@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Blue.c)
 *     ?SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D1D20 (-SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::GetTargetedControl(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx

  v3 = a1;
  if ( *(_BYTE *)(a1 + 112) && *(_QWORD *)(a1 + 104) && (unsigned __int8)std::_Atomic_storage<bool,1>::load(a1 + 113) )
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + 120LL);
  else
    v4 = *(_QWORD *)(v3 + 120);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
