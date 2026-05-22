/*
 * XREFs of ??$MakeAndInitialize@VAnimationDataProvider@@UIAnimationDataProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAnimationDataProvider@@@Z @ 0x18000CFF0
 * Callers:
 *     ?Create@AnimationDataProvider@@SA?AV?$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ @ 0x18008DC5C (-Create@AnimationDataProvider@@SA-AV-$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@AnimationDataProvider@@QEAAJXZ @ 0x18000E7D8 (-RuntimeClassInitialize@AnimationDataProvider@@QEAAJXZ.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_4a364071ea75531430e6bf7b4cab72c1_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180084488 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AnimationDataProvider@@QEAA@XZ @ 0x1800FEB48 (--0AnimationDataProvider@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AnimationDataProvider,IAnimationDataProvider,>(
        _QWORD *a1)
{
  AnimationDataProvider *v2; // rax
  int v3; // ebx
  AnimationDataProvider *v4; // rdi
  AnimationDataProvider *v6; // [rsp+30h] [rbp+8h] BYREF
  AnimationDataProvider *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (AnimationDataProvider *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = AnimationDataProvider::AnimationDataProvider(v2);
    v7 = v4;
    v6 = 0LL;
    v3 = AnimationDataProvider::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      v3 = (**(__int64 (__fastcall ***)(AnimationDataProvider *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_c2b8d4a1_8c81_48a7_b9ab_171b2a64dd6e,
             a1);
      (*(void (__fastcall **)(AnimationDataProvider *))(*(_QWORD *)v4 + 16LL))(v4);
      return (unsigned int)v3;
    }
    if ( v4 )
      (*(void (__fastcall **)(AnimationDataProvider *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>(&v6);
  return (unsigned int)v3;
}
