/*
 * XREFs of ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048FB74
 * Callers:
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180258904 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?Show@AccessibilityExperienceManager@@UEAAJH@Z @ 0x1802589F0 (-Show@AccessibilityExperienceManager@@UEAAJH@Z.c)
 *     ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180258B40 (-SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180258EC0 (-UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180259074 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     _lambda_0cedd56e0c33e1c71352c370e3ecb162_::operator() @ 0x18048E5D0 (_lambda_0cedd56e0c33e1c71352c370e3ecb162_--operator().c)
 *     _lambda_19713afaab0e793c65926cb0aea68e27_::operator() @ 0x18048E6B8 (_lambda_19713afaab0e793c65926cb0aea68e27_--operator().c)
 *     _lambda_24ba1d0144fdbdb30bf1c64e70acfff3_::operator() @ 0x18048E7CC (_lambda_24ba1d0144fdbdb30bf1c64e70acfff3_--operator().c)
 *     _lambda_51cbed3b18d30fb7ce15701a996cfe83_::operator() @ 0x18048E9C4 (_lambda_51cbed3b18d30fb7ce15701a996cfe83_--operator().c)
 *     _lambda_c3975a5b4ee2ba5280707fbe38be1371_::operator() @ 0x18048EAC0 (_lambda_c3975a5b4ee2ba5280707fbe38be1371_--operator().c)
 *     _lambda_fa553258777e9fe890f937adf5270d38_::operator() @ 0x18048EC38 (_lambda_fa553258777e9fe890f937adf5270d38_--operator().c)
 *     ?FocusEyeControl@AccessibilityExperienceManager@@UEAAJXZ @ 0x18048F280 (-FocusEyeControl@AccessibilityExperienceManager@@UEAAJXZ.c)
 *     ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18048F8F0 (-OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18048F9B0 (-OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z @ 0x1804900B0 (-SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z.c)
 *     ?SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z @ 0x1804902C0 (-SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z.c)
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180491050 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?get@?$static_lazy@VGazeUITraceLogging@@@details@wil@@QEAAPEAVGazeUITraceLogging@@P6AXXZ@Z @ 0x1804916DC (-get@-$static_lazy@VGazeUITraceLogging@@@details@wil@@QEAAPEAVGazeUITraceLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall GazeUITraceLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<GazeUITraceLogging>::get(
                                             a1,
                                             _lambda_69dd1f8975ed348cbbb0baa0bbfe70f2_::_lambda_invoker_cdecl_)
                                         + 8);
}
