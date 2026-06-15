/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDtsxHdmi@@UEBAJPEBG@Z @ 0x180139190
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180008FEC (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSpatialAudioDtsxHdmi::GetTechnologyLicenseResult(
        CSpatialAudioDtsxHdmi *this,
        const unsigned __int16 *a2)
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
  if ( !byte_1801CE2BA )
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
        (void *)0x337,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)LicenseForSpatialSubtypeAndEndpoint);
  }
  return v2;
}
