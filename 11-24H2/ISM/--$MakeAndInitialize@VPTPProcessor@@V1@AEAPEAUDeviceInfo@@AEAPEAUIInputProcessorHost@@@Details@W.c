/*
 * XREFs of ??$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YAJPEAPEAVPTPProcessor@@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Z @ 0x1801C56C0
 * Callers:
 *     ?Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801C5960 (-Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_4a364071ea75531430e6bf7b4cab72c1_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800844A8 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcessorDeviceQueryRemove@@@WRL@Microsoft@@QEAA@XZ @ 0x1800977D0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcessorDevi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801C5BF0 (-RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PTPProcessor,PTPProcessor,DeviceInfo * &,IInputProcessorHost * &>(
        PTPProcessor **a1,
        struct DeviceInfo **a2,
        struct IInputProcessorHost **a3)
{
  PTPProcessor *v6; // rax
  PTPProcessor *v7; // rbx
  int v8; // edi
  PTPProcessor *v10; // [rsp+40h] [rbp+8h] BYREF
  PTPProcessor *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (PTPProcessor *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v11 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceQueryRemove>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceQueryRemove>((__int64)v6);
    *(_QWORD *)v7 = &PTPProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v7 + 1) = &PTPProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceQueryRemove>'};
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
    v10 = v7;
    v11 = 0LL;
    v8 = PTPProcessor::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(PTPProcessor *))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
      v8 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>((void **)&v11);
  return (unsigned int)v8;
}
