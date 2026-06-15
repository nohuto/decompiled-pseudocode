/*
 * XREFs of ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x180009934
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x1800097E4 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180013568 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x180147C0C (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x180148A3C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 * Callees:
 *     ??0EndpointSpecificSpatialTechInfo@AtmosCheck@@QEAA@XZ @ 0x1800099B4 (--0EndpointSpecificSpatialTechInfo@AtmosCheck@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 */

AtmosCheck::EndpointSpecificSpatialTechInfo **__fastcall wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(
        AtmosCheck::EndpointSpecificSpatialTechInfo **a1)
{
  AtmosCheck::EndpointSpecificSpatialTechInfo *v2; // rax
  AtmosCheck::EndpointSpecificSpatialTechInfo *v3; // rbx
  __int64 v4; // rsi
  AtmosCheck::EndpointSpecificSpatialTechInfo *v5; // rbp
  AtmosCheck::EndpointSpecificSpatialTechInfo **result; // rax

  v2 = (AtmosCheck::EndpointSpecificSpatialTechInfo *)operator new[](
                                                        0xE0uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xE0uLL);
    v4 = 7LL;
    v5 = v3;
    do
    {
      AtmosCheck::EndpointSpecificSpatialTechInfo::EndpointSpecificSpatialTechInfo(v5);
      v5 = (AtmosCheck::EndpointSpecificSpatialTechInfo *)((char *)v5 + 32);
      --v4;
    }
    while ( v4 );
  }
  else
  {
    v3 = 0LL;
  }
  result = a1;
  *a1 = v3;
  return result;
}
