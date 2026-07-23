/*
 * XREFs of RtlpAutoCompleteLanguageFallback @ 0x18013D5EC
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800CAFA0 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800CB340 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpGetCompleteLanguageFallback @ 0x18013DDE4 (RtlpGetCompleteLanguageFallback.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpAutoCompleteLanguageFallback(__int64 a1, wchar_t *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 *v6; // rdx
  __int64 v7; // rax
  const wchar_t *i; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int16 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+50h] [rbp-28h]

  v13 = 0LL;
  v14 = 0;
  v11 = 0;
  v12 = 0LL;
  if ( !a1 || !a2 || !*a2 )
    return 3221225485LL;
  result = RtlpMuiRegGetInstalledLanguageIndexByName(a1, a2, 1, &v11);
  if ( (int)result < 0 )
    return result;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 )
    return 3221226021LL;
  if ( *(unsigned __int16 *)(v5 + 6) <= (unsigned int)v11 )
    return 3221226021LL;
  if ( !*(_QWORD *)(v5 + 16) )
    return 3221226021LL;
  v6 = (__int128 *)(*(_QWORD *)(v5 + 16) + 28LL * (unsigned int)v11);
  if ( !v6 )
    return 3221226021LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  for ( i = &a2[v7 + 1]; i && *i; i += v9 + 1 )
  {
    result = RtlpMuiRegGetFallbackLanguageInfoByName(a1, (__int64)v6, i, 1, (__int64)&v12);
    if ( (int)result < 0 )
      return result;
    v6 = &v12;
    v9 = -1LL;
    do
      ++v9;
    while ( i[v9] );
  }
  if ( (*(_BYTE *)v6 & 6) == 0 )
    return 0LL;
  v10 = i - a2;
  if ( (unsigned int)v10 >= 0x105 )
    return 3221225507LL;
  result = RtlpGetCompleteLanguageFallback(a1, (_DWORD)v6, 0, (_DWORD)i, 261 - (int)v10);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
