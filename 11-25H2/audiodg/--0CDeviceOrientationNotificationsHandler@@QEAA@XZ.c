/*
 * XREFs of ??0CDeviceOrientationNotificationsHandler@@QEAA@XZ @ 0x140061840
 * Callers:
 *     ??$Make@VCDeviceOrientationNotificationsHandler@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceOrientationNotificationsHandler@@@12@XZ @ 0x140060F5C (--$Make@VCDeviceOrientationNotificationsHandler@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCDevi.c)
 * Callees:
 *     ??0?$forward_list@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x140034EC0 (--0-$forward_list@V-$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_retu.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140058050 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsProp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDeviceOrientationNotificationsHandler *__fastcall CDeviceOrientationNotificationsHandler::CDeviceOrientationNotificationsHandler(
        CDeviceOrientationNotificationsHandler *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceOrientationNotificationsCallback>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceOrientationNotificationsCallback>::`vftable'{for `IDeviceOrientationNotificationsCallback'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceOrientationNotificationsCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDeviceOrientationNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CDeviceOrientationNotificationsHandler::`vftable'{for `IDeviceOrientationNotificationsCallback'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceOrientationNotificationsCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 1, 0, 0);
  *((_QWORD *)this + 10) = 0LL;
  std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>((_QWORD *)this + 11);
  *((_QWORD *)this + 12) = 0LL;
  return this;
}
