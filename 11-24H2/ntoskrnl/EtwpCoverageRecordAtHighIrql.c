/*
 * XREFs of EtwpCoverageRecordAtHighIrql @ 0x14064DEA0
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1408DCC48 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     RtlStringCchCopyA @ 0x14044D468 (RtlStringCchCopyA.c)
 *     EtwpCoverageValidateCP @ 0x14044D4CC (EtwpCoverageValidateCP.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpCoverageRecordAtHighIrql(char **a1)
{
  __int64 result; // rax
  char *v3; // xmm1_8
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-78h] BYREF
  __int128 v7; // [rsp+28h] [rbp-70h] BYREF
  char *v8; // [rsp+38h] [rbp-60h]
  char pszDest[64]; // [rsp+40h] [rbp-58h] BYREF

  v6 = 0;
  result = EtwpCoverageValidateCP(a1, &v6);
  if ( (_DWORD)result )
  {
    v3 = a1[2];
    v7 = *(_OWORD *)a1;
    v8 = v3;
    RtlStringCchCopyA(pszDest, 0x40uLL, (NTSTRSAFE_PCSTR)v7);
    HIDWORD(v7) = 0;
    *(_QWORD *)&v7 = pszDest;
    CurrentIrql = KeGetCurrentIrql();
    v5 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    EtwTelemetryCoverageReport((__int64)&v7, v5);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    result = HIDWORD(v7);
    *((_DWORD *)a1 + 3) = HIDWORD(v7);
  }
  return result;
}
