/*
 * XREFs of ??1?$ComPtr@VCActionCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18036BF98
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CActionCenterExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1806E45FF (_Microsoft--WRL--Details--MakeAndInitialize_CActionCenterExperienceManager_IInspectable_IService.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@6789@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C1810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CActionCenterExperienceManager>::~ComPtr<CActionCenterExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
