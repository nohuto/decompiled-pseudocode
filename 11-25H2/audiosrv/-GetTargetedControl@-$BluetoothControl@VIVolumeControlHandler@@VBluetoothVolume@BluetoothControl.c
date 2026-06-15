/*
 * XREFs of ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800739B8
 * Callers:
 *     ?GetVolumeRange@BluetoothVolume@BluetoothControls@@UEAAJIPEAM00@Z @ 0x180073940 (-GetVolumeRange@BluetoothVolume@BluetoothControls@@UEAAJIPEAM00@Z.c)
 *     ?FillLevels@BluetoothVolume@BluetoothControls@@UEAAXIPEAM@Z @ 0x1800D0AE0 (-FillLevels@BluetoothVolume@BluetoothControls@@UEAAXIPEAM@Z.c)
 *     ?FillLevelsInDB@BluetoothVolume@BluetoothControls@@UEAAXIPEAM@Z @ 0x1800D0B30 (-FillLevelsInDB@BluetoothVolume@BluetoothControls@@UEAAXIPEAM@Z.c)
 *     ?GetChannelCount@BluetoothVolume@BluetoothControls@@UEAAJPEAI@Z @ 0x1800D0B80 (-GetChannelCount@BluetoothVolume@BluetoothControls@@UEAAJPEAI@Z.c)
 *     ?GetChannelVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJIPEAM@Z @ 0x1800D0BC0 (-GetChannelVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJIPEAM@Z.c)
 *     ?GetChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIPEAM@Z @ 0x1800D0C10 (-GetChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIPEAM@Z.c)
 *     ?GetVolumeStepInfo@BluetoothVolume@BluetoothControls@@UEAAJPEAI0@Z @ 0x1800D0C60 (-GetVolumeStepInfo@BluetoothVolume@BluetoothControls@@UEAAJPEAI0@Z.c)
 *     ?InitializeAPOs@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800D0D20 (-InitializeAPOs@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@.c)
 *     ?IsVolumeAPORequired@BluetoothVolume@BluetoothControls@@UEBA_NXZ @ 0x1800D0E20 (-IsVolumeAPORequired@BluetoothVolume@BluetoothControls@@UEBA_NXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800D1A30 (-SetAllChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800D1AC0 (-SetChannelVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800D1B50 (-SetChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D1BE0 (-SetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D1C60 (-SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolumeLimitScalar@BluetoothVolume@BluetoothControls@@UEAAJM@Z @ 0x1800D1E60 (-SetVolumeLimitScalar@BluetoothVolume@BluetoothControls@@UEAAJM@Z.c)
 *     ?VolumeStepDown@BluetoothVolume@BluetoothControls@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800D1FF0 (-VolumeStepDown@BluetoothVolume@BluetoothControls@@UEAAJPEBU_GUID@@PEAH@Z.c)
 *     ?VolumeStepUp@BluetoothVolume@BluetoothControls@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800D2070 (-VolumeStepUp@BluetoothVolume@BluetoothControls@@UEAAJPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
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
