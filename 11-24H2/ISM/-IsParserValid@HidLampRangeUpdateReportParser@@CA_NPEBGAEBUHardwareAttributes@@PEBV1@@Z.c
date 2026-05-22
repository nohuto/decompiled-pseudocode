/*
 * XREFs of ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EE458
 * Callers:
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EE69C (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C4A38 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C4A5C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800C4A5C.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C4EB4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E817C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8368 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E983C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_J@Z @ 0x1800EC220 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@_J@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EEDF0 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampRangeUpdateReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampRangeUpdateReportParser *a3)
{
  char v6; // r14
  __int16 v7; // bx
  __int16 v8; // di
  __int16 v9; // si
  __int64 v10; // rcx
  signed __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int16 v23; // bx
  __int16 v24; // di
  __int16 v25; // si
  __int64 v26; // rcx
  _QWORD v27[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v28[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[32]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v31[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v33[32]; // [rsp+100h] [rbp+0h] BYREF

  v6 = 0;
  if ( !*(_WORD *)((char *)a3 + 529) && !*((_BYTE *)a3 + 531) )
  {
    LampArrayTelemetry::GetInstance((__int64)a1, (__int64)a2, (__int64)a3);
    v7 = *((_WORD *)a2 + 2);
    v8 = *((_WORD *)a2 + 1);
    v9 = *(_WORD *)a2;
    std::string::string(
      v27,
      "LampRangeUpdateReport: must have at least one active color channel (besides gain) with logical max of 255 or less");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v10, (__int64)v27, 2147942487LL, (__int64)a1, v9, v8, v7);
LABEL_4:
    std::string::~string((__int64)v27);
    return 0;
  }
  v12 = *((_QWORD *)a3 + 25);
  if ( *((_QWORD *)a3 + 16) != v12 )
  {
    v13 = std::to_string((__int64)v33, v12);
    v14 = std::to_string((__int64)v32, *((_QWORD *)a3 + 16));
    v15 = std::string::string(v31, "LampRangeUpdateReport: logical max for LampIdStart and LampIdEnd must match.");
    v16 = std::operator+<char>((__int64)v30, v15, " LampIdStart:");
    v17 = (_QWORD *)std::operator+<char>((__int64)v29, v16, v14);
    v18 = std::operator+<char>((__int64)v28, v17, ", LampIdEnd:");
    std::operator+<char>((__int64)v27, v18, v13);
    std::string::~string((__int64)v28);
    std::string::~string((__int64)v29);
    std::string::~string((__int64)v30);
    std::string::~string((__int64)v31);
    std::string::~string((__int64)v32);
    std::string::~string((__int64)v33);
    LampArrayTelemetry::GetInstance(v20, v19, v21);
    LampArrayTelemetry::LogLampArrayHidReportFailure(
      v22,
      (__int64)v27,
      2147942487LL,
      (__int64)a1,
      *(_WORD *)a2,
      *((_WORD *)a2 + 1),
      *((_WORD *)a2 + 2));
    goto LABEL_4;
  }
  if ( *((_BYTE *)a3 + 17) == 2
    && HidChannelValueInfo::IsValid((const struct HidLampRangeUpdateReportParser *)((char *)a3 + 96), v12, 0x7FFFFFFFLL)
    && HidChannelValueInfo::IsValid((const struct HidLampRangeUpdateReportParser *)((char *)a3 + 168), v12, (__int64)a3)
    && HidChannelValueInfo::IsValid((const struct HidLampRangeUpdateReportParser *)((char *)a3 + 24), v12, 0xFFFFFFFFLL) )
  {
    return 1;
  }
  LampArrayTelemetry::GetInstance((__int64)a1, v12, (__int64)a3);
  v23 = *((_WORD *)a2 + 2);
  v24 = *((_WORD *)a2 + 1);
  v25 = *(_WORD *)a2;
  std::string::string(v27, "LampRangeUpdateReport: LampIdStart, LampIdEnd and LampUpdateFlags are required values.");
  LampArrayTelemetry::LogLampArrayHidReportFailure(v26, (__int64)v27, 2147942487LL, (__int64)a1, v25, v24, v23);
  std::string::~string((__int64)v27);
  return v6;
}
