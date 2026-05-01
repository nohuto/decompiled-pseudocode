/*
 * XREFs of ??R?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSystemStateOverride@@@Z @ 0x18049CEAC
 * Callers:
 *     ??1?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAA@XZ @ 0x1802CE854 (--1-$unique_ptr@VMinimizeAnimationSystemStateOverride@@U-$default_delete@VMinimizeAnimationSyste.c)
 *     ??$?4U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@$0A@@?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18049B244 (--$-4U-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@$0A@@-$unique_ptr@VMinimizeA.c)
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x18049F070 (-NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ.c)
 *     MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_ResumeCoro$1 @ 0x18049FE10 (MultitaskingViewGestureHandler--TeardownThumbnailsAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x18049C670 (--1MinimizeAnimationSystemStateOverride@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<MinimizeAnimationSystemStateOverride>::operator()(
        __int64 a1,
        MinimizeAnimationSystemStateOverride *a2)
{
  if ( a2 )
  {
    MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(a2);
    operator delete(a2, (const struct std::nothrow_t *)4);
  }
}
