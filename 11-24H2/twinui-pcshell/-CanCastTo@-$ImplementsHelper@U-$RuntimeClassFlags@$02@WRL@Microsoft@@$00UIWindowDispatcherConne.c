/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18041DA74
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180413F28 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVi_ea_180413F28.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18041D988 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_18041D988.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  const struct _GUID *v5; // rcx
  _QWORD *v6; // r8
  const struct _GUID *v7; // r9
  __int64 v8; // r10
  __int64 result; // rax
  const struct _GUID *v10; // rcx
  _DWORD *v11; // r9

  if ( InlineIsEqualGUID(a2, &GUID_f12382e8_15a2_49d0_8c5d_5f886a12cb9c)
    || InlineIsEqualGUID(v2, &GUID_f3305f7e_8b9b_41f2_be95_4e832447c357) )
  {
    goto LABEL_8;
  }
  if ( InlineIsEqualGUID(v5, &GUID_73d6c545_9771_4aba_bb8c_713133ed635a) )
  {
    *v6 = v8 + 8;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( !InlineIsEqualGUID(v7, &GUID_030de2aa_3f4c_47de_9c7b_0bada6462586)
      && !InlineIsEqualGUID(v10, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c) )
    {
      return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>,Microsoft::WRL::FtmBase>::CanCastTo(
               v4 + 8,
               v11,
               v3);
    }
LABEL_8:
    *v3 = v4;
    return 0LL;
  }
  return result;
}
