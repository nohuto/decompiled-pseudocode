/*
 * XREFs of ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800EAC2C
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E9D1C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C4EB4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E817C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8368 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E983C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800EC628 (-CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV-$unique_ptr@$$BY0A.c)
 *     ?ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800EC7E0 (-ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributes.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampArrayAttributesReport(
        HidLampArrayDevice *this,
        struct LampArrayAttributesDeviceReport *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int16 v10; // si
  __int16 v11; // r14
  __int16 v12; // r15
  signed int LastError; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  signed int v16; // eax
  const struct std::nothrow_t *v17; // rdx
  ULONG ReportBufferLength; // [rsp+40h] [rbp-40h] BYREF
  PVOID ReportBuffer; // [rsp+48h] [rbp-38h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v4 = HidLampArrayAttributesReportParser::CreateAndInitializeInputBuffer(
         *((_QWORD *)this + 73),
         &ReportBuffer,
         &ReportBufferLength);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 282LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_13;
  }
  if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
  {
    v21 = 0LL;
    v22 = 0LL;
    v4 = HidLampArrayAttributesReportParser::ParseInputBufferForReport(
           *((HidLampArrayAttributesReportParser **)this + 73),
           (const unsigned __int8 *)ReportBuffer,
           ReportBufferLength,
           (struct LampArrayAttributesDeviceReport *)&v21);
    v5 = v4;
    if ( v4 >= 0 )
    {
      *(_OWORD *)a2 = v21;
      *((_QWORD *)a2 + 2) = v22;
      v5 = 0;
      goto LABEL_13;
    }
    v6 = 298LL;
    goto LABEL_11;
  }
  LampArrayTelemetry::GetInstance(v8, v7, v9);
  v10 = *((_WORD *)this + 271);
  v11 = *((_WORD *)this + 270);
  v12 = *((_WORD *)this + 269);
  LastError = GetLastError();
  v14 = LastError;
  if ( LastError > 0 )
    v14 = (unsigned __int16)LastError | 0x80070000;
  std::string::string(&v21, "Obtaining LampArrayAttributesReport failed");
  LampArrayTelemetry::LogLampArrayHidReportFailure(v15, (__int64)&v21, v14, (__int64)this + 24, v12, v11, v10);
  std::string::~string((__int64)&v21);
  v16 = GetLastError();
  if ( v16 > 0 )
    v16 = (unsigned __int16)v16 | 0x80070000;
  v5 = v16;
LABEL_13:
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&ReportBuffer, v17);
  return v5;
}
