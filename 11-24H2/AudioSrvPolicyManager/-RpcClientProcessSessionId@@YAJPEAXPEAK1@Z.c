/*
 * XREFs of ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180005420
 * Callers:
 *     TS_RegisterAudioProtocolNotification @ 0x180004EB0 (TS_RegisterAudioProtocolNotification.c)
 *     PbmReportHostedAppStateChange @ 0x1800162C0 (PbmReportHostedAppStateChange.c)
 *     PbmReportAppInteractivityChange @ 0x1800194A0 (PbmReportAppInteractivityChange.c)
 *     PbmAllowMediaPlaybackForApp @ 0x18003B070 (PbmAllowMediaPlaybackForApp.c)
 *     PbmLaunchBackgroundTask @ 0x18003B3D0 (PbmLaunchBackgroundTask.c)
 *     PbmReportAppClosing @ 0x18003B660 (PbmReportAppClosing.c)
 *     PbmReportApplicationState @ 0x18003B6D0 (PbmReportApplicationState.c)
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x18003BAB0 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 * Callees:
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180005660 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180013630 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B9E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BB58 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 */

__int64 __fastcall RpcClientProcessSessionId(RPC_BINDING_HANDLE BindingHandle, unsigned int *a2, unsigned int *a3)
{
  RPC_STATUS v6; // eax
  unsigned int v7; // ebp
  RPC_STATUS v8; // eax
  unsigned int v9; // ebx
  HANDLE CurrentThread; // rax
  const char *v11; // r9
  unsigned int TokenInformation; // eax
  char *v13; // rcx
  unsigned int LastError; // ebx
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-B8h]
  unsigned int v18; // [rsp+20h] [rbp-B8h]
  void *TokenHandle[2]; // [rsp+30h] [rbp-A8h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v21; // [rsp+48h] [rbp-90h]
  __int128 v22; // [rsp+58h] [rbp-80h]
  __int128 v23; // [rsp+68h] [rbp-70h]
  __int128 v24; // [rsp+78h] [rbp-60h]
  __int128 v25; // [rsp+88h] [rbp-50h]
  __int128 v26; // [rsp+98h] [rbp-40h]
  __int64 v27; // [rsp+A8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  v6 = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
  v7 = 0;
  if ( v6 )
    v7 = v6 | 0x80010000;
  if ( (v7 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)v7,
      v17);
    return v7;
  }
  else
  {
    v8 = RpcImpersonateClient(BindingHandle);
    v9 = 0;
    if ( v8 )
      v9 = v8 | 0x80010000;
    if ( (v9 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v9,
        v17);
      return v9;
    }
    else
    {
      TokenHandle[0] = 0LL;
      CurrentThread = GetCurrentThread();
      if ( OpenThreadToken(CurrentThread, 8u, 1, TokenHandle) )
      {
        TokenInformation = GetTokenInformation(TokenHandle[0], 0LL, 0LL, 0LL, a3);
        if ( TokenInformation )
        {
          v16 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x12E,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  (const char *)TokenInformation,
                  v18);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(TokenHandle);
          RpcRevertToSelf();
          return v16;
        }
        else
        {
          v13 = (char *)TokenHandle[0];
          *a2 = DWORD2(v24);
          if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v13);
          RpcRevertToSelf();
          return 0LL;
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x12C,
                      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                      v11);
        if ( (unsigned __int64)TokenHandle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(TokenHandle[0]);
        RpcRevertToSelf();
        return LastError;
      }
    }
  }
}
