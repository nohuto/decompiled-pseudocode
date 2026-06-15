/*
 * XREFs of ??$_Traits_find_last_of@U?$char_traits@G@std@@$00@std@@YA_KQEBG_K101@Z @ 0x140016910
 * Callers:
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z @ 0x140016560 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 */

__int64 __fastcall std::_Traits_find_last_of<std::char_traits<unsigned short>,1>(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  const wchar_t *i; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _WORD *k; // rdx
  __int64 v13; // rcx
  _WORD *v14; // rax
  __int64 v15; // rcx
  const wchar_t *j; // rdx
  _BYTE v17[256]; // [rsp+20h] [rbp-118h] BYREF

  v5 = -1LL;
  if ( !a5 || !a2 )
    return v5;
  memset_0(v17, 0, sizeof(v17));
  for ( i = L"/\\"; i != &asc_1400A5D50[a5]; ++i )
  {
    if ( *i >= 0x100u )
    {
      v13 = -1LL;
      if ( a2 )
        v13 = a2 - 1;
      v14 = &a1[v13];
LABEL_18:
      v15 = a5;
      for ( j = L"/\\"; *j != *v14; ++j )
      {
        if ( v15 == 1 )
        {
          if ( v14 == a1 )
            return v5;
          --v14;
          goto LABEL_18;
        }
        --v15;
      }
      return v14 - a1;
    }
    v9 = *(unsigned __int8 *)i;
    v17[v9] = 1;
  }
  v10 = -1LL;
  if ( a2 )
    v10 = a2 - 1;
  for ( k = &a1[v10]; *k >= 0x100u || !v17[(unsigned __int16)*k]; --k )
  {
    if ( k == a1 )
      return v5;
  }
  return k - a1;
}
