/*
 * XREFs of ?EnsureExplorerInForeground@CMultitaskingViewManager@@AEAAJXZ @ 0x1804A2FD4
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1804A36D0 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x1801F2C8C (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::EnsureExplorerInForeground(CMultitaskingViewManager *this)
{
  HWND ForegroundWindow; // rax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF

  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    dwProcessId = 0;
    if ( GetWindowThreadProcessId(ForegroundWindow, &dwProcessId) )
    {
      if ( dwProcessId == GetCurrentProcessId() )
        return 0LL;
    }
  }
  v3 = ForegroundStaging::SetActive((CMultitaskingViewManager *)((char *)this + 320));
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4C6,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
