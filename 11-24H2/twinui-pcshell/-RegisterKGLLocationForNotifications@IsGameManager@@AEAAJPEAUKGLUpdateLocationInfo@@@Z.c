/*
 * XREFs of ?RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z @ 0x18010CA0C
 * Callers:
 *     ?DirChangeCallback@IsGameManager@@CAXPEAXE@Z @ 0x18005C900 (-DirChangeCallback@IsGameManager@@CAXPEAXE@Z.c)
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x18010B660 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18005D440 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x1801B79E4 (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

HRESULT __fastcall IsGameManager::RegisterKGLLocationForNotifications(
        IsGameManager *this,
        struct KGLUpdateLocationInfo *a2)
{
  void *v3; // rcx
  void *v4; // rcx
  const WCHAR *StringRawBuffer; // rax
  HANDLE v6; // rax
  HSTRING v7; // rcx
  HANDLE v8; // rdi
  HRESULT v9; // eax
  HSTRING *v10; // rsi
  HRESULT v11; // ebp
  HSTRING v12; // rcx
  const char *v13; // r9
  HSTRING v15; // rcx
  const unsigned __int16 *v16; // rax
  __int64 v17; // r8
  int v18; // eax
  int v19; // edi
  const WCHAR *v20; // rax
  wil::details *v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *phNewWaitObject; // [rsp+60h] [rbp+8h] BYREF
  UINT32 length; // [rsp+68h] [rbp+10h] BYREF
  HSTRING newString; // [rsp+70h] [rbp+18h] BYREF

  phNewWaitObject = this;
  v3 = (void *)_InterlockedExchange64((volatile __int64 *)a2 + 5, -1LL);
  phNewWaitObject = v3;
  if ( v3 != (void *)-1LL )
    UnregisterWait(v3);
  v4 = (void *)_InterlockedExchange64((volatile __int64 *)a2 + 4, -1LL);
  if ( v4 != (void *)-1LL )
    FindCloseChangeNotification(v4);
  *((_DWORD *)a2 + 7) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)a2 + 7), 0LL);
  v6 = FindFirstChangeNotificationW(StringRawBuffer, 0, 0x117u);
  v7 = (HSTRING)*((_QWORD *)a2 + 7);
  newString = 0LL;
  v8 = v6;
  v9 = WindowsDuplicateString(v7, &newString);
  v10 = (HSTRING *)((char *)a2 + 64);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A6,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
    return v11;
  }
  else
  {
    v12 = *v10;
    *v10 = newString;
    WindowsDeleteString(v12);
    if ( v8 != (HANDLE)-1LL )
      goto LABEL_7;
    v15 = *v10;
    length = 0;
    v16 = WindowsGetStringRawBuffer(v15, &length);
    if ( !length || (v17 = length - 1, length == 1) )
    {
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B6,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)0x8000FFFFLL);
      return -2147418113;
    }
    while ( v16[v17] != 92 )
    {
      v17 = (unsigned int)(v17 - 1);
      if ( !(_DWORD)v17 )
        goto LABEL_17;
    }
    v18 = Windows::Internal::String::Initialize((struct KGLUpdateLocationInfo *)((char *)a2 + 64), v16, v17);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B8,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v18);
      return v19;
    }
    *((_DWORD *)a2 + 7) = 1;
    v20 = WindowsGetStringRawBuffer(*v10, 0LL);
    v8 = FindFirstChangeNotificationW(v20, 0, 0x117u);
    if ( v8 == (HANDLE)-1LL )
    {
      return wil::details::GetLastErrorFailHr(v21);
    }
    else
    {
LABEL_7:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, (signed __int64)v8, -1LL) != -1 )
        FindCloseChangeNotification(v8);
      if ( RegisterWaitForSingleObject(
             &phNewWaitObject,
             *((HANDLE *)a2 + 4),
             (WAITORTIMERCALLBACK)IsGameManager::DirChangeCallback,
             a2,
             0xFFFFFFFF,
             8u) )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 5, (signed __int64)phNewWaitObject, -1LL) != -1 )
          UnregisterWait(phNewWaitObject);
        return 0;
      }
      else
      {
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0x8CD,
                 (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                 v13);
      }
    }
  }
}
