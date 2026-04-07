/*
 * XREFs of ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180096A78
 * Callers:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180096A24 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x18009D938 (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x18009DA44 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Win32@$02@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1800A2C58 (--$ReportFailure_Win32@$02@details@wil@@YAJPEAXIPEBD110K@Z.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800EBFD0 (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 * Callees:
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180087454 (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Base<3,0>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // [rsp+20h] [rbp-38h]

  wil::details::ReportFailure_NoReturn<3>(a1, a2, a3, a4, v8, a6, a7, a8);
}
