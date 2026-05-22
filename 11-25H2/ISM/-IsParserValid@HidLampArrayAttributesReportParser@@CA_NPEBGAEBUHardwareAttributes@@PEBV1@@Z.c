/*
 * XREFs of ?IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EB4CC
 * Callers:
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EB740 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUP.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C6CF4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E6EF8 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E83CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E9EDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EDF10 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

bool __fastcall HidLampArrayAttributesReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampArrayAttributesReportParser *a3)
{
  const struct HidLampArrayAttributesReportParser *v3; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  bool v11; // bp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int16 v15; // bx
  __int16 v16; // di
  __int16 v17; // si
  __int64 v18; // rcx
  _QWORD v20[4]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a3;
  v11 = *((_BYTE *)a3 + 17) == 2
     && HidChannelValueInfo::IsValid(
          (const struct HidLampArrayAttributesReportParser *)((char *)a3 + 24),
          (__int64)a2,
          0x7FFFFFFFLL)
     && HidChannelValueInfo::IsValid(
          (const struct HidLampArrayAttributesReportParser *)((char *)v3 + 96),
          v6,
          (__int64)a3)
     && HidChannelValueInfo::IsValid(
          (const struct HidLampArrayAttributesReportParser *)((char *)v3 + 168),
          v7,
          (__int64)a3)
     && HidChannelValueInfo::IsValid(
          (const struct HidLampArrayAttributesReportParser *)((char *)v3 + 240),
          v8,
          (__int64)a3)
     && HidChannelValueInfo::IsValid(
          (const struct HidLampArrayAttributesReportParser *)((char *)v3 + 312),
          v9,
          (__int64)a3)
     && HidChannelValueInfo::IsValid(
          (const struct HidLampArrayAttributesReportParser *)((char *)v3 + 384),
          v10,
          (__int64)a3);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)v3);
  if ( !v11 )
  {
    LampArrayTelemetry::GetInstance(v13, v12, v14);
    v15 = *((_WORD *)a2 + 2);
    v16 = *((_WORD *)a2 + 1);
    v17 = *(_WORD *)a2;
    std::string::string(
      v20,
      "LampArrayAttributesReport: One or more of Lamp count, bounding box width/height/depth, LampArrayKind, or update in"
      "terval are missing or invalid");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v18, (__int64)v20, 2147942487LL, (__int64)a1, v17, v16, v15);
    std::string::~string((__int64)v20);
  }
  return v11;
}
