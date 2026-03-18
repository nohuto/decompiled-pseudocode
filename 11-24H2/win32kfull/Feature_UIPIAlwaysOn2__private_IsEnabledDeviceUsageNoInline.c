/*
 * XREFs of Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x140041720 (xxxProcessNotifyWinEvent.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     _PostThreadMessageEx @ 0x1401A04CC (_PostThreadMessageEx.c)
 *     _ChangeWindowMessageFilter @ 0x1401DB60C (_ChangeWindowMessageFilter.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14022FDC8 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402396A8 (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     zzzSetDesktop @ 0x14023D170 (zzzSetDesktop.c)
 *     NtUserMagSetContextInformation @ 0x1402436C0 (NtUserMagSetContextInformation.c)
 *     NtUserPostThreadMessage @ 0x140244040 (NtUserPostThreadMessage.c)
 *     _ChangeWindowMessageFilterEx @ 0x14024ED84 (_ChangeWindowMessageFilterEx.c)
 *     ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x140283CE0 (-zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH.c)
 *     ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x140290CB8 (-GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z.c)
 *     NtUserGetSendMessageReceiver @ 0x140296E60 (NtUserGetSendMessageReceiver.c)
 *     NtUserGetWindowProcessHandle @ 0x140297C90 (NtUserGetWindowProcessHandle.c)
 *     NtUserRegisterPointerInputTarget @ 0x14029B410 (NtUserRegisterPointerInputTarget.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z @ 0x1402AEC78 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402BF08C (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x1402DCAB4 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     Feature_UIPIAlwaysOn2__private_IsEnabledFallback @ 0x140274F04 (Feature_UIPIAlwaysOn2__private_IsEnabledFallback.c)
 */

__int64 Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UIPIAlwaysOn2__private_featureState & 0x10) != 0 )
    return Feature_UIPIAlwaysOn2__private_featureState & 1;
  else
    return Feature_UIPIAlwaysOn2__private_IsEnabledFallback(
             (unsigned int)Feature_UIPIAlwaysOn2__private_featureState,
             3LL);
}
