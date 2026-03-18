/*
 * XREFs of EtwpCoverageRecordAtHighIrql @ 0x14064F7A0
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1409047E8 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     RtlStringCchCopyA @ 0x140458158 (RtlStringCchCopyA.c)
 *     EtwpCoverageValidateCP @ 0x1404581BC (EtwpCoverageValidateCP.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpCoverageRecordAtHighIrql(char **a1)
{
  __int64 result; // rax
  char *v3; // xmm1_8
  unsigned __int8 CurrentIrql; // di
  int v5; // [rsp+20h] [rbp-78h] BYREF
  __int128 v6; // [rsp+28h] [rbp-70h] BYREF
  char *v7; // [rsp+38h] [rbp-60h]
  char pszDest[64]; // [rsp+40h] [rbp-58h] BYREF

  v5 = 0;
  result = EtwpCoverageValidateCP(a1, &v5);
  if ( (_DWORD)result )
  {
    v3 = a1[2];
    v6 = *(_OWORD *)a1;
    v7 = v3;
    RtlStringCchCopyA(pszDest, 0x40uLL, (NTSTRSAFE_PCSTR)v6);
    HIDWORD(v6) = 0;
    *(_QWORD *)&v6 = pszDest;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    EtwTelemetryCoverageReport(&v6);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    result = HIDWORD(v6);
    *((_DWORD *)a1 + 3) = HIDWORD(v6);
  }
  return result;
}
