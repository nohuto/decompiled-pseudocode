/*
 * XREFs of ?_InitializeFromRegistry@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEAUHKEY__@@PEBG_N@Z @ 0x18005B484
 * Callers:
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x180051780 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D810 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeFromRegistry(
        BYTE **a1,
        HKEY a2,
        __int64 a3)
{
  BYTE *lpData; // rdi
  LSTATUS v6; // eax
  signed int v7; // ebx
  LSTATUS v8; // eax
  __int64 v9; // rsi
  DWORD v10; // eax
  DWORD v11; // ebp
  WCHAR *v12; // rax
  WCHAR *v13; // rsi
  DWORD v14; // eax
  DWORD v15; // r14d
  unsigned int v16; // esi
  DWORD Type; // [rsp+70h] [rbp+18h] BYREF
  int v19; // [rsp+74h] [rbp+1Ch]
  SIZE_T cb; // [rsp+78h] [rbp+20h] BYREF

  v19 = HIDWORD(a3);
  Type = 0;
  LODWORD(cb) = 0;
  lpData = 0LL;
  v6 = RegQueryValueExW(a2, L"LoggedOnUserSID", 0LL, &Type, 0LL, (LPDWORD)&cb);
  v7 = v6;
  if ( v6 > 0 )
    v7 = (unsigned __int16)v6 | 0x80070000;
  if ( v7 >= 0 )
  {
    if ( Type - 1 > 1 || !(_DWORD)cb || (cb & 1) != 0 )
      goto LABEL_24;
    lpData = (BYTE *)CoTaskMemAlloc((unsigned int)cb);
    if ( !lpData )
    {
LABEL_14:
      v7 = -2147024882;
      goto LABEL_25;
    }
    v8 = RegQueryValueExW(a2, L"LoggedOnUserSID", 0LL, &Type, lpData, (LPDWORD)&cb);
    v7 = v8;
    if ( v8 > 0 )
      v7 = (unsigned __int16)v8 | 0x80070000;
    if ( v7 >= 0 )
    {
      v9 = ((unsigned int)cb >> 1) - 1;
      if ( Type == 2 )
      {
        v10 = ExpandEnvironmentStringsW((LPCWSTR)lpData, 0LL, 0);
        v11 = v10;
        if ( v10 )
        {
          v12 = (WCHAR *)CoTaskMemAlloc(2LL * v10);
          v13 = v12;
          if ( !v12 )
            goto LABEL_14;
          v14 = ExpandEnvironmentStringsW((LPCWSTR)lpData, v12, v11);
          v15 = v14;
          if ( !v14 || v14 > v11 )
          {
            v7 = -2147024774;
            CoTaskMemFree(v13);
            goto LABEL_25;
          }
          v7 = 0;
          CoTaskMemFree(lpData);
          lpData = (BYTE *)v13;
          v9 = v15 - 1;
        }
      }
      if ( !*(_WORD *)&lpData[2 * v9] )
      {
        v16 = v9 + 1;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a1);
        if ( lpData && v16 )
        {
          *a1 = lpData;
          a1[1] = (BYTE *)(v16 - 1LL);
          a1[2] = (BYTE *)v16;
          *(_WORD *)&lpData[2 * v16 - 2] = 0;
        }
        lpData = 0LL;
        goto LABEL_25;
      }
LABEL_24:
      v7 = -2147024883;
    }
  }
LABEL_25:
  CoTaskMemFree(lpData);
  return (unsigned int)v7;
}
