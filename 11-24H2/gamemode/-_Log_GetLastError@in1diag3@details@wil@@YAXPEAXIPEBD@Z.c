/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000E6DC
 * Callers:
 *     ?HasHandheldScreenSize@@YA_NXZ @ 0x18000B7C4 (-HasHandheldScreenSize@@YA_NXZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x180008EF0 (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<2>((__int64)this, (int)a2, a3, (__int64)a4, v4, retaddr);
}
