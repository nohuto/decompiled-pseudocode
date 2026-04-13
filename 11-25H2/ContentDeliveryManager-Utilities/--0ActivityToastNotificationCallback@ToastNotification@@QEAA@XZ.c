/*
 * XREFs of ??0ActivityToastNotificationCallback@ToastNotification@@QEAA@XZ @ 0x180066B98
 * Callers:
 *     ??$MakeAndInitialize@VActivityToastNotificationCallback@ToastNotification@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18006569C (--$MakeAndInitialize@VActivityToastNotificationCallback@ToastNotification@@UIUnknown@@$$V@Detail.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029498 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180066860 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeak_ea_180066860.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
ToastNotification::ActivityToastNotificationCallback *__fastcall ToastNotification::ActivityToastNotificationCallback::ActivityToastNotificationCallback(
        ToastNotification::ActivityToastNotificationCallback *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((ToastNotification::ActivityToastNotificationCallback *)((char *)this + 8));
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>>((__int64)(v2 + 4));
  *((_QWORD *)this + 9) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::`vftable';
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>>'};
  *((_QWORD *)this + 5) = &ToastNotification::ActivityToastNotificationCallback::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>>'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::`vftable'{for `INotificationActivationCallback'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ICDPActivityPublishCallback>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ToastNotification::ActivityToastNotificationCallback::`vftable';
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>>'};
  *((_QWORD *)this + 5) = &ToastNotification::ActivityToastNotificationCallback::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,INotificationActivationCallback,ICDPActivityPublishCallback>>'};
  *((_QWORD *)this + 6) = &ToastNotification::ActivityToastNotificationCallback::`vftable'{for `INotificationActivationCallback'};
  *((_QWORD *)this + 7) = &ToastNotification::ActivityToastNotificationCallback::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ICDPActivityPublishCallback>'};
  *((_QWORD *)this + 10) = 0LL;
  return this;
}
