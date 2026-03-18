/*
 * XREFs of Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10
 * Callers:
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 *     xxxCreateDesktopEx @ 0x1C00293D4 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxCancelMouseMoveTracking @ 0x1C0098298 (xxxCancelMouseMoveTracking.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A1D48 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetWindowLong @ 0x1C00A76E4 (xxxSetWindowLong.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00A7D28 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     _SetDoubleClickTime @ 0x1C00D801C (_SetDoubleClickTime.c)
 *     PatchThreadWindows @ 0x1C00DF900 (PatchThreadWindows.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00DFDE4 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1C013CD6C (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C022C654 (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 * Callees:
 *     Feature_Backport_UserModeTooltips__private_IsEnabledFallback @ 0x1C0139A48 (Feature_Backport_UserModeTooltips__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Backport_UserModeTooltips__private_featureState & 0x10) != 0 )
    return Feature_Backport_UserModeTooltips__private_featureState & 1;
  else
    return Feature_Backport_UserModeTooltips__private_IsEnabledFallback(
             (unsigned int)Feature_Backport_UserModeTooltips__private_featureState,
             3LL);
}
