/*
 * XREFs of ??$MakeAndInitialize@VGamepadInterceptionHelper@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamepadInterceptionHelper@@@Z @ 0x180106B3C
 * Callers:
 *     ?Create@GamepadInterceptionHelper@@SA?AV?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ @ 0x180107F4C (-Create@GamepadInterceptionHelper@@SA-AV-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_4a364071ea75531430e6bf7b4cab72c1_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800844A8 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A76F4 (-InternalRelease@-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0GamepadInterceptionHelper@@QEAA@XZ @ 0x1801078FC (--0GamepadInterceptionHelper@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GamepadInterceptionHelper,GamepadInterceptionHelper,>(
        GamepadInterceptionHelper **a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  GamepadInterceptionHelper *v4; // rax
  GamepadInterceptionHelper *v5; // rdi
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  GamepadInterceptionHelper *v8; // [rsp+48h] [rbp+10h] BYREF
  void *v9; // [rsp+50h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  v8 = (GamepadInterceptionHelper *)v3;
  if ( v3 )
  {
    v9 = v3;
    v4 = GamepadInterceptionHelper::GamepadInterceptionHelper((GamepadInterceptionHelper *)v3);
    v5 = v4;
    v8 = v4;
    v7 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(GamepadInterceptionHelper *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>(&v7);
  return v2;
}
