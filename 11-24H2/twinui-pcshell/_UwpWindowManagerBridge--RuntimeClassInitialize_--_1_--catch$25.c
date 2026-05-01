/*
 * XREFs of _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch$25 @ 0x1806D654B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1800A3BC8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802DF6D4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180679D28 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch_25(wil *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbx
  void *v5; // rdx
  CCriticalFailureHandler *v6; // rcx
  const char *v7; // r9
  char v8; // al

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 112);
  *(_DWORD *)(v4 + 304) = v3;
  wil::details::SetEvent(*(wil::details **)(v4 + 280), v5);
  v7 = (const char *)*(unsigned int *)(v4 + 304);
  *(_DWORD *)(a2 + 48) = (_DWORD)v7;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v6, (int *)(a2 + 48));
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v7 = (const char *)*(unsigned int *)(a2 + 48);
  }
  if ( (int)v7 >= 0 )
    goto LABEL_9;
  if ( (_DWORD)v7 != -2147024882 && (_DWORD)v7 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v6,
      (int *)(a2 + 48),
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      0x96u);
    v7 = (const char *)*(unsigned int *)(a2 + 48);
  }
  if ( (int)v7 >= 0 )
LABEL_9:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
    return 1LL;
  if ( (int)v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 232),
      (void *)0x96,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      v7);
  return 0LL;
}
