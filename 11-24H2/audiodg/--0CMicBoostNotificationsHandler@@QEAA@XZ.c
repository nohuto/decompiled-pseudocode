/*
 * XREFs of ??0CMicBoostNotificationsHandler@@QEAA@XZ @ 0x1400617F0
 * Callers:
 *     ??$MakeAndInitialize@VCMicBoostNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCMicBoostNotificationsHandler@@AEAPEAUIMMDevice@@@Z @ 0x140060FB8 (--$MakeAndInitialize@VCMicBoostNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft.c)
 * Callees:
 *     ??0?$forward_list@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x140034BC0 (--0-$forward_list@V-$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_retu.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140057F10 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsProp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMicBoostNotificationsHandler *__fastcall CMicBoostNotificationsHandler::CMicBoostNotificationsHandler(
        CMicBoostNotificationsHandler *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IControlChangeNotify>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IControlChangeNotify>::`vftable'{for `IControlChangeNotify'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IControlChangeNotify>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CMicBoostNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CMicBoostNotificationsHandler::`vftable'{for `IControlChangeNotify'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IControlChangeNotify>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 72), 0, 0);
  *((_BYTE *)this + 112) = 0;
  std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>((_QWORD *)this + 15);
  *((_QWORD *)this + 16) = 0LL;
  return this;
}
