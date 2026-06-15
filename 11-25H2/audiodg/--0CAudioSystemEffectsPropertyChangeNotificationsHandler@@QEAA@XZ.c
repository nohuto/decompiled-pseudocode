/*
 * XREFs of ??0CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAA@XZ @ 0x14003FCD0
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@$$QEAPEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Z @ 0x14003FB28 (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@A.c)
 * Callees:
 *     ??0?$forward_list@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x140034EC0 (--0-$forward_list@V-$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_retu.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140058050 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsProp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CAudioSystemEffectsPropertyChangeNotificationsHandler *__fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::CAudioSystemEffectsPropertyChangeNotificationsHandler(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>();
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable'{for `IAudioSystemEffectsPropertyChangeNotificationClient'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAudioSystemEffectsPropertyChangeNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CAudioSystemEffectsPropertyChangeNotificationsHandler::`vftable'{for `IAudioSystemEffectsPropertyChangeNotificationClient'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioSystemEffectsPropertyChangeNotificationClient>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  *((_WORD *)this + 28) = 0;
  *((_QWORD *)this + 11) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 96), 0, 0);
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>((_QWORD *)this + 22);
  *((_QWORD *)this + 23) = 0LL;
  return this;
}
