/*
 * XREFs of ??0SearchAppExperienceManagerNotification@@QEAA@PEAVSearchAppExperienceManager@@@Z @ 0x1803AA840
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803AB510 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VICortanaExperienceManagerNotification@Cortana@TwinUI@@UIClosable@Foundation@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180379750 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VICortanaExperienceManag.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

SearchAppExperienceManagerNotification *__fastcall SearchAppExperienceManagerNotification::SearchAppExperienceManagerNotification(
        SearchAppExperienceManagerNotification *this,
        struct SearchAppExperienceManager *a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::Cortana::ICortanaExperienceManagerNotification,Windows::Foundation::IClosable>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::Cortana::ICortanaExperienceManagerNotification,Windows::Foundation::IClosable>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ISearchAppExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ISearchAppExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ISearchAppExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ISearchAppExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ISearchAppExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SearchAppExperienceManagerNotification::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &SearchAppExperienceManagerNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ISearchAppExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ISearchAppExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &SearchAppExperienceManagerNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 6) = a2;
  return this;
}
