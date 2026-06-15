/*
 * XREFs of ??1?$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V?$allocator@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@@std@@@std@@QEAA@XZ @ 0x18014FC4C
 * Callers:
 *     _AtmosCheck::GetLicenseStatusForEndpointId_::_1_::dtor$2 @ 0x18016B891 (_AtmosCheck--GetLicenseStatusForEndpointId_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetails@@QEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18014F158 (--$_Destroy_range@V-$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetail.c)
 */

void __fastcall std::vector<AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails>::~vector<AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<SpatialAudioAppDetails>>(
      (SpatialAudioAppDetails *)v2,
      *(SpatialAudioAppDetails **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
