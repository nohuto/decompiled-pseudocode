/*
 * XREFs of ??$_Traits_find_last_of@U?$char_traits@G@std@@$00@std@@YA_KQEBG_K101@Z @ 0x1800D17A8
 * Callers:
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D5974 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1800D6570 (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 */

__int64 __fastcall std::_Traits_find_last_of<std::char_traits<unsigned short>,1>(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  const WCHAR *v8; // r10
  const WCHAR *i; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  _WORD *j; // r8
  _WORD *v13; // r8
  __int64 v15; // rcx
  _WORD *k; // rdx
  _BYTE v17[256]; // [rsp+20h] [rbp-118h] BYREF

  v5 = -1LL;
  if ( !a5 || !a2 )
    return v5;
  memset_0(v17, 0, sizeof(v17));
  v8 = L"\\";
  for ( i = L"\\"; i != &StringValue[a5]; ++i )
  {
    if ( *i >= 0x100u )
    {
      v11 = -1LL;
      if ( a2 )
        v11 = a2 - 1;
      for ( j = &a1[v11]; !std::_WChar_traits<unsigned short>::find(v8, a5, j); j = v13 - 1 )
      {
        if ( v13 == a1 )
          return v5;
      }
      return v13 - a1;
    }
    v10 = *(unsigned __int8 *)i;
    v17[v10] = 1;
  }
  v15 = -1LL;
  if ( a2 )
    v15 = a2 - 1;
  for ( k = &a1[v15]; *k >= 0x100u || !v17[(unsigned __int16)*k]; --k )
  {
    if ( k == a1 )
      return v5;
  }
  return k - a1;
}
