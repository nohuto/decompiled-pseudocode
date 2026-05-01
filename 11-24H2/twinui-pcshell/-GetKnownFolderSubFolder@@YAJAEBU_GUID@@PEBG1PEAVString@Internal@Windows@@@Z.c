/*
 * XREFs of ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x18010D034
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x18010ABCC (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x18010B660 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 *     ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x18010CD74 (-EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetKnownFolderSubFolder(
        const struct _GUID *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        HSTRING *a4)
{
  unsigned __int64 v7; // rdi
  HRESULT v8; // eax
  unsigned int v9; // ebx
  HRESULT v10; // eax
  HSTRING v11; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  HRESULT v15; // eax
  PWSTR ppszPath; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h]
  __int64 v18; // [rsp+30h] [rbp-D0h]
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pszPathOut[520]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+498h] [rbp+398h]

  ppszPath = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !a4 )
  {
    v9 = -2147467261;
    v13 = 139LL;
    goto LABEL_14;
  }
  v7 = -1LL;
  v17 = -1LL;
  v18 = -1LL;
  v8 = SHGetKnownFolderPath(a1, 0x8000u, 0LL, &ppszPath);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v8);
    if ( ppszPath )
      CoTaskMemFree(ppszPath);
    return v9;
  }
  v10 = PathCchCombine(pszPathOut, 0x208uLL, ppszPath, a2);
  v9 = v10;
  if ( v10 < 0 )
  {
    v14 = (unsigned int)v10;
    v13 = 143LL;
    goto LABEL_15;
  }
  if ( a3 )
  {
    v15 = PathCchCombine(pszPathOut, 0x208uLL, pszPathOut, a3);
    v9 = v15;
    if ( v15 < 0 )
    {
      v14 = (unsigned int)v15;
      v13 = 147LL;
      goto LABEL_15;
    }
  }
  string = 0LL;
  do
    ++v7;
  while ( pszPathOut[v7] );
  if ( v7 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    goto LABEL_13;
  }
  v9 = WindowsCreateString(pszPathOut, v7, &string);
  if ( (v9 & 0x80000000) != 0 )
  {
LABEL_13:
    v13 = 150LL;
LABEL_14:
    v14 = v9;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)v14);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&ppszPath);
    return v9;
  }
  v11 = *a4;
  *a4 = string;
  WindowsDeleteString(v11);
  if ( ppszPath )
    CoTaskMemFree(ppszPath);
  return 0LL;
}
