/*
 * XREFs of ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14006DDAC
 * Callers:
 *     wil::init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c___ @ 0x1400551D4 (wil--init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c___.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z @ 0x14006D974 (--$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_GetLastError(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<0>(this, a2, a3, a4, v4, retaddr);
}
