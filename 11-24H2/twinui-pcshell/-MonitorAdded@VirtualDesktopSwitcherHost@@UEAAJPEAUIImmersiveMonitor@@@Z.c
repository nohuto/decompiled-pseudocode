/*
 * XREFs of ?MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AC7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?DismissAsync@VirtualDesktopSwitcherHost@@AEAA?AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1802B8C48 (-DismissAsync@VirtualDesktopSwitcherHost@@AEAA-AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopSwitcherHost::MonitorAdded(
        VirtualDesktopSwitcherHost *this,
        struct IImmersiveMonitor *a2)
{
  char *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  const char *v4; // r9
  __int64 result; // rax
  LPCRITICAL_SECTION v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this - 16;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (VirtualDesktopSwitcherHost *)16));
  v6 = v3;
  try
  {
    v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
    VirtualDesktopSwitcherHost::DismissAsync((__int64)v2, (__int64)&v9, 0);
    CThreadUseDetector::~CThreadUseDetector(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x136,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
                           v4);
  }
  return result;
}
