/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopWindowMoveManager@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x180566FD4
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x180095908 (--$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall VirtualDesktopWindowMoveManager::RuntimeClassInitialize(
        VirtualDesktopWindowMoveManager *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopCollection *a3,
        struct IVirtualDesktopVisibilityPolicy *a4,
        struct IVirtualDesktopPinnedAppsPrivate *a5)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 7, (__int64)a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 9, (__int64)a4);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a5);
  return 0LL;
}
