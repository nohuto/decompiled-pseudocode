/*
 * XREFs of ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800ED308
 * Callers:
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800ED580 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C6878 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C689C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800C689C.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C6CF4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E6EF8 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E83CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E9EDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_J@Z @ 0x1800EB020 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@_J@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EDF10 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampRangeUpdateReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampRangeUpdateReportParser *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int16 v10; // bx
  __int16 v11; // di
  __int16 v12; // si
  __int64 v13; // rcx
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  char v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int16 v31; // bx
  __int16 v32; // di
  __int16 v33; // si
  __int64 v34; // rcx
  _QWORD v35[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v36[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v38[32]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v39[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v40[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v41[32]; // [rsp+100h] [rbp+0h] BYREF

  if ( !*(_WORD *)((char *)a3 + 529) && !*((_BYTE *)a3 + 531) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
      1u,
      (__int64)a3,
      a4);
    LampArrayTelemetry::GetInstance(v8, v7, v9);
    v10 = *((_WORD *)a2 + 2);
    v11 = *((_WORD *)a2 + 1);
    v12 = *(_WORD *)a2;
    std::string::string(
      v35,
      "LampRangeUpdateReport: must have at least one active color channel (besides gain) with logical max of 255 or less");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v13, (__int64)v35, 2147942487LL, (__int64)a1, v12, v11, v10);
LABEL_4:
    std::string::~string((__int64)v35);
    return 0;
  }
  if ( *((_QWORD *)a3 + 16) != *((_QWORD *)a3 + 25) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
      1u,
      (__int64)a3,
      a4);
    v15 = std::to_string((__int64)v41, *((_QWORD *)a3 + 25));
    v16 = std::to_string((__int64)v40, *((_QWORD *)a3 + 16));
    v17 = std::string::string(v39, "LampRangeUpdateReport: logical max for LampIdStart and LampIdEnd must match.");
    v18 = std::operator+<char>((__int64)v38, v17, " LampIdStart:");
    v19 = (_QWORD *)std::operator+<char>((__int64)v37, v18, v16);
    v20 = std::operator+<char>((__int64)v36, v19, ", LampIdEnd:");
    std::operator+<char>((__int64)v35, v20, v15);
    std::string::~string((__int64)v36);
    std::string::~string((__int64)v37);
    std::string::~string((__int64)v38);
    std::string::~string((__int64)v39);
    std::string::~string((__int64)v40);
    std::string::~string((__int64)v41);
    LampArrayTelemetry::GetInstance(v22, v21, v23);
    LampArrayTelemetry::LogLampArrayHidReportFailure(
      v24,
      (__int64)v35,
      2147942487LL,
      (__int64)a1,
      *(_WORD *)a2,
      *((_WORD *)a2 + 1),
      *((_WORD *)a2 + 2));
    goto LABEL_4;
  }
  if ( *((_BYTE *)a3 + 17) != 2
    || !HidChannelValueInfo::IsValid(
          (const struct HidLampRangeUpdateReportParser *)((char *)a3 + 96),
          (__int64)a2,
          0x7FFFFFFFLL)
    || !HidChannelValueInfo::IsValid(
          (const struct HidLampRangeUpdateReportParser *)((char *)a3 + 168),
          v25,
          (__int64)a3)
    || (v27 = 1,
        !HidChannelValueInfo::IsValid(
           (const struct HidLampRangeUpdateReportParser *)((char *)a3 + 24),
           v26,
           0xFFFFFFFFLL)) )
  {
    v27 = 0;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  if ( !v27 )
  {
    LampArrayTelemetry::GetInstance(v29, v28, v30);
    v31 = *((_WORD *)a2 + 2);
    v32 = *((_WORD *)a2 + 1);
    v33 = *(_WORD *)a2;
    std::string::string(v35, "LampRangeUpdateReport: LampIdStart, LampIdEnd and LampUpdateFlags are required values.");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v34, (__int64)v35, 2147942487LL, (__int64)a1, v33, v32, v31);
    std::string::~string((__int64)v35);
  }
  return v27;
}
