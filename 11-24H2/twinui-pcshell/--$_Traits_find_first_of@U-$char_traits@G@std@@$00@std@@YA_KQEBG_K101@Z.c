/*
 * XREFs of ??$_Traits_find_first_of@U?$char_traits@G@std@@$00@std@@YA_KQEBG_K101@Z @ 0x18061D70C
 * Callers:
 *     ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x1806373F0 (-find_first_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 * Callees:
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1801E0C40 (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall std::_Traits_find_first_of<std::char_traits<unsigned short>,1>(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  wchar_t *v7; // r11
  wchar_t *v8; // rdx
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _WORD *v12; // rcx
  _WORD *v14; // r8
  __int64 v15; // r8
  unsigned __int64 v16; // r10
  _BYTE v18[256]; // [rsp+20h] [rbp-118h] BYREF

  if ( !a5 || !a2 )
    return -1LL;
  memset_0(v18, 0, sizeof(v18));
  v7 = L"@!";
  v8 = &asc_1807BF2A4[a5];
  v9 = L"@!";
  if ( L"@!" == v8 )
  {
LABEL_6:
    v11 = a1 + 2 * a2;
    v12 = (_WORD *)a1;
    if ( a1 < v11 )
    {
      while ( *v12 >= 0x100u || !v18[(unsigned __int16)*v12] )
      {
        if ( (unsigned __int64)++v12 >= v11 )
          return -1LL;
      }
      return (__int64)((__int64)v12 - a1) >> 1;
    }
    return -1LL;
  }
  while ( *v9 < 0x100u )
  {
    v10 = *(unsigned __int8 *)v9++;
    v18[v10] = 1;
    if ( v9 == v8 )
      goto LABEL_6;
  }
  v14 = (_WORD *)a1;
  if ( a1 >= a1 + 2 * a2 )
    return -1LL;
  while ( !std::_WChar_traits<unsigned short>::find(v7, a5, v14) )
  {
    v14 = (_WORD *)(v15 + 2);
    if ( (unsigned __int64)v14 >= v16 )
      return -1LL;
  }
  return (__int64)(v15 - a1) >> 1;
}
