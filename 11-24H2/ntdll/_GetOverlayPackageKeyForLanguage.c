/*
 * XREFs of _GetOverlayPackageKeyForLanguage @ 0x1800B283C
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x1800B25C0 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall GetOverlayPackageKeyForLanguage(__int64 a1, _QWORD *a2)
{
  size_t v4; // rax
  unsigned int v5; // edi
  char *v6; // rsi
  __int64 result; // rax
  size_t v8; // rax
  unsigned int v9; // edi
  char *v10; // rsi
  size_t v11; // rax
  unsigned int v12; // edi
  char *v13; // rsi
  size_t v14; // rax
  unsigned int v15; // edi
  char *v16; // rsi
  size_t v17; // rax
  unsigned int v18; // edi
  char *v19; // rsi
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  char *v21; // [rsp+48h] [rbp-B8h]
  _QWORD v22[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+70h] [rbp-90h]
  wchar_t String[256]; // [rsp+80h] [rbp-80h] BYREF
  char v25; // [rsp+280h] [rbp+180h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v20 = 0x2000000LL;
  v21 = &v25;
  v4 = wcslen(L"\\Registry\\Machine\\");
  if ( v4 > 0x7FFE )
    return 3221225507LL;
  v5 = (unsigned __int16)(2 * v4);
  if ( v5 + (unsigned __int16)v20 > WORD1(v20) )
    return 3221225507LL;
  v6 = &v21[2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)];
  memmove(v6, L"\\Registry\\Machine\\", (unsigned __int16)(2 * v4));
  LOWORD(v20) = v5 + v20;
  if ( (unsigned int)(unsigned __int16)v20 + 1 < WORD1(v20) )
    *(_WORD *)&v6[2 * ((unsigned __int64)v5 >> 1)] = 0;
  result = RtlGetPersistedStateLocation(
             (wchar_t *)L"LanguageOverlayKeyName",
             0LL,
             L"Software\\Microsoft\\LanguageOverlay",
             0,
             String,
             0x200u,
             0LL);
  if ( (int)result >= 0 )
  {
    v8 = wcslen(String);
    if ( v8 <= 0x7FFE )
    {
      v9 = (unsigned __int16)(2 * v8);
      if ( v9 + (unsigned __int16)v20 <= WORD1(v20) )
      {
        v10 = &v21[2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)];
        memmove(v10, String, (unsigned __int16)(2 * v8));
        LOWORD(v20) = v9 + v20;
        if ( (unsigned int)(unsigned __int16)v20 + 1 < WORD1(v20) )
          *(_WORD *)&v10[2 * ((unsigned __int64)v9 >> 1)] = 0;
        v11 = wcslen(L"\\");
        if ( v11 <= 0x7FFE )
        {
          v12 = (unsigned __int16)(2 * v11);
          if ( v12 + (unsigned __int16)v20 <= WORD1(v20) )
          {
            v13 = &v21[2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)];
            memmove(v13, L"\\", (unsigned __int16)(2 * v11));
            LOWORD(v20) = v12 + v20;
            if ( (unsigned int)(unsigned __int16)v20 + 1 < WORD1(v20) )
              *(_WORD *)&v13[2 * ((unsigned __int64)v12 >> 1)] = 0;
            v14 = wcslen(L"OverlayPackages");
            if ( v14 <= 0x7FFE )
            {
              v15 = (unsigned __int16)(2 * v14);
              if ( v15 + (unsigned __int16)v20 <= WORD1(v20) )
              {
                v16 = &v21[2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)];
                memmove(v16, L"OverlayPackages", (unsigned __int16)(2 * v14));
                LOWORD(v20) = v15 + v20;
                if ( (unsigned int)(unsigned __int16)v20 + 1 < WORD1(v20) )
                  *(_WORD *)&v16[2 * ((unsigned __int64)v15 >> 1)] = 0;
                v17 = wcslen(L"\\");
                if ( v17 <= 0x7FFE )
                {
                  v18 = (unsigned __int16)(2 * v17);
                  if ( v18 + (unsigned __int16)v20 <= WORD1(v20) )
                  {
                    v19 = &v21[2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)];
                    memmove(v19, L"\\", (unsigned __int16)(2 * v17));
                    LOWORD(v20) = v18 + v20;
                    if ( (unsigned int)(unsigned __int16)v20 + 1 < WORD1(v20) )
                      *(_WORD *)&v19[2 * ((unsigned __int64)v18 >> 1)] = 0;
                    result = RtlAppendUnicodeToString(&v20, a1);
                    if ( (int)result >= 0 )
                    {
                      v22[0] = 48LL;
                      v22[2] = &v20;
                      v22[3] = 64LL;
                      *a2 = 0LL;
                      v22[1] = 0LL;
                      v23 = 0LL;
                      return NtOpenKey(a2, 131097LL, v22);
                    }
                    return result;
                  }
                }
              }
            }
          }
        }
      }
    }
    return 3221225507LL;
  }
  return result;
}
