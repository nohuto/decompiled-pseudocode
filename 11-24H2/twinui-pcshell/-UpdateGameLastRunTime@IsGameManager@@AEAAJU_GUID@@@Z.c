/*
 * XREFs of ?UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z @ 0x180227610
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180017C40 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800A90D0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IsGameManager::UpdateGameLastRunTime(IsGameManager *this, struct _GUID *a2)
{
  const char *v4; // r9
  __int128 v6; // xmm0
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int Key; // ebx
  HKEY v12; // rcx
  bool v13; // sf
  struct _FILETIME FileTime; // [rsp+50h] [rbp+7h] BYREF
  HKEY hKey[2]; // [rsp+60h] [rbp+17h] BYREF
  struct _FILETIME v16; // [rsp+70h] [rbp+27h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+78h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  SystemTime = 0LL;
  GetSystemTime(&SystemTime);
  FileTime = 0LL;
  if ( !SystemTimeToFileTime(&SystemTime, &FileTime) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xA1C,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
             v4);
  v6 = (__int128)*a2;
  v7 = (__int64 *)*((_QWORD *)this + 2);
  v16 = FileTime;
  v8 = *v7;
  *(_OWORD *)hKey = v6;
  v9 = (*(__int64 (__fastcall **)(__int64 *, HKEY *, __int64, struct _FILETIME *, int))(v8 + 72))(
         v7,
         hKey,
         2LL,
         &v16,
         8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA22,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  hKey[0] = 0LL;
  if ( !aSoftwareMicros_21[0] )
  {
    v12 = HKEY_CURRENT_USER;
    hKey[0] = HKEY_CURRENT_USER;
LABEL_9:
    Key = RegSetValueExW(v12, L"LastGameActivity", 0, 3u, (const BYTE *)&FileTime, 8u);
    if ( hKey[0] != HKEY_CURRENT_USER )
      RegCloseKey(hKey[0]);
    goto LABEL_11;
  }
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
          0,
          0LL,
          0,
          2u,
          0LL,
          hKey,
          0LL);
  if ( !Key )
  {
    v12 = hKey[0];
    goto LABEL_9;
  }
LABEL_11:
  v13 = Key < 0;
  if ( Key > 0 )
  {
    Key = (unsigned __int16)Key | 0x80070000;
    v13 = Key < 0;
  }
  if ( v13 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA25,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)Key);
  return 0LL;
}
