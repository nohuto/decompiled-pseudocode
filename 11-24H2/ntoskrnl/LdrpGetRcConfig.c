/*
 * XREFs of LdrpGetRcConfig @ 0x1402DC5EC
 * Callers:
 *     LdrIsResItemExist @ 0x1402DC488 (LdrIsResItemExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1405E5304 (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x1402DCFC0 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140489DDC (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x1409B999C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409BA5C0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  __int64 result; // rax
  int v8; // eax
  _DWORD *v9; // rbx
  _DWORD *v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v12[3]; // [rsp+58h] [rbp-28h] BYREF

  v4 = -1;
  v11 = 0LL;
  v10 = 0LL;
  if ( !a4 )
    goto LABEL_4;
  result = LdrpGetFromMUIMemCache(BaseOfImage);
  v10 = (_DWORD *)result;
  if ( result == -1 )
    return 0LL;
  if ( !result )
  {
LABEL_4:
    v12[1] = 1LL;
    v12[0] = L"MUI";
    v12[2] = 0LL;
    v8 = LdrpSearchResourceSection_U((_DWORD)BaseOfImage, (unsigned int)v12, 3, 33554480, (__int64)&v11);
    if ( v8 >= 0 )
    {
      v8 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage);
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
      LdrpSetAlternateResourceModuleHandle((_DWORD)BaseOfImage, 0, 0, v4, 0, 2, v8, 0LL);
    }
    return (__int64)v9;
  }
  return result;
}
