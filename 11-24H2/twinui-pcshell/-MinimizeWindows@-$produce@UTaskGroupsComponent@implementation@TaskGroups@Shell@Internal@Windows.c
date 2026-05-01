/*
 * XREFs of ?MinimizeWindows@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHIPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@@Z @ 0x180588A00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::MinimizeWindows(
        __int64 a1,
        int a2,
        unsigned int *a3)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // rdi
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v4 = &a3[a2];
  while ( v3 != v4 )
  {
    if ( !PostMessageW((HWND)*v3, 0x112u, 0xF020uLL, 0LL) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1AA,
        (int)"pcshell\\twinui\\taskgroups\\lib\\taskgroupscomponent.cpp",
        v5);
    ++v3;
  }
  return 0LL;
}
