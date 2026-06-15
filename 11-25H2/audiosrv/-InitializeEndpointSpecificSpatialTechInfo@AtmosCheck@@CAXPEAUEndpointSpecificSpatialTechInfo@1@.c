/*
 * XREFs of ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x1800097B4
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x1800097E4 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180013568 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x180147C0C (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x180148A3C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(
        struct AtmosCheck::EndpointSpecificSpatialTechInfo *a1)
{
  __int64 v1; // rdx
  bool v2; // al

  v1 = 0LL;
  do
  {
    v2 = ((v1 - 3) & 0xFFFFFFFFFFFFFFFDuLL) != 0;
    ++v1;
    *(_BYTE *)a1 = v2;
    *((_DWORD *)a1 + 1) = -2147023728;
    a1 = (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)((char *)a1 + 32);
  }
  while ( v1 < 7 );
}
