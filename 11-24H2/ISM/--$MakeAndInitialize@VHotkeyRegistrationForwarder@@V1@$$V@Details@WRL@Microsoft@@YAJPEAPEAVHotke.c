/*
 * XREFs of ??$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x18007907C
 * Callers:
 *     ?Create@HotkeyRegistrationForwarder@@SA?AV?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@XZ @ 0x1801064EC (-Create@HotkeyRegistrationForwarder@@SA-AV-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ @ 0x180079134 (-RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ.c)
 *     ??0HotkeyRegistrationForwarder@@QEAA@XZ @ 0x180079268 (--0HotkeyRegistrationForwarder@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_4a364071ea75531430e6bf7b4cab72c1_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800844A8 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotkeyRegistrationForwarder,HotkeyRegistrationForwarder,>(
        HotkeyRegistrationForwarder **a1)
{
  unsigned int v2; // ebx
  HotkeyRegistrationForwarder *v3; // rax
  HotkeyRegistrationForwarder *v4; // rdi
  int v5; // esi
  HotkeyRegistrationForwarder *v7; // [rsp+40h] [rbp+8h] BYREF
  HotkeyRegistrationForwarder *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (HotkeyRegistrationForwarder *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( !v3 )
  {
    v2 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>(&v7);
    return v2;
  }
  v4 = HotkeyRegistrationForwarder::HotkeyRegistrationForwarder(v3);
  v8 = v4;
  v7 = 0LL;
  v5 = HotkeyRegistrationForwarder::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    if ( v4 )
      (*(void (__fastcall **)(HotkeyRegistrationForwarder *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    goto LABEL_10;
  }
  if ( v4 )
    (*(void (__fastcall **)(HotkeyRegistrationForwarder *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
