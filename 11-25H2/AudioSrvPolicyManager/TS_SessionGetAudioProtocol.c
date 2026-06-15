/*
 * XREFs of TS_SessionGetAudioProtocol @ 0x180007190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180007860 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180012CA0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B8B0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BA28 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180049EEC (-GetTsAudioProtocol@@YAIK@Z.c)
 */

__int64 __fastcall TS_SessionGetAudioProtocol(RPC_BINDING_HANDLE BindingHandle, DWORD a2, _DWORD *a3, _DWORD *a4)
{
  RPC_STATUS v9; // eax
  signed int LastError; // edi
  RPC_STATUS v11; // eax
  HANDLE CurrentThread; // rax
  const char *v13; // r9
  unsigned int TokenInformation; // eax
  __int64 v15; // rdi
  int v16; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // [rsp+20h] [rbp-D8h]
  void *TokenHandle; // [rsp+30h] [rbp-C8h] BYREF
  DWORD SessionId; // [rsp+38h] [rbp-C0h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+48h] [rbp-B0h]
  __int128 v25; // [rsp+58h] [rbp-A0h]
  __int128 v26; // [rsp+68h] [rbp-90h]
  __int128 v27; // [rsp+78h] [rbp-80h]
  __int128 v28; // [rsp+88h] [rbp-70h]
  __int128 v29; // [rsp+98h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97B,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL,
      v20);
    return 2147942487LL;
  }
  if ( !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97C,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL,
      v20);
    return 2147942487LL;
  }
  *a3 = 0xFFFF;
  v30 = 0LL;
  *a4 = 0;
  SessionId = 0;
  v24 = 0LL;
  RpcCallAttributes[0] = 2;
  v25 = 0LL;
  RpcCallAttributes[1] = 16;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v9 = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
  LastError = 0;
  if ( v9 )
    LastError = v9 | 0x80010000;
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)LastError,
      v20);
    goto LABEL_16;
  }
  v11 = RpcImpersonateClient(BindingHandle);
  LastError = 0;
  if ( v11 )
    LastError = v11 | 0x80010000;
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x128,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)LastError,
      v20);
    goto LABEL_16;
  }
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x12C,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  v13);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
LABEL_23:
    RpcRevertToSelf();
    if ( LastError >= 0 )
      goto LABEL_24;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x984,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)LastError,
      v20);
    return (unsigned int)LastError;
  }
  TokenInformation = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, &SessionId);
  if ( TokenInformation )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x12E,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  (const char *)TokenInformation,
                  v20);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    goto LABEL_23;
  }
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  RpcRevertToSelf();
LABEL_24:
  if ( a2 == -1 )
    a2 = SessionId;
  LODWORD(TokenHandle) = a2;
  if ( !SessionId || a2 == SessionId )
  {
    if ( a2 )
    {
      *a3 = 0xFFFF;
      EnterCriticalSection(&stru_180067AF8);
      EnterCriticalSection(&stru_180067AF8);
      v17 = (_QWORD *)(qword_180067B38
                     + 16
                     * (qword_180067B50 & (0x100000001B3LL
                                         * (BYTE3(TokenHandle) ^ (0x100000001B3LL
                                                                * (BYTE2(TokenHandle) ^ (0x100000001B3LL
                                                                                       * (BYTE1(TokenHandle) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL))))))))));
      v18 = v17[1];
      if ( v18 == qword_180067B28 )
      {
LABEL_32:
        v18 = 0LL;
      }
      else
      {
        while ( a2 != *(_DWORD *)(v18 + 16) )
        {
          if ( v18 == *v17 )
            goto LABEL_32;
          v18 = *(_QWORD *)(v18 + 8);
        }
      }
      v19 = qword_180067B28;
      if ( v18 )
        v19 = v18;
      if ( v19 == qword_180067B28 )
      {
        LeaveCriticalSection(&stru_180067AF8);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46F,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x80070490LL,
          v20);
        LeaveCriticalSection(&stru_180067AF8);
        v16 = -2147023728;
      }
      else
      {
        v15 = *(_QWORD *)(v19 + 24);
        LeaveCriticalSection(&stru_180067AF8);
        *a3 = *(_DWORD *)(v15 + 4);
        *a4 = *(_DWORD *)(v15 + 8);
        LeaveCriticalSection(&stru_180067AF8);
        v16 = 0;
      }
      if ( v16 != -2147023728 )
        return 0LL;
      *a3 = GetTsAudioProtocol(a2);
    }
    else
    {
      *a3 = 0;
    }
    *a4 = 0;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x98E,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)0x80070005LL,
    v20);
  return 2147942405LL;
}
