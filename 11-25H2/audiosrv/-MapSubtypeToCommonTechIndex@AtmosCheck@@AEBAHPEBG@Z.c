/*
 * XREFs of ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x1800099DC
 * Callers:
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180009230 (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x1800097E4 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180148E48 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
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
      v6 += 6;
    }
  }
  return v2;
}
