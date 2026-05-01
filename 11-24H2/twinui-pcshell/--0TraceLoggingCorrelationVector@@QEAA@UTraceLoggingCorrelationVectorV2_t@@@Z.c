/*
 * XREFs of ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1802BE51C
 * Callers:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18017872C (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ??0CorrelationVector@@QEAA@XZ @ 0x1802BE4B4 (--0CorrelationVector@@QEAA@XZ.c)
 *     ??$make_unique@VTraceLoggingCorrelationVector@@AEBUTraceLoggingCorrelationVectorV2_t@@$0A@@std@@YA?AV?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@0@AEBUTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1802BE4E8 (--$make_unique@VTraceLoggingCorrelationVector@@AEBUTraceLoggingCorrelationVectorV2_t@@$0A@@std@@.c)
 *     ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1805F8428 (-Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 * Callees:
 *     ??$Base64Encode@$0IB@@TLV@@YAXPEBEIAEAY0IB@D@Z @ 0x180221704 (--$Base64Encode@$0IB@@TLV@@YAXPEBEIAEAY0IB@D@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(__int64 a1)
{
  __int64 result; // rax
  UUID Uuid; // [rsp+20h] [rbp-28h] BYREF

  *(_BYTE *)(a1 + 130) = -127;
  Uuid = 0LL;
  UuidCreate(&Uuid);
  *(_BYTE *)(a1 + 129) = 23;
  *(_QWORD *)(a1 + 136) = 0x1900000000LL;
  memset_0((void *)a1, 0, 0x81uLL);
  TLV::Base64Encode<129>((unsigned __int8 *)&Uuid, 0x10u, a1);
  result = a1;
  *(_WORD *)(a1 + 22) = 46;
  return result;
}
