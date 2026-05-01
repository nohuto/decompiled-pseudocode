/*
 * XREFs of ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801F4FA4
 * Callers:
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18049D280 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18049EB00 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18049F200 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ?ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18049F9E0 (-ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18049FB30 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(int a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  int v4; // eax

  v2 = 0;
  v3 = -a1;
  if ( a1 > 0 )
    v3 = a1;
  v4 = -a2;
  if ( a2 > 0 )
    v4 = a2;
  if ( v3 <= v4 )
  {
    if ( a2 )
    {
      LOBYTE(v2) = a2 > 0;
      ++v2;
    }
  }
  else
  {
    LOBYTE(v2) = a1 > 0;
    v2 += 3;
  }
  return v2;
}
