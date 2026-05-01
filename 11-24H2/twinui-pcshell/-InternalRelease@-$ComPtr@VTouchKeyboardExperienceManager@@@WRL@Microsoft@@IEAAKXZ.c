/*
 * XREFs of ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CE054
 * Callers:
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801EC530 (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 *     ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802362C0 (-CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0D60 (--1-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804700C0 (-AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     ?RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z @ 0x1804738A8 (-RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z.c)
 *     ?RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804740E0 (-RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180474600 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017E290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18017E290.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
