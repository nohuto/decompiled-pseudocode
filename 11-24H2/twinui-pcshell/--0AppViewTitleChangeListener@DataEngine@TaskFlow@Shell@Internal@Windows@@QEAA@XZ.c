/*
 * XREFs of ??0AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x180404190
 * Callers:
 *     ??$MakeAndInitialize@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1804040D8 (--$MakeAndInitialize@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V12.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800305D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AppViewTitleChangeListener(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 32);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)((char *)this + 32));
  *((_QWORD *)this + 9) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveShellHookNotification,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveShellHookNotification,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveShellHookNotification,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveShellHookNotification,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveShellHookNotification,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveShellHookNotification,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveShellHookNotification,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener'};
  *v2 = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_OWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 7LL;
  *((_WORD *)this + 56) = 0;
  *((_DWORD *)this + 36) = 0;
  return this;
}
