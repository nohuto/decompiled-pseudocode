/*
 * XREFs of ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180011210
 * Callers:
 *     ?TsSessionIdGetUserDuckingPreference@@YAKK@Z @ 0x180011090 (-TsSessionIdGetUserDuckingPreference@@YAKK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019F0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180012CA0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800173A8 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800174C0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B8B0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BA28 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@std@@@std@@QEAA@XZ @ 0x18003FD3C (--1-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@std@@@std@@QEAA@XZ.c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x180040D20 (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 */

__int64 __fastcall RpcTryInitializeUserSettings(struct TSSession *a1)
{
  unsigned int v1; // edi
  const struct _tlgProvider_t *v3; // rcx
  RPC_STATUS v4; // eax
  unsigned int v5; // ebx
  HANDLE CurrentThread; // rax
  const char *v8; // r9
  unsigned int LastError; // ebx
  PSID *v10; // rbx
  DWORD v11; // eax
  const char *v12; // r9
  unsigned int v13; // eax
  LSTATUS v14; // eax
  unsigned int ReturnLength; // [rsp+20h] [rbp-E0h]
  void *TokenHandle; // [rsp+30h] [rbp-D0h] BYREF
  DWORD TokenInformationLength; // [rsp+38h] [rbp-C8h] BYREF
  int v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  HKEY hKey[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE TokenInformation[512]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v1 = 0;
  if ( !*((_BYTE *)a1 + 1092) )
  {
    v3 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v3 > 4u )
    {
      v18[0] = *(_DWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)v3,
        (__int64)&unk_18005B1AA);
    }
    v4 = RpcImpersonateClient(0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C1,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    TokenHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TokenHandle,
      0LL);
    CurrentThread = GetCurrentThread();
    if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x2C8,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                    v8);
LABEL_8:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      RpcRevertToSelf();
      return LastError;
    }
    TokenInformationLength = 512;
    *(_QWORD *)v18 = 0LL;
    v10 = (PSID *)TokenInformation;
    if ( !GetTokenInformation(TokenHandle, TokenUser, TokenInformation, 0x200u, &TokenInformationLength) )
    {
      v11 = GetLastError();
      if ( v11 == 122 )
      {
        *(_QWORD *)v18 = operator new[](TokenInformationLength, (const struct std::nothrow_t *)&std::nothrow);
        v10 = *(PSID **)v18;
        if ( !*(_QWORD *)v18 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D6,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007000ELL);
          std::unique_ptr<_TOKEN_USER>::~unique_ptr<_TOKEN_USER>(v18);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
          RpcRevertToSelf();
          return 2147942414LL;
        }
        if ( !GetTokenInformation(
                TokenHandle,
                TokenUser,
                *(LPVOID *)v18,
                TokenInformationLength,
                &TokenInformationLength) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x2D9,
                        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                        v12);
          std::unique_ptr<_TOKEN_USER>::~unique_ptr<_TOKEN_USER>(v18);
          goto LABEL_8;
        }
      }
      else if ( v11 )
      {
        LastError = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      (void *)0x2DD,
                      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                      (const char *)v11,
                      ReturnLength);
        std::unique_ptr<_TOKEN_USER>::~unique_ptr<_TOKEN_USER>(v18);
        goto LABEL_8;
      }
    }
    if ( EqualSid(*v10, *((PSID *)a1 + 137)) )
    {
      phkResult = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        &phkResult,
        0LL);
      v13 = RegOpenCurrentUser(0x20019u, &phkResult);
      if ( v13 )
      {
        LastError = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      (void *)0x2E8,
                      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                      (const char *)v13,
                      ReturnLength);
        if ( phkResult )
          RegCloseKey(phkResult);
        std::unique_ptr<_TOKEN_USER>::~unique_ptr<_TOKEN_USER>(v18);
        goto LABEL_8;
      }
      hKey[0] = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        hKey,
        0LL);
      v14 = RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, hKey);
      *((_BYTE *)a1 + 1092) = v14 == 0;
      if ( !v14 )
        LoadUserSettings(a1, hKey[0]);
      if ( hKey[0] )
        RegCloseKey(hKey[0]);
      if ( phkResult )
        RegCloseKey(phkResult);
    }
    std::unique_ptr<_TOKEN_USER>::~unique_ptr<_TOKEN_USER>(v18);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    RpcRevertToSelf();
  }
  if ( !*((_BYTE *)a1 + 1092) )
    return (unsigned int)-2147023728;
  return v1;
}
