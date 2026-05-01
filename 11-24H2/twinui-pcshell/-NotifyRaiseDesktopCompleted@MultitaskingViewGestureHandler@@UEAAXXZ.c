/*
 * XREFs of ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x18049F070
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewTelemetry@@SAXXZ @ 0x1802AA954 (-NotifyRaiseDesktopCompleted@MultitaskingViewTelemetry@@SAXXZ.c)
 *     ??R?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSystemStateOverride@@@Z @ 0x18049CEAC (--R-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSyste.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18049CF70 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049DA5C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?StartTaskbarBounceAnimation@CAppThumbnailWindow@@QEAAXXZ @ 0x1804ABAE8 (-StartTaskbarBounceAnimation@CAppThumbnailWindow@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall MultitaskingViewGestureHandler::NotifyRaiseDesktopCompleted(MultitaskingViewGestureHandler *this)
{
  __int64 v2; // rcx
  MinimizeAnimationSystemStateOverride *v3; // rdx
  CAppThumbnailWindow **v4; // rsi
  CAppThumbnailWindow **i; // rdi

  MultitaskingViewTelemetry::NotifyRaiseDesktopCompleted();
  v3 = (MinimizeAnimationSystemStateOverride *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v3 )
    std::default_delete<MinimizeAnimationSystemStateOverride>::operator()(v2, v3);
  if ( *((_BYTE *)this + 248) )
  {
    if ( !*((_QWORD *)this + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgs(v2, v3);
    v4 = (CAppThumbnailWindow **)*((_QWORD *)this + 13);
    for ( i = (CAppThumbnailWindow **)*((_QWORD *)this + 12); i != v4; i += 2 )
      CAppThumbnailWindow::StartTaskbarBounceAnimation(*i);
    MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
    if ( *((_QWORD *)this + 12) == *((_QWORD *)this + 13) )
      MultitaskingViewGestureHandler::FinishTouchSwipeInternal(this);
  }
}
