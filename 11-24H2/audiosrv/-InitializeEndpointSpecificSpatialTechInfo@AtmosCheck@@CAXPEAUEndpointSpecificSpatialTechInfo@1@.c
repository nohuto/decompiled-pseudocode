/*
 * XREFs of ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180057088
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x18000DE88 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180056E14 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x1801507AC (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015172C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
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
