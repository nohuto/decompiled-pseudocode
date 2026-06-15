/*
 * XREFs of ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x180008EB4
 * Callers:
 *     ?GetTechnologyLicenseResult@CSpatialAudioDolbyHeadphones@@UEBAJPEBG@Z @ 0x180081280 (-GetTechnologyLicenseResult@CSpatialAudioDolbyHeadphones@@UEBAJPEBG@Z.c)
 *     wistd::__function::__func__lambda_187f8f67365585d79c898cd745a8eed3__long___cdecl(void)_::operator() @ 0x180147A30 (wistd--__function--__func__lambda_187f8f67365585d79c898cd745a8eed3__long___cdecl(void)_--operato.c)
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180008FEC (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AtmosCheck::IsHeadphonesEncoderEnabled(AtmosCheck *this, const unsigned __int16 *a2)
{
  int LicenseForSpatialSubtypeAndEndpoint; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+24h] [rbp-24h]
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0LL;
  v9 = 0;
  LOWORD(v5) = 1;
  v6 = -2147023728;
  v7 = -1879048208;
  LicenseForSpatialSubtypeAndEndpoint = AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(
                                          this,
                                          a2,
                                          2,
                                          (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)&v5);
  v3 = LicenseForSpatialSubtypeAndEndpoint;
  if ( LicenseForSpatialSubtypeAndEndpoint >= 0 )
    return v6;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31B,
    (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)(unsigned int)LicenseForSpatialSubtypeAndEndpoint,
    v5);
  return v3;
}
