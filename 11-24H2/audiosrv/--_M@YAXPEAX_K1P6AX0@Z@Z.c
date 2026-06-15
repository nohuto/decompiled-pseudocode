/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3DC4
 * Callers:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18003F6FC (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ??1EffectPack@@QEAA@XZ @ 0x180066898 (--1EffectPack@@QEAA@XZ.c)
 *     _dynamic_initializer_for__AECLoopbackSelectionModeStringValues__ @ 0x18007B490 (_dynamic_initializer_for__AECLoopbackSelectionModeStringValues__.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18008E5A4 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800B2FB0 (--1AudioEffectsWatcher@@UEAA@XZ.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800B3870 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800C758C (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800FCFF8 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1EffectPackConfiguration@@QEAA@XZ @ 0x180144340 (--1EffectPackConfiguration@@QEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18014FC94 (--1AtmosCheck@@UEAA@XZ.c)
 *     _EffectPack::EffectPack_::_1_::dtor$5 @ 0x18016B5AF (_EffectPack--EffectPack_--_1_--dtor$5.c)
 *     _EffectPack::EffectPack_::_1_::dtor$11 @ 0x18016B5E0 (_EffectPack--EffectPack_--_1_--dtor$11.c)
 *     _EffectPack::EffectPack_::_1_::dtor$17 @ 0x18016B618 (_EffectPack--EffectPack_--_1_--dtor$17.c)
 *     _EffectPack::EffectPack_::_1_::dtor$18 @ 0x18016B650 (_EffectPack--EffectPack_--_1_--dtor$18.c)
 *     _EffectPack::EffectPack_::_1_::dtor$20 @ 0x18016B6A1 (_EffectPack--EffectPack_--_1_--dtor$20.c)
 *     _EffectPack::EffectPack_::_1_::dtor$21 @ 0x18016B6D9 (_EffectPack--EffectPack_--_1_--dtor$21.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$6 @ 0x18016C15D (_AtmosCheck--AtmosCheck_--_1_--dtor$6.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$3 @ 0x18016D317 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$3.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x18016DE60 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     __dynamic_initializer_for__AECLoopbackSelectionModeStringValues___::_1_::dtor$2 @ 0x18016FC37 (__dynamic_initializer_for__AECLoopbackSelectionModeStringValues___--_1_--dtor$2.c)
 *     _EffectPackConfiguration::EffectPackConfiguration_::_1_::dtor$0 @ 0x180171F4B (_EffectPackConfiguration--EffectPackConfiguration_--_1_--dtor$0.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$1 @ 0x1801725EE (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$1.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x180173260 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate___0 @ 0x180173290 (_dynamic_atexit_destructor_for__ApoDataTemplate___0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3E34 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[a3 * a2]; v5--; a4(i) )
    i -= a2;
}
