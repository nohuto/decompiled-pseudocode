/*
 * XREFs of _std::vector_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails_std::allocator_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails___::_Emplace_reallocate_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails__::_1_::catch$3 @ 0x18017240D
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@Uguid@winrt@@@std@@QEAAXQEAUguid@winrt@@_K@Z @ 0x1800E7D1C (-deallocate@-$allocator@Uguid@winrt@@@std@@QEAAXQEAUguid@winrt@@_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetails@@QEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18014F158 (--$_Destroy_range@V-$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetail.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails_std::allocator_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails___::_Emplace_reallocate_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails__::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<SpatialAudioAppDetails>>(
    *(SpatialAudioAppDetails **)(a2 + 112),
    *(SpatialAudioAppDetails **)(a2 + 136));
  std::allocator<winrt::guid>::deallocate(v3, *(char **)(a2 + 32), *(_QWORD *)(a2 + 120));
  throw;
}
