/*
 * XREFs of RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800CB4CC
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800CA620 (RtlGetUILanguageInfo.c)
 * Callees:
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180016190 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180018A40 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByIndex @ 0x1801478AC (RtlpMuiRegGetFallbackLanguageInfoByIndex.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
        char a1,
        __int64 a2,
        _WORD *a3,
        unsigned int *a4,
        wchar_t *a5)
{
  int v7; // r12d
  unsigned int v9; // ebp
  unsigned int v10; // edi
  wchar_t *v11; // rbx
  int i; // esi
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h] BYREF
  __int64 v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+50h] [rbp-38h]
  char v20; // [rsp+A0h] [rbp+18h] BYREF

  v16 = 0;
  v7 = (int)a3;
  v18 = 0LL;
  v9 = 0;
  v19 = 0;
  v17 = 0LL;
  if ( !a3 || !a2 || !a4 )
    return 3221225485LL;
  v10 = *a4;
  v11 = a5;
  if ( (*a3 & 0x406) == 0 )
    goto LABEL_15;
  for ( i = 0; i < 4; ++i )
  {
    if ( (int)RtlpMuiRegGetFallbackLanguageInfoByIndex(
                a2,
                v7,
                (unsigned __int16)i,
                (_DWORD)a4,
                (__int64)&v20,
                (__int64)&v17) >= 0 )
    {
      v13 = (a1 & 4) != 0
          ? RtlpMuiRegTryToAppendLangId(a2, (__int64)&v17, &v16, v11, v10)
          : RtlpMuiRegTryToAppendLanguageName(a2, (__int64)&v17, &v16, v11, v10);
      v9 = v13;
      if ( v13 < 0 )
        return v9;
    }
  }
  v14 = v16;
  if ( !v16 )
  {
LABEL_15:
    if ( v11 && v10 )
      *v11 = 0;
    v14 = 1;
  }
  if ( v11 )
  {
    if ( v14 >= v10 )
    {
      if ( v10 )
        *v11 = 0;
      if ( v10 > 1 )
        v11[1] = 0;
    }
    else
    {
      v11[v14] = 0;
    }
  }
  *a4 = v14 + 1;
  return v9;
}
