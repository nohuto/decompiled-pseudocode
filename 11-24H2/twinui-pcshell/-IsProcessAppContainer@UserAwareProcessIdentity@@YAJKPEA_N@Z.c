/*
 * XREFs of ?IsProcessAppContainer@UserAwareProcessIdentity@@YAJKPEA_N@Z @ 0x18064E090
 * Callers:
 *     ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x180651F38 (-TryOpenFileMappingHandleForWindow@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_re.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800634D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     IsUMgrQueryUserTokenPresent @ 0x1802D82C0 (IsUMgrQueryUserTokenPresent.c)
 */

__int64 __fastcall UserAwareProcessIdentity::IsProcessAppContainer(DWORD dwProcessId, bool *a2, bool *a3)
{
  unsigned int LastError; // ebx
  char *v6; // rbx
  signed int v7; // edi
  signed int Error; // eax
  int v9; // eax
  const char *v10; // r9
  void *v12; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int TokenInformation; // [rsp+78h] [rbp+38h] BYREF
  DWORD ReturnLength; // [rsp+80h] [rbp+40h] BYREF
  void *TokenHandle; // [rsp+88h] [rbp+48h] BYREF

  if ( !a2 )
  {
    LastError = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
      (const char *)0x80070057LL);
    return LastError;
  }
  *a2 = 1;
  v6 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v12 = v6;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v7 = 0;
    TokenHandle = 0LL;
    goto LABEL_6;
  }
  Error = ResultFromKnownLastError();
  TokenHandle = 0LL;
  v7 = Error;
  if ( Error >= 0 )
  {
LABEL_6:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TokenHandle,
      0LL);
    if ( !OpenProcessToken(v6, 8u, &TokenHandle) )
      v7 = ResultFromKnownLastError();
  }
  if ( (((unsigned __int64)TokenHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
    && v7 == -2147024891
    && IsUMgrQueryUserTokenPresent()
    && (wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &TokenHandle,
          0LL),
        v9 = UMgrOpenProcessTokenForQuery(dwProcessId, &TokenHandle),
        LastError = v9,
        v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
      (const char *)(unsigned int)v9);
  }
  else if ( (((unsigned __int64)TokenHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ReturnLength = 0;
    TokenInformation = 0;
    if ( GetTokenInformation(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength) )
    {
      LastError = 0;
      *a2 = TokenInformation != 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x4E,
                    (unsigned int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
                    v10);
    }
  }
  else
  {
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
        (const char *)(unsigned int)v7);
    LastError = v7;
  }
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v12);
  return LastError;
}
