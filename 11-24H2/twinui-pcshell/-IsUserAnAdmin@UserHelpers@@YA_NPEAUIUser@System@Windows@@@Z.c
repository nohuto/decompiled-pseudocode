/*
 * XREFs of ?IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z @ 0x1803BCD0C
 * Callers:
 *     ?CanUserInstallStoreApps@@YA_NXZ @ 0x1803B7B44 (-CanUserInstallStoreApps@@YA_NXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800634D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetUserTokenHandle@UserHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUIUser@System@Windows@@@Z @ 0x1803BBF90 (-GetUserTokenHandle@UserHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_p.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803C0C18 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall UserHelpers::IsUserAnAdmin(UserHelpers *this, struct Windows::System::IUser *a2)
{
  char v2; // bl
  const char *v3; // r9
  DWORD LastError; // eax
  void *v5; // rdx
  unsigned int v6; // r8d
  const char *v7; // r9
  unsigned int ReturnLength; // [rsp+20h] [rbp-39h]
  WINBOOL IsMember; // [rsp+30h] [rbp-29h] BYREF
  DWORD cbSid; // [rsp+34h] [rbp-25h] BYREF
  char *TokenInformation; // [rsp+38h] [rbp-21h] BYREF
  HANDLE TokenHandle[2]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE pSid[80]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = 0;
  UserHelpers::GetUserTokenHandle(TokenHandle);
  cbSid = 68;
  if ( !CreateWellKnownSid(WinBuiltinAdministratorsSid, 0LL, pSid, &cbSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x94,
      (__int64)"shellcommon\\internal\\shell\\inc\\Helpers\\UserHelpers.h",
      v3);
  IsMember = 0;
  if ( CheckTokenMembership(TokenHandle[0], pSid, &IsMember) && IsMember )
    goto LABEL_9;
  TokenInformation = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&TokenInformation,
    0LL);
  if ( !GetTokenInformation(TokenHandle[0], TokenLinkedToken, &TokenInformation, 8u, &cbSid) )
  {
    LastError = GetLastError();
    if ( ((LastError - 1312) & 0xFFFFFFFD) != 0 )
      wil::details::in1diag3::Throw_Win32(retaddr, v5, v6, (const char *)LastError, ReturnLength);
  }
  if ( (unsigned __int64)(TokenInformation - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && !CheckTokenMembership(TokenInformation, pSid, &IsMember) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0xA7,
      (__int64)"shellcommon\\internal\\shell\\inc\\Helpers\\UserHelpers.h",
      v7);
  }
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&TokenInformation);
  if ( IsMember )
LABEL_9:
    v2 = 1;
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(TokenHandle);
  return v2;
}
