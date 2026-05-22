/*
 * XREFs of ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z @ 0x1800ECA30
 * Callers:
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800ECDE0 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 * Callees:
 *     ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x180099870 (-IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV-$vector@VHidChannelValueInfo@@V-$alloc.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C6CF4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E6EF8 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E83CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E9EDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EDF10 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampMultiUpdateReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        struct HidLampMultiUpdateReportParser *a3)
{
  __int64 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // r10
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  char *v23; // rdx
  __int64 v24; // rcx
  char *v25; // rdx
  __int64 v26; // rdx
  char v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int16 v31; // bx
  __int16 v32; // di
  __int16 v33; // si
  __int64 v34; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int16 v51; // bx
  __int16 v52; // di
  __int16 v53; // si
  __int64 v54; // rcx
  char IsChannelsValid; // [rsp+40h] [rbp-29h]
  char v56; // [rsp+41h] [rbp-28h]
  char v57; // [rsp+42h] [rbp-27h]
  char v58; // [rsp+43h] [rbp-26h]
  __int64 v59; // [rsp+48h] [rbp-21h]
  __int64 v60; // [rsp+50h] [rbp-19h]
  __int64 v61; // [rsp+58h] [rbp-11h]
  _QWORD v62[4]; // [rsp+60h] [rbp-9h] BYREF

  v6 = (__int64 *)((char *)a3 + 200);
  v59 = *((_QWORD *)a3 + 26) - *((_QWORD *)a3 + 25);
  v7 = *((_QWORD *)a3 + 30) - *((_QWORD *)a3 + 29);
  v8 = *((_QWORD *)a3 + 34) - *((_QWORD *)a3 + 33);
  v9 = (__int64 *)((char *)a3 + 296);
  v61 = *((_QWORD *)a3 + 38);
  v60 = *((_QWORD *)a3 + 37);
  IsChannelsValid = HidLampMultiUpdateReportParser::IsChannelsValid(
                      (__int64 *)a3 + 21,
                      (__int64)a2,
                      0x7FFFFFFFLL,
                      (_DWORD *)a3 + 48);
  v56 = HidLampMultiUpdateReportParser::IsChannelsValid(v6, v10, 255LL, (_DWORD *)a3 + 56);
  v57 = HidLampMultiUpdateReportParser::IsChannelsValid((__int64 *)a3 + 29, v11, v12, (_DWORD *)a3 + 64);
  v58 = HidLampMultiUpdateReportParser::IsChannelsValid((__int64 *)a3 + 33, v13, v14, (_DWORD *)a3 + 72);
  LOBYTE(v17) = HidLampMultiUpdateReportParser::IsChannelsValid(v9, v15, v16, (_DWORD *)a3 + 80);
  v18 = 0;
  v19 = v59;
  if ( !v59 && !v7 && !v8 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
      1u,
      0LL,
      v17);
    LampArrayTelemetry::GetInstance(v21, v20, v22);
    v23 = "LampMultiUpdateReport: must have at least one active color channel besides gain";
LABEL_35:
    v51 = *((_WORD *)a2 + 2);
    v52 = *((_WORD *)a2 + 1);
    v53 = *(_WORD *)a2;
    std::string::string(v62, v23);
    LampArrayTelemetry::LogLampArrayHidReportFailure(v54, (__int64)v62, 2147942487LL, (__int64)a1, v53, v52, v51);
    std::string::~string((__int64)v62);
    return 0;
  }
  if ( !IsChannelsValid
    || (v24 = *((unsigned int *)a3 + 14),
        v25 = (char *)a3 + 168,
        0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a3 + 22) - *((_QWORD *)a3 + 21)) >> 3) != v24) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
      1u,
      v59,
      v17);
    LampArrayTelemetry::GetInstance(v49, v48, v50);
    v23 = "LampMultiUpdateReport: number of LampId fields must match lamp count";
    goto LABEL_35;
  }
  if ( v59 )
  {
    if ( !v56 || 0x8E38E38E38E38E39uLL * ((v6[1] - *v6) >> 3) != v24 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
        1u,
        v59,
        v17);
      LampArrayTelemetry::GetInstance(v37, v36, v38);
      v23 = "LampMultiUpdateReport: Red channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
      goto LABEL_35;
    }
    *((_BYTE *)a3 + 324) = 1;
  }
  if ( v7 )
  {
    if ( !v57
      || (v25 = (char *)a3 + 232,
          0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a3 + 30) - *((_QWORD *)a3 + 29)) >> 3) != v24) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
        1u,
        v59,
        v17);
      LampArrayTelemetry::GetInstance(v40, v39, v41);
      v23 = "LampMultiUpdateReport: Green channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
      goto LABEL_35;
    }
    *((_BYTE *)a3 + 325) = 1;
  }
  if ( v8 )
  {
    if ( !v58
      || (v25 = (char *)a3 + 264,
          0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a3 + 34) - *((_QWORD *)a3 + 33)) >> 3) != v24) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
        1u,
        v59,
        v17);
      LampArrayTelemetry::GetInstance(v43, v42, v44);
      v23 = "LampMultiUpdateReport: Blue channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
      goto LABEL_35;
    }
    *((_BYTE *)a3 + 326) = 1;
  }
  if ( v61 != v60 )
  {
    if ( !(_BYTE)v17 || 0x8E38E38E38E38E39uLL * ((v9[1] - *v9) >> 3) != v24 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
        1u,
        v59,
        v17);
      LampArrayTelemetry::GetInstance(v46, v45, v47);
      v23 = "LampMultiUpdateReport: Gain channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
      goto LABEL_35;
    }
    *((_BYTE *)a3 + 327) = 1;
  }
  if ( *((_BYTE *)a3 + 17) != 2
    || !HidChannelValueInfo::IsValid(
          (struct HidLampMultiUpdateReportParser *)((char *)a3 + 24),
          (__int64)v25,
          0x7FFFFFFFLL)
    || (v27 = 1,
        !HidChannelValueInfo::IsValid((struct HidLampMultiUpdateReportParser *)((char *)a3 + 96), v26, 0xFFFFFFFFLL)) )
  {
    v27 = v18;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
    1u,
    v19,
    v17);
  if ( !v27 )
  {
    LampArrayTelemetry::GetInstance(v29, v28, v30);
    v31 = *((_WORD *)a2 + 2);
    v32 = *((_WORD *)a2 + 1);
    v33 = *(_WORD *)a2;
    std::string::string(v62, "LampMultiUpdateReport: Lamp count and LampUpdateFlags are required values");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v34, (__int64)v62, 2147942487LL, (__int64)a1, v33, v32, v31);
    std::string::~string((__int64)v62);
  }
  return v27;
}
