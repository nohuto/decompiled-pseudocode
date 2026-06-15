/*
 * XREFs of ?IsDtsxHeadphonesEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x180151034
 * Callers:
 *     ?GetDeepLink@CSpatialAudioDtsxHeadphones@@UEBAPEBGPEBG@Z @ 0x180071A80 (-GetDeepLink@CSpatialAudioDtsxHeadphones@@UEBAPEBGPEBG@Z.c)
 *     ?GetTechnologyLicenseResult@CSpatialAudioDtsxHeadphones@@UEBAJPEBG@Z @ 0x180141C70 (-GetTechnologyLicenseResult@CSpatialAudioDtsxHeadphones@@UEBAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x1800573B8 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechI.c)
 */

__int64 __fastcall AtmosCheck::IsDtsxHeadphonesEnabled(AtmosCheck *this, char *a2)
{
  int LicenseForSpatialSubtypeAndEndpoint; // eax
  unsigned int v3; // ebx
  __int16 v5[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+24h] [rbp-24h]
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0LL;
  v9 = 0;
  v5[0] = 1;
  v6 = -2147023728;
  v7 = -1879048208;
  LicenseForSpatialSubtypeAndEndpoint = AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(
                                          this,
                                          a2,
                                          4,
                                          (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)v5);
  v3 = LicenseForSpatialSubtypeAndEndpoint;
  if ( LicenseForSpatialSubtypeAndEndpoint >= 0 )
    return v6;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32A,
    (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)(unsigned int)LicenseForSpatialSubtypeAndEndpoint);
  return v3;
}
