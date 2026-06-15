/*
 * XREFs of ??$_Destroy_range@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetails@@QEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18014F158
 * Callers:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x1800576C8 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ??1SpatialAudioFormatSubtypeInfo@@QEAA@XZ @ 0x18008DEC0 (--1SpatialAudioFormatSubtypeInfo@@QEAA@XZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18008E5A4 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??$_Uninitialized_move@PEAUSpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAPEAUSpatialAudioAppDetails@@QEAU1@0PEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18014F518 (--$_Uninitialized_move@PEAUSpatialAudioAppDetails@@V-$allocator@USpatialAudioAppDetails@@@std@@@.c)
 *     ??1?$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V?$allocator@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@@std@@@std@@QEAA@XZ @ 0x18014FC4C (--1-$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V-$allocator@USpatialTechAp.c)
 *     ??1CommonSpatialTechInfo@AtmosCheck@@QEAA@XZ @ 0x18014FD80 (--1CommonSpatialTechInfo@AtmosCheck@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@AEAAXQEAUSpatialAudioAppDetails@@_K1@Z @ 0x18015F594 (-_Change_array@-$vector@USpatialAudioAppDetails@@V-$allocator@USpatialAudioAppDetails@@@std@@@st.c)
 *     _std::vector_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails_std::allocator_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails___::_Emplace_reallocate_AtmosCheck::CommonSpatialTechInfo::SpatialTechAppDetails__::_1_::catch$3 @ 0x18017240D (_std--vector_AtmosCheck--CommonSpatialTechInfo--SpatialTechAppDetails_std--allocator_AtmosCheck-.c)
 * Callees:
 *     ??1SpatialAudioAppDetails@@QEAA@XZ @ 0x18014FDE4 (--1SpatialAudioAppDetails@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<SpatialAudioAppDetails>>(
        SpatialAudioAppDetails *this,
        SpatialAudioAppDetails *a2)
{
  SpatialAudioAppDetails *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      SpatialAudioAppDetails::~SpatialAudioAppDetails(v3);
      v3 = (SpatialAudioAppDetails *)((char *)v3 + 16);
    }
    while ( v3 != a2 );
  }
}
