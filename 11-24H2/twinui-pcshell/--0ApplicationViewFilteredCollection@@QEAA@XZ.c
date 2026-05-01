/*
 * XREFs of ??0ApplicationViewFilteredCollection@@QEAA@XZ @ 0x1802A1C98
 * Callers:
 *     ??$MakeAndInitialize@VApplicationViewFilteredCollection@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIObjectCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewFilteredCollection@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIObjectCollection@@@Z @ 0x1801BEC00 (--$MakeAndInitialize@VApplicationViewFilteredCollection@@V1@AEAPEAUIApplicationViewCollection@@A.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800305D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CGITRegistrationList@@QEAA@XZ @ 0x1800790C8 (--0CGITRegistrationList@@QEAA@XZ.c)
 *     ??0?$Selector@VApplicationViewCollectionBase@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VApplicationViewCollectionBase@@@Details@23@UIApplicationViewChangeListener@@UIApplicationViewVisibilityDebouncedNotificationService@@VFtmBase@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802A1D90 (--0-$Selector@VApplicationViewCollectionBase@@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@M.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
ApplicationViewFilteredCollection *__fastcall ApplicationViewFilteredCollection::ApplicationViewFilteredCollection(
        ApplicationViewFilteredCollection *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi

  Microsoft::WRL::Details::Selector<ApplicationViewCollectionBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ApplicationViewCollectionBase>,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>>::Selector<ApplicationViewCollectionBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ApplicationViewCollectionBase>,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>>();
  v3 = (_QWORD *)(v2 + 16);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 32));
  *((_DWORD *)this + 17) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ApplicationViewCollectionBase,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<ApplicationViewCollectionBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ApplicationViewCollectionBase>,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ApplicationViewCollectionBase,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ApplicationViewCollectionBase>,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ApplicationViewCollectionBase,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationViewVisibilityDebouncedNotificationService'};
  *((_QWORD *)this + 4) = &ApplicationViewFilteredCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ApplicationViewFilteredCollection::`vftable'{for `Microsoft::WRL::Details::Selector<ApplicationViewCollectionBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ApplicationViewCollectionBase>,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>>'};
  *v3 = &ApplicationViewFilteredCollection::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ApplicationViewCollectionBase>,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 3) = &ApplicationViewFilteredCollection::`vftable'{for `IApplicationViewVisibilityDebouncedNotificationService'};
  *((_QWORD *)this + 4) = &ApplicationViewFilteredCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = v3;
  CGITRegistrationList::CGITRegistrationList((ApplicationViewFilteredCollection *)((char *)this + 128));
  *((_DWORD *)this + 44) = SHTaskPoolGetUniqueContext();
  *((_QWORD *)this + 23) = 0LL;
  return this;
}
