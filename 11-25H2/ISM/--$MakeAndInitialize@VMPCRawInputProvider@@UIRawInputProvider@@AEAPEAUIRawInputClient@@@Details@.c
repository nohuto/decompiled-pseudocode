/*
 * XREFs of ??$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIRawInputProvider@@AEAPEAUIRawInputClient@@@Z @ 0x180095D00
 * Callers:
 *     ?Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800CCE00 (-Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18003285C (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180051810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180071F34 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIR_ea_180071F34.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_4a364071ea75531430e6bf7b4cab72c1_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180084488 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@.c)
 *     ??0MPCRawInputProvider@@QEAA@XZ @ 0x180095DB8 (--0MPCRawInputProvider@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCRawInputProvider,IRawInputProvider,IRawInputClient * &>(
        _QWORD *a1,
        struct IRawInputClient **a2)
{
  void *v4; // rax
  int v5; // edi
  MPCRawInputProvider *v6; // rbx
  volatile int *v7; // rdx
  volatile int *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  MPCRawInputProvider *v11; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>(&v10);
    return (unsigned int)v5;
  }
  v6 = MPCRawInputProvider::MPCRawInputProvider((MPCRawInputProvider *)v4);
  v11 = v6;
  v10 = 0LL;
  v5 = MPCRawInputProvider::RuntimeClassInitialize(v6, *a2);
  if ( v5 < 0 )
  {
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
        (__int64)v6,
        v7);
    goto LABEL_6;
  }
  v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider>>(
         (__int64)v6,
         &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8,
         a1);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
      (__int64)v6,
      v8);
  return (unsigned int)v5;
}
