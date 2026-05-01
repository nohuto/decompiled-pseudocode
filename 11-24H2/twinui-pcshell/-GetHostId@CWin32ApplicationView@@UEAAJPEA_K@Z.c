/*
 * XREFs of ?GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x180310210
 * Callers:
 *     ?IsEqualByHostId@CWin32ApplicationView@@UEAAJ_KPEAH@Z @ 0x1803107F0 (-IsEqualByHostId@CWin32ApplicationView@@UEAAJ_KPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800634D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CD890 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z @ 0x180311280 (-v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::GetHostId(CWin32ApplicationView *this, unsigned __int64 *a2)
{
  unsigned int v3; // edi
  int ProcessId; // eax
  unsigned int v5; // ebx
  HANDLE v7; // rbx
  const char *v8; // r9
  unsigned int LastError; // eax
  int TokenHostIdAsUlong64; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  DWORD dwProcessId; // [rsp+40h] [rbp+20h] BYREF
  void *TokenHandle; // [rsp+48h] [rbp+28h] BYREF
  void *v14; // [rsp+50h] [rbp+30h] BYREF

  *a2 = -1LL;
  v3 = 0;
  dwProcessId = 0;
  ProcessId = CWin32ApplicationView::v_GetProcessId((CWin32ApplicationView *)((char *)this - 8), &dwProcessId);
  v5 = ProcessId;
  if ( ProcessId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FC,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)ProcessId);
    return v5;
  }
  v7 = OpenProcess(0x1000u, 0, dwProcessId);
  v14 = v7;
  if ( (((unsigned __int64)v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    TokenHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TokenHandle,
      0LL);
    if ( OpenProcessToken(v7, 8u, &TokenHandle) )
    {
      TokenHostIdAsUlong64 = RtlQueryTokenHostIdAsUlong64(TokenHandle, a2);
      if ( TokenHostIdAsUlong64 >= 0 )
      {
LABEL_10:
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
        goto LABEL_11;
      }
      LastError = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x403,
                    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    (const char *)(unsigned int)TokenHostIdAsUlong64);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x402,
                    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    v8);
    }
    v3 = LastError;
    goto LABEL_10;
  }
  v3 = -2147024894;
LABEL_11:
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v14);
  return v3;
}
