/*
 * XREFs of ?SetActive@TaskViewFrame@@UEAAJXZ @ 0x1802187E0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryActivate@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180218828 (-TryActivate@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 */

__int64 __fastcall TaskViewFrame::SetActive(TaskViewFrame *this)
{
  char *v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 72;
  try
  {
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::TryActivate(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF1,
                           (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
                           v2);
  }
  return result;
}
