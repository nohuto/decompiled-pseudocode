/*
 * XREFs of ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x180067BE8
 * Callers:
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001A90C (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetDirtyChildren@CThumbnailVisual@@UEAAXXZ @ 0x180067A70 (-SetDirtyChildren@CThumbnailVisual@@UEAAXXZ.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x180067AC0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180067B90 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180093190 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800F1CD0 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::NotifyOfDirtyDCompThumbnail(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x8000000);
}
