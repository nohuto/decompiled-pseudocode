/*
 * XREFs of RtlpLangNameInMultiSzString_Size @ 0x1800196B0
 * Callers:
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180016190 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180018270 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180018A40 (RtlpMuiRegTryToAppendLangId.c)
 * Callees:
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     wcsnlen @ 0x180125C50 (wcsnlen.c)
 *     Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledDeviceUsageNoInline @ 0x18013D0AC (Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledDeviceUsageNo.c)
 */

__int64 __fastcall RtlpLangNameInMultiSzString_Size(wchar_t *String1, wchar_t *String2, unsigned int a3)
{
  unsigned __int8 v3; // r15
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  wchar_t *v7; // rbx
  __int64 v8; // rax
  wchar_t *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  wchar_t *v12; // rax
  size_t v13; // rax

  v3 = 0;
  v4 = a3;
  v5 = 0LL;
  v7 = String1;
  if ( String1 && String2 )
  {
    if ( (unsigned int)Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (_DWORD)v4 )
      {
        do
        {
          if ( !v7 )
            break;
          if ( !*v7 )
            break;
          if ( v4 - v5 > 0x7FFFFFFF )
            break;
          v11 = v4 - v5;
          v12 = v7;
          if ( v4 == v5 )
            break;
          while ( *v12 )
          {
            ++v12;
            if ( !--v11 )
              return v3;
          }
          if ( !wcsicmp(v7, String2) )
            return 1;
          v13 = wcsnlen(v7, v4 - v5);
          v5 += v13 + 1;
          v7 += v13 + 1;
        }
        while ( v5 < v4 );
      }
    }
    else
    {
      v8 = (unsigned int)v4;
      if ( v4 <= 0x7FFFFFFF )
      {
        v9 = v7;
        if ( (_DWORD)v4 )
        {
          do
          {
            if ( !*v9 )
              break;
            ++v9;
            --v8;
          }
          while ( v8 );
          if ( v8 )
          {
            while ( v7 && *v7 )
            {
              if ( !wcsicmp(v7, String2) )
                return 1;
              v10 = -1LL;
              do
                ++v10;
              while ( v7[v10] );
              v5 += v10 + 1;
              v7 += v10 + 1;
              if ( v5 >= v4 )
                return v3;
            }
          }
        }
      }
    }
  }
  return v3;
}
