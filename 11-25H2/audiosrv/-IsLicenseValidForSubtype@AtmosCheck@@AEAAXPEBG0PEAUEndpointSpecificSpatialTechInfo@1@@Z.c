/*
 * XREFs of ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180009230
 * Callers:
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x180008D38 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 * Callees:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x180009304 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x1800099DC (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::IsLicenseValidForSubtype(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct AtmosCheck::EndpointSpecificSpatialTechInfo *a4)
{
  bool v5; // di
  int LicenseStatusForEndpointId; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  bool v12; // zf
  int v13; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+24h] [rbp-44h]
  __int64 v15; // [rsp+28h] [rbp-40h]

  v14 = 0;
  v15 = 0LL;
  v5 = 1;
  v13 = 1;
  LicenseStatusForEndpointId = AtmosCheck::GetLicenseStatusForEndpointId(
                                 this,
                                 a2,
                                 a3,
                                 (struct __MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001 *)&v13);
  *((_DWORD *)a4 + 2) = LicenseStatusForEndpointId;
  v9 = LicenseStatusForEndpointId;
  if ( LicenseStatusForEndpointId >= 0 || *((_BYTE *)this + 99) )
  {
    *((_BYTE *)a4 + 1) = 1;
    if ( LicenseStatusForEndpointId >= 0 )
    {
      v11 = -(v14 != 0);
      *((_QWORD *)a4 + 2) = v15;
      v12 = v13 == 0;
      *((_DWORD *)a4 + 1) = ~v11 & 0x80070490;
      v5 = !v12;
      goto LABEL_4;
    }
  }
  else
  {
    v10 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a2);
    if ( v10 != -1 && !*((_BYTE *)this + 48 * v10 + 272) )
      *((_BYTE *)a4 + 1) = 1;
  }
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 1) = v9;
LABEL_4:
  *(_BYTE *)a4 = v5;
}
