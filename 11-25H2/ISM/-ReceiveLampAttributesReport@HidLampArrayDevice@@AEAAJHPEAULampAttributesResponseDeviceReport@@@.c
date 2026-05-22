/*
 * XREFs of ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800E9AF0
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E8A00 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x180085CF0 (-ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesRe.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008CDE4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18008E950 (-CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV-$unique_ptr@$$B.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C6878 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C6CF4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E6EF8 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E83CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E9EDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x1800EAFB8 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@H@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampAttributesReport(
        HidLampArrayDevice *this,
        unsigned int a2,
        struct LampAttributesResponseDeviceReport *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int16 v16; // bx
  __int16 v17; // si
  __int16 v18; // r14
  signed int LastError; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  const struct std::nothrow_t *v22; // rdx
  ULONG ReportBufferLength; // [rsp+40h] [rbp-49h] BYREF
  PVOID ReportBuffer; // [rsp+48h] [rbp-41h] BYREF
  __int128 v26; // [rsp+50h] [rbp-39h] BYREF
  __int128 v27; // [rsp+60h] [rbp-29h]
  int v28; // [rsp+70h] [rbp-19h]
  _BYTE v29[32]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v30[4]; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v6 = HidLampAttributesResponseReportParser::CreateAndInitializeInputBuffer(
         *((_QWORD *)this + 76),
         &ReportBuffer,
         &ReportBufferLength);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 358LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  v9 = (void *)std::_Atomic_storage<unsigned __int64,8>::load(*((_QWORD *)this + 2) + 40LL);
  if ( HidD_GetFeature(v9, ReportBuffer, ReportBufferLength) )
  {
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0;
    v6 = HidLampAttributesResponseReportParser::ParseInputBufferForReport(
           *((HidLampAttributesResponseReportParser **)this + 76),
           (const unsigned __int8 *)ReportBuffer,
           ReportBufferLength,
           (struct LampAttributesResponseDeviceReport *)&v26);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *(_OWORD *)a3 = v26;
      *((_OWORD *)a3 + 1) = v27;
      *((_DWORD *)a3 + 8) = v28;
      v7 = 0;
      goto LABEL_13;
    }
    v8 = 378LL;
    goto LABEL_11;
  }
  LOBYTE(v10) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl,
    v10);
  v11 = std::to_string(&v26, a2);
  v12 = std::string::string(v30, "Obtaining LampAttributesResponseReport request failed for lamp ID ");
  std::operator+<char>((__int64)v29, (__int64)v12, v11);
  std::string::~string((__int64)v30);
  std::string::~string((__int64)&v26);
  LampArrayTelemetry::GetInstance(v14, v13, v15);
  v16 = *((_WORD *)this + 271);
  v17 = *((_WORD *)this + 270);
  v18 = *((_WORD *)this + 269);
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  LampArrayTelemetry::LogLampArrayHidReportFailure(
    v20,
    (__int64)v29,
    (unsigned int)LastError,
    (__int64)this + 24,
    v18,
    v17,
    v16);
  std::string::~string((__int64)v29);
  v21 = GetLastError();
  if ( v21 > 0 )
    v21 = (unsigned __int16)v21 | 0x80070000;
  v7 = v21;
LABEL_13:
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&ReportBuffer, v22);
  return v7;
}
