/*
 * XREFs of ??0TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x18006C5A8
 * Callers:
 *     ??$MakeAndInitialize@VTargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UITargetedContentActionInternal@2345@W4ActionServices@Actions@CreativeFramework@@AEAUActionContext@89@AEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Details@WRL@Microsoft@@YAJPEAPEAUITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@$$QEAW4ActionServices@Actions@CreativeFramework@@AEAUActionContext@9CreativeFramework@@AEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@7@@Z @ 0x18006AE94 (--$MakeAndInitialize@VTargetedContentActionInternalImpl@Internal@TargetedContent@Services@Window.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029498 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAA@XZ @ 0x18005FBA0 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::TargetedContentActionInternalImpl(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *)((char *)this + 8));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IInspectable'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IInspectable'};
  *v2 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
  *((_QWORD *)this + 5) = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  std::map<std::wstring,std::wstring>::map<std::wstring,std::wstring>((_QWORD *)this + 11);
  return this;
}
