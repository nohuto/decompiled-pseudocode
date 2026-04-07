/*
 * XREFs of ?CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008B450
 * Callers:
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x18006FC8C (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800F1CD0 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800F22E0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateVisualTargetProxyFromSharedHandle(__int64 this, void *a2, CResourceProxy **a3)
{
  return CCompositor::CreateProxyFromSharedHandle<CVisualTargetProxy>(this, a2, a3);
}
