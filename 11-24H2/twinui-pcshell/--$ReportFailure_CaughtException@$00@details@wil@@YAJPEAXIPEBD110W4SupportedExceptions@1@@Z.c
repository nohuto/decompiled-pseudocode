/*
 * XREFs of ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180226F8C
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?winrt_to_hresult@wil@@YAHPEAX@Z @ 0x1802DFF70 (-winrt_to_hresult@wil@@YAHPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x180227030 (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _alloca_probe @ 0x1806CA270 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<1>(int a1, int a2, int a3)
{
  char v7; // [rsp+60h] [rbp-1038h] BYREF
  _BYTE v8[4096]; // [rsp+70h] [rbp-1028h] BYREF

  memset_0(v8, 0, sizeof(v8));
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<1>((unsigned int)&v7, a1, a2, a3);
}
