/*
 * XREFs of ??$MakeAndInitialize@VDelegatedInkCanvasProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDelegatedInkCanvasProcessor@@@Z @ 0x180082038
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??$?0U?$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@$$T@Z @ 0x18005DF90 (--$-0U-$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@-$unique_ptr@VCSharedCircularQu.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIContextualProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1800820D4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIContextualProcessor@@@WRL@Microsoft@.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_4a364071ea75531430e6bf7b4cab72c1_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180084488 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DelegatedInkCanvasProcessor,DelegatedInkCanvasProcessor,>(
        _QWORD *a1)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v5 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>(v2);
    *(_QWORD *)v3 = &DelegatedInkCanvasProcessor::`vftable';
    v3[16] = 1;
    *((_QWORD *)v3 + 3) = 0LL;
    std::unique_ptr<CSharedCircularQueueProducer>::unique_ptr<CSharedCircularQueueProducer>((_QWORD *)v3 + 4);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 8LL))(v3);
    *a1 = v3;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 16LL))(v3);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>(&v5);
    return 2147942414LL;
  }
}
