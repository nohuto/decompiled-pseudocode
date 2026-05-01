/*
 * XREFs of ??$Make@U?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@@12@XZ @ 0x180415454
 * Callers:
 *     ??$CreateGitHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@@Details@Internal@Windows@@YAJPEAU?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@2@PEAPEAU3452@@Z @ 0x1804144CC (--$CreateGitHelper@U-$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@Applicatio.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800305D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0GitPtr@Internal@Windows@@QEAA@XZ @ 0x18030B4B4 (--0GitPtr@Internal@Windows@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Internal::GitPtr,2>,>(
        _QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v5 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x40uLL);
    *(_QWORD *)v3 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 2));
    v3[11] = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>'};
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Internal::GitPtr,2>::`vftable'{for `Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>'};
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    Windows::Internal::GitPtr::GitPtr((Windows::Internal::GitPtr *)(v3 + 12));
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
    v5 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v5);
  return a1;
}
