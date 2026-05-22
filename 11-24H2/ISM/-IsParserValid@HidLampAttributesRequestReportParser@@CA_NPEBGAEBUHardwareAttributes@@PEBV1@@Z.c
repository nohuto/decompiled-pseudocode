/*
 * XREFs of ?IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800ECCC8
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800ECD8C (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEB.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C4EB4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E817C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8368 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E983C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EEDF0 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampAttributesRequestReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampAttributesRequestReportParser *a3)
{
  char v5; // bp
  __int16 v6; // bx
  __int16 v7; // di
  __int16 v8; // si
  __int64 v9; // rcx
  _QWORD v11[4]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0;
  if ( *((_BYTE *)a3 + 17) == 2
    && HidChannelValueInfo::IsValid(
         (const struct HidLampAttributesRequestReportParser *)((char *)a3 + 24),
         (__int64)a2,
         0x7FFFFFFFLL) )
  {
    return 1;
  }
  LampArrayTelemetry::GetInstance((__int64)a1, (__int64)a2, (__int64)a3);
  v6 = *((_WORD *)a2 + 2);
  v7 = *((_WORD *)a2 + 1);
  v8 = *(_WORD *)a2;
  std::string::string(v11, "LampAttributesRequestReport: LampId is required");
  LampArrayTelemetry::LogLampArrayHidReportFailure(v9, (__int64)v11, 2147942487LL, (__int64)a1, v8, v7, v6);
  std::string::~string((__int64)v11);
  return v5;
}
