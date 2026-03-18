/*
 * XREFs of LdrpGetRcConfig @ 0x14044EB54
 * Callers:
 *     LdrIsResItemExist @ 0x14044EAD4 (LdrIsResItemExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1405E7D14 (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x14044EF40 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14044F4B4 (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x140A0253C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A03160 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpGetRcConfig(__int64 a1, __int64 a2, char a3, char a4)
{
  int v4; // esi
  __int64 result; // rax
  int v8; // eax
  _DWORD *v9; // rbx
  _DWORD *v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v12[8]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-28h] BYREF

  v4 = -1;
  v11 = 0LL;
  v10 = 0LL;
  if ( !a4 )
    goto LABEL_4;
  result = LdrpGetFromMUIMemCache(a1, 0LL, 0LL, 8LL);
  v10 = (_DWORD *)result;
  if ( result == -1 )
    return 0LL;
  if ( !result )
  {
LABEL_4:
    v13[1] = 1LL;
    v13[0] = L"MUI";
    v13[2] = 0LL;
    v8 = LdrpSearchResourceSection_U(a1, (unsigned int)v13, 3, 33554480, (__int64)&v11);
    if ( v8 >= 0 )
    {
      v8 = LdrpAccessResourceDataNoMultipleLanguage(a1, v11, &v10, v12);
      if ( v8 >= 0 )
      {
        v9 = v10;
        if ( *v10 == -20054323 )
          goto LABEL_6;
        v8 = -1073741701;
      }
    }
    v9 = 0LL;
LABEL_6:
    if ( a3 )
    {
      if ( v9 )
        v4 = (int)v9;
      LdrpSetAlternateResourceModuleHandle(a1, 0, 0, v4, 0, 2, v8, 0LL);
    }
    return (__int64)v9;
  }
  return result;
}
