/*
 * XREFs of ??$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL@Microsoft@@YAJPEAPEAVActivationContext@@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@$$QEA_N@Z @ 0x1801A460C
 * Callers:
 *     ?OnHitTest@ActivationProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801A47E0 (-OnHitTest@ActivationProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_4a364071ea75531430e6bf7b4cab72c1_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800844A8 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BCB18 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ActivationContext,ActivationContext,enum SPATIAL_INPUT_ACTIVATION_POLICY &,bool>(
        __int64 *a1,
        _DWORD *a2,
        char *a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  char v10; // cl
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v7 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (__int64)v7;
  v12 = v7;
  if ( v7 )
  {
    v9 = v7 + 2;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>((__int64)(v7 + 2));
    *(_QWORD *)(v8 + 64) = 1LL;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
    *(_QWORD *)(v8 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IActivationContext,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
    *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v8 + 24) = &ActivationContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v8 = &ActivationContext::`vftable'{for `IInspectable'};
    *(_QWORD *)(v8 + 8) = &ActivationContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IActivationContext,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
    *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v8 + 24) = &ActivationContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v12 = 0LL;
    v10 = *a3;
    *(_DWORD *)(v8 + 72) = *a2;
    *(_BYTE *)(v8 + 76) = v10;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IActivationContext,Microsoft::WRL::FtmBase>::AddRef(v8);
    *a1 = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>(&v12);
  return v6;
}
