/*
 * XREFs of ??1?$ComPtr@VCControlCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CC458
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CControlCenterExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1806D3793 (_Microsoft--WRL--Details--MakeAndInitialize_CControlCenterExperienceManager_IInspec_ea_1806D3793.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputSwitchHost@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022A5D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_18022A5D0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CControlCenterExperienceManager>::~ComPtr<CControlCenterExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
