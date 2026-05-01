/*
 * XREFs of ??0ViewHostItemPropertyChangedArgs@@QEAA@XZ @ 0x180407AA0
 * Callers:
 *     ??$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemPropertyChangedArgs@@AEAY0BC@$$CBG@Z @ 0x180406B4C (--$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ??0ViewHostItemEventArgsBase@@QEAA@XZ @ 0x180407A58 (--0ViewHostItemEventArgsBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
ViewHostItemPropertyChangedArgs *__fastcall ViewHostItemPropertyChangedArgs::ViewHostItemPropertyChangedArgs(
        ViewHostItemPropertyChangedArgs *this)
{
  ViewHostItemEventArgsBase::ViewHostItemEventArgsBase(this);
  *((_QWORD *)this + 11) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ViewHostItemPropertyChangedArgs::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 9) = &ViewHostItemPropertyChangedArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>'};
  *((_QWORD *)this + 12) = 0LL;
  return this;
}
