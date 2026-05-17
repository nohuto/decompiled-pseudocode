/*
 * XREFs of LdrpGetRcConfig @ 0x180061480
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180077CA8 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModule @ 0x1800F16E0 (LdrLoadAlternateResourceModule.c)
 *     LdrpCompareServiceChecksum @ 0x1800F1AFC (LdrpCompareServiceChecksum.c)
 * Callees:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18005F120 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x1800615D0 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180063850 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetRcConfig(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 result; // rax
  int v7; // eax
  _DWORD *v8; // rsi
  __int64 v9; // r9
  _DWORD *v10; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-30h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( !a4 )
    goto LABEL_6;
  result = LdrpGetFromMUIMemCache(a1, 0LL, 0LL, 8LL);
  v10 = (_DWORD *)result;
  if ( result == -1 )
    return 0LL;
  if ( !result )
  {
LABEL_6:
    v13[0] = L"MUI";
    v13[1] = 1LL;
    v13[2] = 0LL;
    v7 = LdrpSearchResourceSection_U(a1, (unsigned int)v13, 3, 33554480, (__int64)&v11);
    if ( v7 >= 0 )
    {
      v7 = LdrpAccessResourceDataNoMultipleLanguage(a1, v11, &v10, v12);
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
            LdrpSetAlternateResourceModuleHandle(a1, 0LL, 0LL, v9, 0, 2, v7, 0LL);
          }
          return (__int64)v8;
        }
        v7 = -1073741701;
      }
    }
    v8 = 0LL;
    goto LABEL_11;
  }
  return result;
}
