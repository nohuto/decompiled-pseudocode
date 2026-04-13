/*
 * XREFs of ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x18007A918
 * Callers:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18007DA58 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 * Callees:
 *     memset_0 @ 0x180022921 (memset_0.c)
 *     ??$Base64Encode@$0IB@@TLV@@YAXPEBEIAEAY0IB@D@Z @ 0x180045A68 (--$Base64Encode@$0IB@@TLV@@YAXPEBEIAEAY0IB@D@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
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
