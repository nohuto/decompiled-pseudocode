/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCSnapAssistControllerBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1802002B4
 * Callers:
 *     ??0CSnapAssistController@@QEAA@XZ @ 0x18020023C (--0CSnapAssistController@@QEAA@XZ.c)
 * Callees:
 *     ??0CSnapAssistControllerBase@@QEAA@XZ @ 0x18020035C (--0CSnapAssistControllerBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>(
        _QWORD *a1)
{
  CSnapAssistControllerBase::CSnapAssistControllerBase((CSnapAssistControllerBase *)(a1 + 1));
  a1[43] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>::`vftable'{for `IInspectable'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>::`vftable'{for `ISnapAssistController'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapAssistControllerPrivate,ISnapAssistCallback,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  a1[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>::`vftable'{for `ISnapAssistCallback'};
  a1[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  a1[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>::`vftable'{for `Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2'};
  a1[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>'};
  a1[41] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CSnapAssistControllerBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CSnapAssistControllerBase>,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
