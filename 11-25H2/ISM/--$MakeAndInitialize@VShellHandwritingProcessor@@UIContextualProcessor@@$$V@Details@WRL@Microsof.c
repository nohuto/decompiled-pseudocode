/*
 * XREFs of ??$MakeAndInitialize@VShellHandwritingProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x1800845B4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_4a364071ea75531430e6bf7b4cab72c1_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180084488 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@.c)
 *     ??0ShellHandwritingProcessor@@QEAA@XZ @ 0x180095C90 (--0ShellHandwritingProcessor@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1801A7F58 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellHandwritingProcessor,IContextualProcessor,>(
        _QWORD *a1)
{
  void *v2; // rax
  ShellHandwritingProcessor *v4; // rdi
  int v5; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  ShellHandwritingProcessor *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = ShellHandwritingProcessor::ShellHandwritingProcessor((ShellHandwritingProcessor *)v2);
  v7 = v4;
  v6 = 0LL;
  v5 = ShellHandwritingProcessor::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(ShellHandwritingProcessor *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
           a1);
    (*(void (__fastcall **)(ShellHandwritingProcessor *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else if ( v4 )
  {
    (*(void (__fastcall **)(ShellHandwritingProcessor *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>(&v6);
  return (unsigned int)v5;
}
