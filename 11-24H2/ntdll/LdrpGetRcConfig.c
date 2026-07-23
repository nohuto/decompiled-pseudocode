/*
 * XREFs of LdrpGetRcConfig @ 0x180077060
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180075320 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180094588 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModule @ 0x1800EC360 (LdrLoadAlternateResourceModule.c)
 *     LdrpCompareServiceChecksum @ 0x1800EC77C (LdrpCompareServiceChecksum.c)
 * Callees:
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074D00 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x1800771B0 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180079430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  _DWORD *result; // rax
  int v7; // eax
  _DWORD *v8; // rsi
  __int64 v9; // r9
  _DWORD *v10; // [rsp+40h] [rbp-48h]
  __int64 v11[5]; // [rsp+48h] [rbp-40h] BYREF

  v11[0] = 0LL;
  v10 = 0LL;
  if ( !a4 )
    goto LABEL_6;
  result = (_DWORD *)LdrpGetFromMUIMemCache(BaseOfImage);
  v10 = result;
  if ( result == (_DWORD *)-1LL )
    return 0LL;
  if ( !result )
  {
LABEL_6:
    v11[2] = (__int64)L"MUI";
    v11[3] = 1LL;
    v11[4] = 0LL;
    v7 = LdrpSearchResourceSection_U(BaseOfImage, (__int64)v11);
    if ( v7 >= 0 )
    {
      v7 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage);
      if ( v7 >= 0 )
      {
        v8 = v10;
        if ( *v10 == -20054323 )
        {
LABEL_11:
          if ( a3 )
          {
            v9 = -1LL;
            if ( v8 )
              v9 = (__int64)v8;
            LdrpSetAlternateResourceModuleHandle((__int64)BaseOfImage, 0LL, 0LL, v9, 0, 2, v7, 0LL);
          }
          return v8;
        }
        v7 = -1073741701;
      }
    }
    v8 = 0LL;
    goto LABEL_11;
  }
  return result;
}
