/*
 * XREFs of ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EC0C8
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EC27C (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C6CF4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E6EF8 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E83CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E9EDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EDF10 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampAttributesResponseReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampAttributesResponseReportParser *a3)
{
  const struct HidLampAttributesResponseReportParser *v3; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int16 v9; // bx
  __int16 v10; // di
  __int16 v11; // si
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  char v20; // bp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int16 v24; // bx
  __int16 v25; // di
  __int16 v26; // si
  __int64 v27; // rcx
  _QWORD v28[4]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a3;
  if ( *((_WORD *)a3 + 444) || *((_BYTE *)a3 + 890) )
  {
    if ( *((_BYTE *)a3 + 17) != 2
      || !HidChannelValueInfo::IsValid(
            (const struct HidLampAttributesResponseReportParser *)((char *)a3 + 24),
            (__int64)a2,
            0x7FFFFFFFLL)
      || !HidChannelValueInfo::IsValid(
            (const struct HidLampAttributesResponseReportParser *)((char *)v3 + 96),
            v14,
            (__int64)a3)
      || !HidChannelValueInfo::IsValid(
            (const struct HidLampAttributesResponseReportParser *)((char *)v3 + 168),
            v15,
            (__int64)a3)
      || !HidChannelValueInfo::IsValid(
            (const struct HidLampAttributesResponseReportParser *)((char *)v3 + 240),
            v16,
            (__int64)a3)
      || !HidChannelValueInfo::IsValid(
            (const struct HidLampAttributesResponseReportParser *)((char *)v3 + 312),
            v17,
            (__int64)a3)
      || !HidChannelValueInfo::IsValid(
            (const struct HidLampAttributesResponseReportParser *)((char *)v3 + 384),
            v18,
            (__int64)a3)
      || (v20 = 1,
          !HidChannelValueInfo::IsValid(
             (const struct HidLampAttributesResponseReportParser *)((char *)v3 + 456),
             v19,
             (__int64)a3)) )
    {
      v20 = 0;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
      1u,
      (__int64)a3,
      (__int64)v3);
    if ( !v20 )
    {
      LampArrayTelemetry::GetInstance(v22, v21, v23);
      v24 = *((_WORD *)a2 + 2);
      v25 = *((_WORD *)a2 + 1);
      v26 = *(_WORD *)a2;
      std::string::string(
        v28,
        "LampAttributesResponseReport: LampId, Position X/Y/Z, UpdateLatency, purposes, and IsProgrammable are required");
      LampArrayTelemetry::LogLampArrayHidReportFailure(v27, (__int64)v28, 2147942487LL, (__int64)a1, v26, v25, v24);
      std::string::~string((__int64)v28);
    }
    return v20;
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
      1u,
      (__int64)a3,
      (__int64)a3);
    LampArrayTelemetry::GetInstance(v7, v6, v8);
    v9 = *((_WORD *)a2 + 2);
    v10 = *((_WORD *)a2 + 1);
    v11 = *(_WORD *)a2;
    std::string::string(
      v28,
      "LampAttributesResponseReport: must have at least one active color channel (besides gain) with logical max of 255 or less");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v12, (__int64)v28, 2147942487LL, (__int64)a1, v11, v10, v9);
    std::string::~string((__int64)v28);
    return 0;
  }
}
