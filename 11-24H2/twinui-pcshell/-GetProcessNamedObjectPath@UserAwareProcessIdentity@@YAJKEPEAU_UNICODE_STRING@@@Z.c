/*
 * XREFs of ?GetProcessNamedObjectPath@UserAwareProcessIdentity@@YAJKEPEAU_UNICODE_STRING@@@Z @ 0x18064D310
 * Callers:
 *     ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x180651F38 (-TryOpenFileMappingHandleForWindow@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_re.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800634D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CD890 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     IsUMgrQueryUserTokenPresent @ 0x1802D82C0 (IsUMgrQueryUserTokenPresent.c)
 */

__int64 __fastcall UserAwareProcessIdentity::GetProcessNamedObjectPath(
        DWORD dwProcessId,
        __int64 a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v6; // ebx
  char *v7; // rbx
  signed int v8; // edi
  signed int Error; // eax
  __int64 v10; // rdx
  int v11; // eax
  int TokenNamedObjectPath; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  void *TokenHandle; // [rsp+50h] [rbp+30h] BYREF
  void *v16; // [rsp+58h] [rbp+38h] BYREF

  if ( !a3 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
      (const char *)0x80070057LL);
    return v6;
  }
  v7 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v16 = v7;
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 0;
    TokenHandle = 0LL;
    goto LABEL_6;
  }
  Error = ResultFromKnownLastError();
  TokenHandle = 0LL;
  v8 = Error;
  if ( Error >= 0 )
  {
LABEL_6:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TokenHandle,
      0LL);
    if ( !OpenProcessToken(v7, 8u, &TokenHandle) )
      v8 = ResultFromKnownLastError();
  }
  if ( (((unsigned __int64)TokenHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
    && v8 == -2147024891
    && IsUMgrQueryUserTokenPresent()
    && (wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &TokenHandle,
          0LL),
        v11 = UMgrOpenProcessTokenForQuery(dwProcessId, &TokenHandle),
        v6 = v11,
        v11 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
      (const char *)(unsigned int)v11);
  }
  else if ( (((unsigned __int64)TokenHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    LOBYTE(v10) = 1;
    TokenNamedObjectPath = RtlGetTokenNamedObjectPath(TokenHandle, v10, a3);
    if ( TokenNamedObjectPath >= 0 )
      v6 = 0;
    else
      v6 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x6E,
             (__int64)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
             (const char *)(unsigned int)TokenNamedObjectPath);
  }
  else
  {
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
        (const char *)(unsigned int)v8);
    v6 = v8;
  }
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v16);
  return v6;
}
