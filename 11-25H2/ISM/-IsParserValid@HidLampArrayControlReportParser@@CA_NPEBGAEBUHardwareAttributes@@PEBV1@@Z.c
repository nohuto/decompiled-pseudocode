/*
 * XREFs of ?IsParserValid@HidLampArrayControlReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EDA58
 * Callers:
 *     ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EDB30 (-TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUPars.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C6CF4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E6EF8 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E83CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E9EDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EDF10 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampArrayControlReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampArrayControlReportParser *a3,
        __int64 a4)
{
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int16 v10; // bx
  __int16 v11; // di
  __int16 v12; // si
  __int64 v13; // rcx
  _QWORD v15[4]; // [rsp+40h] [rbp-48h] BYREF

  if ( *((_BYTE *)a3 + 17) == 2
    && HidChannelValueInfo::IsValid((const struct HidLampArrayControlReportParser *)((char *)a3 + 24), (__int64)a2, 1LL) )
  {
    v6 = (char)a3;
  }
  else
  {
    v6 = 0;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  if ( !v6 )
  {
    LampArrayTelemetry::GetInstance(v8, v7, v9);
    v10 = *((_WORD *)a2 + 2);
    v11 = *((_WORD *)a2 + 1);
    v12 = *(_WORD *)a2;
    std::string::string(
      v15,
      "LampArrayControlReport: AutonomousMode is required, min value must be 0, and max value must be 1");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v13, (__int64)v15, 2147942487LL, (__int64)a1, v12, v11, v10);
    std::string::~string((__int64)v15);
  }
  return v6;
}
