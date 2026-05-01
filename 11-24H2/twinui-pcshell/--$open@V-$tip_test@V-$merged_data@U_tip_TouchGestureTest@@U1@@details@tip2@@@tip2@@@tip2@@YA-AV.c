/*
 * XREFs of ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18058F5FC
 * Callers:
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18029C448 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 *     ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x180590060 (-ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z.c)
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x180590220 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1805902EC (-FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x180590F60 (-HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ.c)
 *     ?PointersDown@TouchGestureProcessor@@QEAAXI@Z @ 0x180591854 (-PointersDown@TouchGestureProcessor@@QEAAXI@Z.c)
 *     ?PointersUp@TouchGestureProcessor@@QEAAXXZ @ 0x180591A90 (-PointersUp@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1805923A0 (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x180592EB0 (-open_helper@-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@AEAA_NPE.c)
 */

_QWORD *__fastcall tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(
        _QWORD *a1)
{
  *a1 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::open_helper();
  return a1;
}
