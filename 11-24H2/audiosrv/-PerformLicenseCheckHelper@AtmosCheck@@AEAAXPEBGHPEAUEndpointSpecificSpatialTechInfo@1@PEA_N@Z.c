/*
 * XREFs of ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x180057108
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180056E14 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015172C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x1800573B8 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEAUEndpointSpecificSpatialTechI.c)
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x1800575F8 (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006ADFC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EV_ea_18006ADFC.c)
 *     memcmp_0 @ 0x1800A7F1C (memcmp_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall AtmosCheck::PerformLicenseCheckHelper(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        int a3,
        struct AtmosCheck::EndpointSpecificSpatialTechInfo *a4,
        bool *a5)
{
  __int64 v6; // r14
  char *v8; // rbx
  int LicenseForSpatialSubtypeAndEndpoint; // eax
  int Buf1[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3;
  v8 = (char *)a4 + 32 * a3;
  *a5 = 0;
  *((_QWORD *)v8 + 2) = 0LL;
  *((_DWORD *)v8 + 6) = 0;
  *(_WORD *)v8 = 1;
  *((_DWORD *)v8 + 1) = -2147023728;
  *((_DWORD *)v8 + 2) = -1879048208;
  if ( *((_BYTE *)this + 864) )
  {
    if ( (unsigned int)CallbackContext > 5 )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        2415919088LL,
        &unk_1801B3067);
  }
  else
  {
    v11 = 0LL;
    v12 = 0;
    Buf1[2] = -1879048208;
    LOWORD(Buf1[0]) = 1;
    Buf1[1] = -2147023728;
    LicenseForSpatialSubtypeAndEndpoint = AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(
                                            this,
                                            a2,
                                            a3,
                                            (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)Buf1);
    if ( LicenseForSpatialSubtypeAndEndpoint < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F2,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)LicenseForSpatialSubtypeAndEndpoint,
        Buf1[0]);
    AtmosCheck::IsLicenseValidForSubtype(
      this,
      *((const unsigned __int16 **)this + 9 * v6 + 37),
      a2,
      (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)v8);
    if ( memcmp_0(Buf1, v8, 0x20uLL) )
      *a5 = 1;
  }
}
