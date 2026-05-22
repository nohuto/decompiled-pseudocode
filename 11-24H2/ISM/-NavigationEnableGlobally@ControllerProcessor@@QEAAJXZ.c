/*
 * XREFs of ?NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ @ 0x18017B35C
 * Callers:
 *     ?EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ @ 0x1801759B0 (-EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017AB58 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180099F10 (-NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x18017A9C4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x18017B294 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnableGlobally(ControllerProcessor *this)
{
  LONG SystemMetrics; // edi
  LONG v3; // ebx
  struct tagRECT v5; // [rsp+40h] [rbp-10h] BYREF
  struct tagPOINT v6; // [rsp+68h] [rbp+18h] BYREF

  ControllerProcessor::GetCursorPosition(this, &v6);
  SystemMetrics = GetSystemMetrics(78);
  v5.left = 0;
  v3 = GetSystemMetrics(79);
  v5.top = 0;
  v5.bottom = v3;
  v5.right = SystemMetrics;
  InputETW::ControllerNavigationManager::NavigationEnabled(&v5, v6);
  v5.left = 0;
  v5.top = 0;
  v5.right = SystemMetrics;
  v5.bottom = v3;
  return ControllerProcessor::NavigationEnable(this, 225, &v5, v6, 0LL, 0, 0);
}
