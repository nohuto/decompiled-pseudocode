/*
 * XREFs of ?ShowSnapBarAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@WindowsUdk@3@PEAUHWND__@@@Z @ 0x18022CD70
 * Callers:
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802703F0 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 * Callees:
 *     SnapFlyoutHost::ShowSnapBarAsync$_InitCoro$2 @ 0x1802728A8 (SnapFlyoutHost--ShowSnapBarAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall SnapFlyoutHost::ShowSnapBarAsync(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v7; // eax
  int v9; // [rsp+A8h] [rbp+10h] BYREF
  int v10; // [rsp+B0h] [rbp+18h] BYREF

  v10 = a3;
  v7 = (unsigned int)operator new(0x50uLL);
  v9 = 0;
  SnapFlyoutHost::ShowSnapBarAsync__InitCoro_2((unsigned int)&v9, v7, a2, (unsigned int)&v10, a4, a1);
  return a2;
}
