/*
 * XREFs of ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003FFA0
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003F738 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18004C940 (--0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWind.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x180085720 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180086768 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180088A68 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x180089828 (-CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BF3F4 (-CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800C046C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D49BC (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800DCF2C (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800DD130 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800DDD88 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E16EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E1BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800EA250 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800EA580 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800EA890 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180040080 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180040250 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Create(struct CAnimatedTransitionVisual **a1)
{
  CAnimatedTransitionVisual *v2; // rax
  CAnimatedTransitionVisual *v3; // rax
  struct CAnimatedTransitionVisual *v4; // rdi
  CAnimatedTransitionVisual *v5; // r14
  CBaseObject *v6; // rbp
  int v7; // ebx

  if ( !a1 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x15u, 0LL);
    return (unsigned int)v7;
  }
  v2 = (CAnimatedTransitionVisual *)DefaultHeap::AllocClear(0x3E0uLL);
  if ( !v2 )
  {
    v5 = 0LL;
    v4 = 0LL;
    goto LABEL_11;
  }
  v3 = CAnimatedTransitionVisual::CAnimatedTransitionVisual(v2);
  v4 = v3;
  v5 = v3;
  if ( !v3 )
  {
LABEL_11:
    v7 = -2147024882;
    v6 = (struct CAnimatedTransitionVisual *)((char *)v4 + 8);
    goto LABEL_5;
  }
  v6 = (CAnimatedTransitionVisual *)((char *)v3 + 8);
  v7 = CAnimatedTransitionVisual::Initialize((CAnimatedTransitionVisual *)((char *)v3 + 8));
  if ( v7 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x15u, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v6);
  return (unsigned int)v7;
}
