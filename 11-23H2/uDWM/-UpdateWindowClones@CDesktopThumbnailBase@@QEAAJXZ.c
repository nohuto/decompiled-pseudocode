/*
 * XREFs of ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180005904
 * Callers:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180005140 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180005770 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000E7A0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800B5FD8 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EA690 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180109970 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x1800061FC (-_ClearClones@CDesktopThumbnailBase@@IEAAXXZ.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800121D8 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::UpdateWindowClones(CDesktopThumbnailBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = VisualCollection::RemoveAll((CDesktopThumbnailBase *)((char *)this + 32));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x34u, 0LL);
  }
  else
  {
    CDesktopThumbnailBase::_ClearClones(this);
    *((_DWORD *)this + 68) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 248, 16LL);
    v4 = CDesktopThumbnailBase::_SnapshotWindows(this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x38u, 0LL);
  }
  return v3;
}
