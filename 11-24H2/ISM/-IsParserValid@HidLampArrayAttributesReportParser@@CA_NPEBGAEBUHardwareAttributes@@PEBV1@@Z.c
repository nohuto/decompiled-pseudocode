/*
 * XREFs of ?IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EC6CC
 * Callers:
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EC92C (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUP.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C4EB4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E817C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8368 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E983C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EEDF0 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampArrayAttributesReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampArrayAttributesReportParser *a3)
{
  char v5; // bp
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  __int16 v11; // bx
  __int16 v12; // di
  __int16 v13; // si
  __int64 v14; // rcx
  _QWORD v16[4]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0;
  if ( *((_BYTE *)a3 + 17) == 2
    && HidChannelValueInfo::IsValid(
         (const struct HidLampArrayAttributesReportParser *)((char *)a3 + 24),
         (__int64)a2,
         0x7FFFFFFFLL)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v6 + 96), (__int64)a2, (__int64)a3)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v7 + 168), (__int64)a2, (__int64)a3)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v8 + 240), (__int64)a2, (__int64)a3)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v9 + 312), (__int64)a2, (__int64)a3)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v10 + 384), (__int64)a2, (__int64)a3) )
  {
    return 1;
  }
  LampArrayTelemetry::GetInstance((__int64)a1, (__int64)a2, (__int64)a3);
  v11 = *((_WORD *)a2 + 2);
  v12 = *((_WORD *)a2 + 1);
  v13 = *(_WORD *)a2;
  std::string::string(
    v16,
    "LampArrayAttributesReport: One or more of Lamp count, bounding box width/height/depth, LampArrayKind, or update inte"
    "rval are missing or invalid");
  LampArrayTelemetry::LogLampArrayHidReportFailure(v14, (__int64)v16, 2147942487LL, (__int64)a1, v13, v12, v11);
  std::string::~string((__int64)v16);
  return v5;
}
