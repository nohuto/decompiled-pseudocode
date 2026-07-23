/*
 * XREFs of _RtlpMuiRegAddBaseLanguage @ 0x180148248
 * Callers:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180148B20 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlpMuiRegGetLanguageSpec @ 0x1800992DC (RtlpMuiRegGetLanguageSpec.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     RtlpLangNameInMultiSzString @ 0x1800CB1D0 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180147C44 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180148588 (_RtlpMuiRegInitAnyLanguage.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegAddBaseLanguage(__int64 *a1, _WORD *a2, unsigned int a3, __int64 a4, wchar_t *String2)
{
  char v6; // r15
  wchar_t *v7; // rbx
  char v8; // di
  unsigned __int64 v9; // r12
  __int16 v10; // ax
  __int64 v11; // r9
  int LanguageSpec; // edi
  __int16 v13; // ax
  int v14; // esi
  __int64 *v15; // r13
  char v16; // di
  int v17; // r12d
  __int16 v18; // ax
  __int16 v19; // dx
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int16 v22; // dx
  __int64 v23; // r8
  _WORD *v24; // rcx
  char v26; // [rsp+30h] [rbp-51h] BYREF
  char v27[3]; // [rsp+31h] [rbp-50h] BYREF
  __int16 v28[2]; // [rsp+34h] [rbp-4Dh] BYREF
  __int16 v29; // [rsp+38h] [rbp-49h]
  __int16 v30; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 *v31; // [rsp+40h] [rbp-41h]
  int inited; // [rsp+48h] [rbp-39h]
  signed int v33; // [rsp+4Ch] [rbp-35h]
  _WORD *v34; // [rsp+50h] [rbp-31h]
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  __int128 v36; // [rsp+68h] [rbp-19h] BYREF
  __int64 v37; // [rsp+78h] [rbp-9h]
  int v38; // [rsp+80h] [rbp-1h]

  v31 = a1;
  v33 = a3;
  v34 = a2;
  v37 = 0LL;
  v38 = 0;
  v26 = 0;
  v27[0] = 0;
  v30 = 0;
  DestinationString = 0LL;
  v36 = 0LL;
  if ( a1 && a2 && a4 && a3 <= 3 )
  {
    v6 = 1;
    v7 = (wchar_t *)(a4 + *(unsigned int *)(a4 + 8));
    if ( !*(_DWORD *)(a4 + 12) || !v7 || (v8 = 1, !*v7) )
      v8 = 0;
    v9 = (unsigned __int64)*(unsigned int *)(a4 + 16) >> 1;
    v10 = *(_WORD *)(a4 + 2 * v9 + 20);
    *(_WORD *)(a4 + 2 * v9 + 20) = 0;
    v29 = v10;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a4 + 20));
    v28[0] = 0;
    if ( v8 )
    {
      v7[(unsigned __int64)*(unsigned int *)(a4 + 12) >> 1] = 0;
      inited = RtlpMuiRegInitAnyLanguage(v31, &v36);
      LanguageSpec = inited;
      if ( inited < 0 )
        return (unsigned int)LanguageSpec;
      v13 = v29;
      LOBYTE(v29) = 0;
      LOWORD(v36) = v36 & 0xFFE7 | *v34 & 0x18;
      *(_WORD *)(a4 + 2 * v9 + 20) = v13;
      v14 = 0;
      if ( String2 && *String2 && RtlpLangNameInMultiSzString(v7, String2) )
      {
        v15 = v31;
        if ( (int)RtlpMuiRegGetLanguageSpec((__int64)v31, String2, v27, 0LL, &v30) >= 0 )
        {
          LOBYTE(v29) = 1;
          v14 = 1;
          WORD6(v36) = v30;
          WORD4(v36) = WORD4(v36) & 0xFFFC | v27[0] & 3;
        }
      }
      else
      {
        v15 = v31;
      }
      if ( v7 )
      {
        v16 = v27[0];
        v17 = 2 * v14;
        v31 = (__int64 *)((char *)&v36 + 2 * (unsigned int)v14 + 12);
        do
        {
          if ( !*v7 || v17 >= 8 )
            break;
          if ( (int)RtlpMuiRegGetLanguageSpec((__int64)v15, v7, &v26, 0LL, v28) >= 0
            && (!(_BYTE)v29 || v16 != v26 || v30 != v28[0]) )
          {
            ++v14;
            v18 = (v26 & 3) << v17;
            v19 = WORD4(v36) & ~(3 << v17);
            v17 += 2;
            v20 = v31;
            WORD4(v36) = v18 | v19;
            *(_WORD *)v31 = v28[0];
            v31 = (__int64 *)((char *)v20 + 2);
          }
          v21 = -1LL;
          do
            ++v21;
          while ( v7[v21] );
          v7 += v21 + 1;
        }
        while ( v7 );
        LanguageSpec = inited;
      }
      if ( v14 < 0 )
      {
        v22 = WORD2(v36);
        if ( WORD2(v36) )
        {
LABEL_40:
          v23 = v33;
          v24 = v34;
          v34[4] = v34[4] & ~(3 << (2 * v33)) | ((v6 & 3) << (2 * v33));
          v24[v23 + 6] = v22;
          return (unsigned int)LanguageSpec;
        }
        v22 = WORD3(v36);
        if ( SWORD3(v36) > 0 )
        {
          v6 = 3;
          goto LABEL_40;
        }
        return (unsigned int)-1073741823;
      }
      LOWORD(v36) = v36 & 0xFFDF;
      LanguageSpec = RtlpMuiRegGetOrAddLangInfo(v15 + 3, (__int64)&v36, v28);
      if ( LanguageSpec < 0 )
        return (unsigned int)LanguageSpec;
      v6 = 2;
    }
    else
    {
      LanguageSpec = RtlpMuiRegGetLanguageSpec((__int64)v31, DestinationString.Buffer, &v26, v11, v28);
      if ( LanguageSpec < 0 )
        return (unsigned int)LanguageSpec;
      v6 = v26;
    }
    v22 = v28[0];
    goto LABEL_40;
  }
  return 3221225485LL;
}
