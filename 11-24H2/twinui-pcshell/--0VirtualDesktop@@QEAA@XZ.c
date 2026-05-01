/*
 * XREFs of ??0VirtualDesktop@@QEAA@XZ @ 0x1800933A0
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktop@@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1800931BC (--$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktop2@5678@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180093CCC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktop@Multitasking@Composab.c)
 */

VirtualDesktop *__fastcall VirtualDesktop::VirtualDesktop(VirtualDesktop *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop2,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop2,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &VirtualDesktop::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop'};
  *((_QWORD *)this + 1) = &VirtualDesktop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop2,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &VirtualDesktop::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop2'};
  *((_QWORD *)this + 3) = &VirtualDesktop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &VirtualDesktop::`vftable'{for `IVirtualDesktopInternal'};
  *((_QWORD *)this + 5) = &VirtualDesktop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 11) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 12);
  InitializeSRWLock((PSRWLOCK)this + 13);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  InitializeSRWLock((PSRWLOCK)this + 35);
  return this;
}
