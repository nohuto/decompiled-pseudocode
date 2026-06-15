/*
 * XREFs of ??0CAPOEnvironmentStateChangedNotificationsHandler@@QEAA@XZ @ 0x1400616A4
 * Callers:
 *     ??$MakeAndInitialize@VCAPOEnvironmentStateChangedNotificationsHandler@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@AEAPEBG@Z @ 0x140060EF0 (--$MakeAndInitialize@VCAPOEnvironmentStateChangedNotificationsHandler@@V1@AEAPEBG@Details@WRL@Mi.c)
 * Callees:
 *     ??0?$forward_list@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x140034BC0 (--0-$forward_list@V-$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_retu.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140057F10 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsProp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CAPOEnvironmentStateChangedNotificationsHandler *__fastcall CAPOEnvironmentStateChangedNotificationsHandler::CAPOEnvironmentStateChangedNotificationsHandler(
        CAPOEnvironmentStateChangedNotificationsHandler *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISpatialStatusChangedNotificationsCallback>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISpatialStatusChangedNotificationsCallback>::`vftable'{for `ISpatialStatusChangedNotificationsCallback'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISpatialStatusChangedNotificationsCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAPOEnvironmentStateChangedNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CAPOEnvironmentStateChangedNotificationsHandler::`vftable'{for `ISpatialStatusChangedNotificationsCallback'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISpatialStatusChangedNotificationsCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 48), 0, 0);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>((_QWORD *)this + 13);
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
