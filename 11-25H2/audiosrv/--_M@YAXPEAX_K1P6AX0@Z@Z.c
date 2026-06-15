/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A7AD4
 * Callers:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18004284C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180054A70 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??1EffectPack@@QEAA@XZ @ 0x180076920 (--1EffectPack@@QEAA@XZ.c)
 *     _dynamic_initializer_for__AECLoopbackSelectionModeStringValues__ @ 0x180089D70 (_dynamic_initializer_for__AECLoopbackSelectionModeStringValues__.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800B43F0 (--1AudioEffectsWatcher@@UEAA@XZ.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800B4CB0 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800C7F8C (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800F9D6C (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1EffectPackConfiguration@@QEAA@XZ @ 0x18013B870 (--1EffectPackConfiguration@@QEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x180147150 (--1AtmosCheck@@UEAA@XZ.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$1 @ 0x180161D50 (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$1.c)
 *     _EffectPack::EffectPack_::_1_::dtor$5 @ 0x18016223D (_EffectPack--EffectPack_--_1_--dtor$5.c)
 *     _EffectPack::EffectPack_::_1_::dtor$11 @ 0x18016226E (_EffectPack--EffectPack_--_1_--dtor$11.c)
 *     _EffectPack::EffectPack_::_1_::dtor$17 @ 0x1801622A6 (_EffectPack--EffectPack_--_1_--dtor$17.c)
 *     _EffectPack::EffectPack_::_1_::dtor$18 @ 0x1801622DE (_EffectPack--EffectPack_--_1_--dtor$18.c)
 *     _EffectPack::EffectPack_::_1_::dtor$20 @ 0x18016232F (_EffectPack--EffectPack_--_1_--dtor$20.c)
 *     _EffectPack::EffectPack_::_1_::dtor$21 @ 0x180162367 (_EffectPack--EffectPack_--_1_--dtor$21.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$6 @ 0x180162EC6 (_AtmosCheck--AtmosCheck_--_1_--dtor$6.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$3 @ 0x180163F81 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$3.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x180164968 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     __dynamic_initializer_for__AECLoopbackSelectionModeStringValues___::_1_::dtor$2 @ 0x1801665AA (__dynamic_initializer_for__AECLoopbackSelectionModeStringValues___--_1_--dtor$2.c)
 *     _EffectPackConfiguration::EffectPackConfiguration_::_1_::dtor$0 @ 0x1801687FF (_EffectPackConfiguration--EffectPackConfiguration_--_1_--dtor$0.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x1801699A0 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate___0 @ 0x1801699D0 (_dynamic_atexit_destructor_for__ApoDataTemplate___0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A7B44 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[a3 * a2]; v5--; a4(i) )
    i -= a2;
}
