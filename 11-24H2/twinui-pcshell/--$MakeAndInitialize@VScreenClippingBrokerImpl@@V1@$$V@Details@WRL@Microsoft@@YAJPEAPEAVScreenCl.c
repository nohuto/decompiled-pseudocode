/*
 * XREFs of ??$MakeAndInitialize@VScreenClippingBrokerImpl@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenClippingBrokerImpl@@@Z @ 0x18054BF1C
 * Callers:
 *     ?CreateScreenClippingBroker@@YAJAEAV?$ComPtr@UIScreenClippingBroker@@@WRL@Microsoft@@@Z @ 0x18054C254 (-CreateScreenClippingBroker@@YAJAEAV-$ComPtr@UIScreenClippingBroker@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800305D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180219B40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IMap@PEAUHSTRING.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ScreenClippingBrokerImpl,ScreenClippingBrokerImpl,>(
        _QWORD *a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v7 = v3;
  if ( v3 )
  {
    v5 = v3 + 1;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 1));
    v4[8] = 1LL;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IScreenClippingBroker>::`vftable'{for `IInspectable'};
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IScreenClippingBroker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,IScreenClippingBroker>'};
    v4[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IScreenClippingBroker>::`vftable'{for `IWeakReferenceSource'};
    v4[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IScreenClippingBroker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IScreenClippingBroker>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v4 = &ScreenClippingBrokerImpl::`vftable'{for `IInspectable'};
    *v5 = &ScreenClippingBrokerImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,IScreenClippingBroker>'};
    v4[5] = &ScreenClippingBrokerImpl::`vftable'{for `IWeakReferenceSource'};
    v4[6] = &ScreenClippingBrokerImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IScreenClippingBroker>'};
    v8 = v4;
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Microsoft::WRL::FtmBase>::AddRef((__int64)v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return v2;
}
