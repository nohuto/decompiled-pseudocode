/*
 * XREFs of ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80
 * Callers:
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180002968 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180004E74 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUD2D_POINTANDSIZE_L@@@Z @ 0x18003E6CC (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18003E7F0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x180044A98 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180044D30 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180082D10 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800834A0 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18008B754 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x18008BE60 (-RenderAndCommit@CMagnifierControl@@AEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18009807C (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800BBFA4 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800C046C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUD2D_POINTANDSIZE_L@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800D0B28 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUD2D_POINTANDSIZE_L@@PEAPEAVCCachedVisualI.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D35F0 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D3780 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D49BC (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800D59C4 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800DD130 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF6B0 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CommitDwmChannel(CCompositor *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
}
