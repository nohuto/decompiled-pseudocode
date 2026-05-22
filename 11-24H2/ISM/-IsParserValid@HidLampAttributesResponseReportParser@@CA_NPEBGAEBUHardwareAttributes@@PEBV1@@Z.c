/*
 * XREFs of ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800ED298
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800ED42C (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C4EB4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E817C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8368 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E983C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EEDF0 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampAttributesResponseReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampAttributesResponseReportParser *a3)
{
  char v5; // bp
  __int16 v6; // bx
  __int16 v7; // di
  __int16 v8; // si
  __int64 v9; // rcx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // r10
  __int16 v17; // bx
  __int16 v18; // di
  __int16 v19; // si
  __int64 v20; // rcx
  _QWORD v21[4]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0;
  if ( *((_WORD *)a3 + 444) || *((_BYTE *)a3 + 890) )
  {
    if ( *((_BYTE *)a3 + 17) == 2
      && HidChannelValueInfo::IsValid(
           (const struct HidLampAttributesResponseReportParser *)((char *)a3 + 24),
           (__int64)a2,
           0x7FFFFFFFLL)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v11 + 96), (__int64)a2, (__int64)a3)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v12 + 168), (__int64)a2, (__int64)a3)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v13 + 240), (__int64)a2, (__int64)a3)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v14 + 312), (__int64)a2, (__int64)a3)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v15 + 384), (__int64)a2, (__int64)a3)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v16 + 456), (__int64)a2, (__int64)a3) )
    {
      return 1;
    }
    LampArrayTelemetry::GetInstance((__int64)a1, (__int64)a2, (__int64)a3);
    v17 = *((_WORD *)a2 + 2);
    v18 = *((_WORD *)a2 + 1);
    v19 = *(_WORD *)a2;
    std::string::string(
      v21,
      "LampAttributesResponseReport: LampId, Position X/Y/Z, UpdateLatency, purposes, and IsProgrammable are required");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v20, (__int64)v21, 2147942487LL, (__int64)a1, v19, v18, v17);
    std::string::~string((__int64)v21);
    return v5;
  }
  else
  {
    LampArrayTelemetry::GetInstance((__int64)a1, (__int64)a2, (__int64)a3);
    v6 = *((_WORD *)a2 + 2);
    v7 = *((_WORD *)a2 + 1);
    v8 = *(_WORD *)a2;
    std::string::string(
      v21,
      "LampAttributesResponseReport: must have at least one active color channel (besides gain) with logical max of 255 or less");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v9, (__int64)v21, 2147942487LL, (__int64)a1, v8, v7, v6);
    std::string::~string((__int64)v21);
    return 0;
  }
}
