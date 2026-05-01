/*
 * XREFs of _anonymous_namespace_::GetCurrentProcessName @ 0x1803BBA04
 * Callers:
 *     _anonymous_namespace_::IsCurrentProcessExplorer @ 0x1803BCBC4 (_anonymous_namespace_--IsCurrentProcessExplorer.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x1800490A8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void *__fastcall anonymous_namespace_::GetCurrentProcessName(void *a1)
{
  DWORD CurrentProcessId; // eax
  HANDLE v3; // rax
  void *v5[3]; // [rsp+28h] [rbp-230h] BYREF
  WCHAR BaseName[256]; // [rsp+40h] [rbp-218h] BYREF

  v5[1] = a1;
  std::wstring::wstring((char **)a1, &pvData);
  CurrentProcessId = GetCurrentProcessId();
  v3 = OpenProcess(0x410u, 0, CurrentProcessId);
  v5[0] = v3;
  if ( v3 != (HANDLE)-1LL && K32GetModuleBaseNameW(v3, 0LL, BaseName, 0x100u) )
    std::wstring::operator=((void **)a1, BaseName);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v5);
  return a1;
}
