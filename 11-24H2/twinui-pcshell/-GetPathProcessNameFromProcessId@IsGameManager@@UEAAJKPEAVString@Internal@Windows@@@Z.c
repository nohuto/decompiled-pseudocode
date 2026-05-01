/*
 * XREFs of ?GetPathProcessNameFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z @ 0x18005E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18005D440 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall IsGameManager::GetPathProcessNameFromProcessId(IsGameManager *this, DWORD a2, HSTRING *a3)
{
  HSTRING v5; // rbx
  HANDLE v6; // rax
  wil::details *v7; // rcx
  unsigned __int64 v8; // r14
  void *v9; // rdi
  const char *v10; // r9
  HRESULT v11; // eax
  signed int LastErrorFailHr; // esi
  const wchar_t *StringRawBuffer; // rax
  wchar_t *v14; // rax
  const WCHAR *v15; // rax
  HRESULT v16; // edi
  HSTRING v17; // rcx
  DWORD dwSize; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING string; // [rsp+28h] [rbp-D8h] BYREF
  void *v21; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR ExeName[1040]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+898h] [rbp+798h]

  v5 = 0LL;
  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize = 1040;
  v6 = OpenProcess(0x1000u, 0, a2);
  v8 = -1LL;
  v21 = v6;
  v9 = v6;
  if ( !v6 )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v7);
    goto LABEL_9;
  }
  if ( !QueryFullProcessImageNameW(v6, 0, ExeName, &dwSize) )
  {
    LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0xA04,
                        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                        v10);
    if ( v9 != (void *)-1LL )
      CloseHandle(v9);
LABEL_9:
    if ( LastErrorFailHr >= 0 )
      goto LABEL_10;
    return (unsigned int)LastErrorFailHr;
  }
  string = 0LL;
  v11 = WindowsCreateString(ExeName, dwSize, &string);
  LastErrorFailHr = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA06,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v11);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v21);
    return (unsigned int)LastErrorFailHr;
  }
  v5 = string;
  WindowsDeleteString(0LL);
  if ( v9 != (void *)-1LL )
    CloseHandle(v9);
LABEL_10:
  StringRawBuffer = WindowsGetStringRawBuffer(v5, 0LL);
  v14 = wcsrchr(StringRawBuffer, 0x5Cu);
  if ( v14 )
    v15 = v14 + 1;
  else
    v15 = WindowsGetStringRawBuffer(v5, 0LL);
  if ( v15 )
  {
    string = 0LL;
    do
      ++v8;
    while ( v15[v8] );
    if ( v8 > 0xFFFFFFFF )
    {
      v16 = -2147024362;
    }
    else
    {
      v16 = WindowsCreateString(v15, v8, &string);
      if ( v16 >= 0 )
      {
        v17 = *a3;
        *a3 = string;
        WindowsDeleteString(v17);
      }
    }
    if ( v16 >= 0 )
    {
      if ( v5 )
        WindowsDeleteString(v5);
      return 0LL;
    }
  }
  else
  {
    v16 = -2147467261;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x830,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)v16);
  if ( v5 )
    WindowsDeleteString(v5);
  return (unsigned int)v16;
}
