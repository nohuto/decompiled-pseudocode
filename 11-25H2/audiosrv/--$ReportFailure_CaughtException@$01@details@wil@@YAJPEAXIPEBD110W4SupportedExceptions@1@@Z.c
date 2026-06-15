/*
 * XREFs of ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800B6374
 * Callers:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BF348 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800B6418 (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     _alloca_probe @ 0x18015E810 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<2>(int a1, int a2, int a3)
{
  char v7; // [rsp+60h] [rbp-1038h] BYREF
  _BYTE v8[4096]; // [rsp+70h] [rbp-1028h] BYREF

  memset_0(v8, 0, sizeof(v8));
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<2>((unsigned int)&v7, a1, a2, a3);
}
