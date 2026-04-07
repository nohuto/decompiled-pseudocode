/*
 * XREFs of ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x18004B2D4
 * Callers:
 *     ?PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWindow3D@@@Z @ 0x18004AAB0 (-PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWi.c)
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004B358 (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 *     ?CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransitionType@456@@Z @ 0x18004BB2C (-CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?CreateSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z @ 0x18004BD94 (-CreateSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AUAnimatedTran.c)
 *     _lambda_e60fdd2e02318a9e5dca306b5dd9918f_::operator() @ 0x1800E3E20 (_lambda_e60fdd2e02318a9e5dca306b5dd9918f_--operator().c)
 *     ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800E81C8 (--$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transitions@.c)
 *     ?erase@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@@Z @ 0x1800EABF8 (-erase@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVisual@Transit.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(
        winrt::Windows::Foundation::IUnknown *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *(_QWORD *)a1 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a1);
    v4 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)a1 = v4;
  }
  return a1;
}
