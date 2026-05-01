/*
 * XREFs of ??0ViewEventArgsForSwitch@@QEAA@XZ @ 0x180418128
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x180416224 (--$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@.c)
 * Callees:
 *     ??0ViewEventArgsBase@@QEAA@XZ @ 0x180019870 (--0ViewEventArgsBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

ViewEventArgsForSwitch *__fastcall ViewEventArgsForSwitch::ViewEventArgsForSwitch(ViewEventArgsForSwitch *this)
{
  ViewEventArgsBase::ViewEventArgsBase(this);
  *((_QWORD *)this + 11) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 1) = &ViewEventArgsForSwitch::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ViewEventArgsForSwitch::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 1) = &ViewEventArgsForSwitch::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 9) = &ViewEventArgsForSwitch::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>'};
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  return this;
}
