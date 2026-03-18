/*
 * XREFs of Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x14027F22C
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E770 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     PostPointerEventMessage @ 0x14012D8F0 (PostPointerEventMessage.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x14023D790 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x14023FF60 (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     NtUserGetCurrentInputMessageSource @ 0x140241FF0 (NtUserGetCurrentInputMessageSource.c)
 *     NtUserInjectTouchpadAction @ 0x140298FF0 (NtUserInjectTouchpadAction.c)
 *     NtUserRegisterTouchpadCapableWindow @ 0x14029B7B0 (NtUserRegisterTouchpadCapableWindow.c)
 *     EditionQueryInertiaWorker @ 0x1402AE7B0 (EditionQueryInertiaWorker.c)
 * Callees:
 *     Feature_TouchpadPublicApis3__private_IsEnabledFallback @ 0x14027F264 (Feature_TouchpadPublicApis3__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadPublicApis3__private_featureState & 0x10) != 0 )
    return Feature_TouchpadPublicApis3__private_featureState & 1;
  else
    return Feature_TouchpadPublicApis3__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadPublicApis3__private_featureState,
             3LL);
}
