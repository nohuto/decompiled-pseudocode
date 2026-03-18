/*
 * XREFs of ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18026323C
 * Callers:
 *     ??0CKernelTransport@@AEAA@XZ @ 0x180263108 (--0CKernelTransport@@AEAA@XZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180241310 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<3>(
    this,
    (void *)0x1C47,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
    a4,
    v4,
    retaddr);
}
