/*
 * XREFs of ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18005700C
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180056E14 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x1800575F8 (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x1800576C8 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180151B38 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::MapSubtypeToCommonTechIndex(AtmosCheck *this, const unsigned __int16 *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  LPCWCH *v6; // rsi

  v2 = -1;
  v3 = 0;
  if ( a2 )
  {
    v6 = (LPCWCH *)((char *)this + 296);
    while ( v3 < 7 )
    {
      if ( CompareStringOrdinal(a2, -1, *v6, -1, 1) == 2 )
        return v3;
      ++v3;
      v6 += 9;
    }
  }
  return v2;
}
