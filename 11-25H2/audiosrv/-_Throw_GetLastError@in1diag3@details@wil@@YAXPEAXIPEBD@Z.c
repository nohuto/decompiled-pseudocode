/*
 * XREFs of ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C1490
 * Callers:
 *     wil::init_once__lambda_6327e194dc1bc9a41e14a868d6b610b5___ @ 0x1800A3678 (wil--init_once__lambda_6327e194dc1bc9a41e14a868d6b610b5___.c)
 *     wil::init_once__lambda_f00ad828a2d515e855b0de47f172bf9e___ @ 0x1800C6614 (wil--init_once__lambda_f00ad828a2d515e855b0de47f172bf9e___.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800B652C (--$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z.c)
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
