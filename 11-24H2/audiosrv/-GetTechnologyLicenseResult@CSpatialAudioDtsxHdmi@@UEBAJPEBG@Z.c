/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDtsxHdmi@@UEBAJPEBG@Z @ 0x180141BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x1800573B8 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechI.c)
 */

__int64 __fastcall CSpatialAudioDtsxHdmi::GetTechnologyLicenseResult(CSpatialAudioDtsxHdmi *this, char *a2)
{
  unsigned int v2; // ebx
  AtmosCheck *v4; // rcx
  int LicenseForSpatialSubtypeAndEndpoint; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = -2147418113;
  if ( !byte_1801DA2FA )
    return 0LL;
  v4 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v9 = 0LL;
    v10 = 0;
    LOWORD(v6) = 1;
    v7 = -2147023728;
    v8 = -1879048208;
    LicenseForSpatialSubtypeAndEndpoint = AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(
                                            v4,
                                            a2,
                                            6,
                                            (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)&v6);
    v2 = LicenseForSpatialSubtypeAndEndpoint;
    if ( LicenseForSpatialSubtypeAndEndpoint >= 0 )
      return v7;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x338,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)LicenseForSpatialSubtypeAndEndpoint);
  }
  return v2;
}
