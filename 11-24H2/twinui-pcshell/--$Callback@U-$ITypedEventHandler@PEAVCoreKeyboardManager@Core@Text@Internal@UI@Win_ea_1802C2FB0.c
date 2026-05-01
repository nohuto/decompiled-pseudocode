/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerPrimaryViewShowingResponseEventArgs@23456@@Foundation@Windows@@UTabTipAdapter@KeyboardHosting@@PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@789UI@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerPrimaryViewShowingResponseEventArgs@23456@@Foundation@Windows@@@01@PEAUTabTipAdapter@KeyboardHosting@@P834@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@6789Windows@@@Z@Z @ 0x1802C2FB0
 * Callers:
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801D5198 (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerPrimaryViewShowingResponseEventArgs@23456@@Foundation@Windows@@V_lambda_262aa59f95962a3637742b514c35894a_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerPrimaryViewShowingResponseEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@56783@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_262aa59f95962a3637742b514c35894a_@@@Z @ 0x1802B1B88 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@I_ea_1802B1B88.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerPrimaryViewShowingResponseEventArgs *>,KeyboardHosting::TabTipAdapter,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]

  v3 = *a3;
  v8 = a2;
  v9 = v3;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerPrimaryViewShowingResponseEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerPrimaryViewShowingResponseEventArgs *>,_lambda_262aa59f95962a3637742b514c35894a_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerPrimaryViewShowingResponseEventArgs *>,_lambda_262aa59f95962a3637742b514c35894a_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *>(
           (__int64)v5,
           (__int64)&v8);
  *a1 = v6;
  return a1;
}
