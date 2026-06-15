/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800A7FEC
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180054A70 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1800604C8 (--0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV-$shared_ptr@$$CBUEffe.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x1800794E0 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x180091068 (--0EffectPackConfiguration@@QEAA@U_GUID@@@Z.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180092DB0 (--0AtmosCheck@@QEAA@XZ.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x1800A0E78 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800B4240 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800B4CB0 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x1800C7E20 (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A7B44 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
}
