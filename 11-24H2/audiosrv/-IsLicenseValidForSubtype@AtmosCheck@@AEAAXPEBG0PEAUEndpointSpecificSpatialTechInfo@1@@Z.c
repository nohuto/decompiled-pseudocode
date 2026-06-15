/*
 * XREFs of ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x1800575F8
 * Callers:
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x180057108 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 * Callees:
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18005700C (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x1800576C8 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
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
  int v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+24h] [rbp-14h]
  __int64 v15; // [rsp+28h] [rbp-10h]

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
    if ( v10 != -1 && !*((_BYTE *)this + 72 * v10 + 272) )
      *((_BYTE *)a4 + 1) = 1;
  }
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 1) = v9;
LABEL_4:
  *(_BYTE *)a4 = v5;
}
