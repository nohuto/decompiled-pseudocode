/*
 * XREFs of ??$MakeAndInitialize@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1800A8824
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800A8A60 (-ActivateInstance@-$SimpleActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationMo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800224A0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029FC0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18004209C (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInfoProvider@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8EB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInf.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInfoProvider@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A8F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInfoProvid.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider,IInspectable,>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int Interface; // edi
  _QWORD *v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v7 = v2;
  if ( v2 )
  {
    v5 = v2 + 1;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>((__int64)(v2 + 1));
    v3[7] = 1LL;
    *v3 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable';
    *v5 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    v3[2] = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v3 = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::`vftable';
    *v5 = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::`vftable'{for `IWeakReferenceSource'};
    v3[2] = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v7 = 0LL;
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::QueryInterface(
                  v3,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::Release(v3);
  }
  else
  {
    Interface = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v7);
  return Interface;
}
