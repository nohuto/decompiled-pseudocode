/*
 * XREFs of ?SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805572B0
 * Callers:
 *     ?SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180557F60 (-SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805582E0 (-SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchTyp.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     CVirtualDesktopManager::SwitchContextForVDAnimation$_InitCoro$2 @ 0x180556F70 (CVirtualDesktopManager--SwitchContextForVDAnimation$_InitCoro$2.c)
 */

__int64 *__fastcall CVirtualDesktopManager::SwitchContextForVDAnimation(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  void *v7; // rax
  int v9; // [rsp+158h] [rbp+10h] BYREF
  int v10; // [rsp+168h] [rbp+20h] BYREF

  v10 = a4;
  v7 = operator new(0x100uLL);
  v9 = 0;
  CVirtualDesktopManager::SwitchContextForVDAnimation__InitCoro_2(&v9, (__int64)v7 + 112, a2, a3, &v10, a1);
  return a2;
}
