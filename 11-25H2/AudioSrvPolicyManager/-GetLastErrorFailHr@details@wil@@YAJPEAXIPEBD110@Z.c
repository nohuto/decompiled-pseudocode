/*
 * XREFs of ?GetLastErrorFailHr@details@wil@@YAJPEAXIPEBD110@Z @ 0x18001F170
 * Callers:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800237CC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180022040 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

// Hidden C++ exception states: #wind=1
signed int __fastcall wil::details::GetLastErrorFailHr(
        wil::details *this,
        void *a2,
        int a3,
        const char *a4,
        const char *a5,
        const char *a6)
{
  int v7; // edi
  int v8; // esi
  signed int result; // eax
  wil::details *v10; // [rsp+30h] [rbp-18h]

  v7 = (int)a2;
  v8 = (int)this;
  result = GetLastError();
  if ( !result )
  {
    LODWORD(v10) = -2147024228;
    wil::details::ReportFailure_Hr<2>(v8, v7, a3, 0, 0LL, (__int64)a6, v10);
    result = 668;
  }
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
