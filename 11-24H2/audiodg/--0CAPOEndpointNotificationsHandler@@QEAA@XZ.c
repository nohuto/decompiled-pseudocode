/*
 * XREFs of ??0CAPOEndpointNotificationsHandler@@QEAA@XZ @ 0x14003FB5C
 * Callers:
 *     ??$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsHandler@@AEAPEAUIMMDevice@@@Z @ 0x14003FAB8 (--$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Micros.c)
 * Callees:
 *     ??0?$forward_list@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x140034BC0 (--0-$forward_list@V-$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_retu.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIAudioEndpointVolumeInternalCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x140057EB8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIAudioEndpointVolumeInternalCallback@.c)
 */

CAPOEndpointNotificationsHandler *__fastcall CAPOEndpointNotificationsHandler::CAPOEndpointNotificationsHandler(
        CAPOEndpointNotificationsHandler *this)
{
  CAPOEndpointNotificationsHandler *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeInternalCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeInternalCallback>();
  *(_QWORD *)this = &CAPOEndpointNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CAPOEndpointNotificationsHandler::`vftable'{for `IAudioEndpointVolumeInternalCallback'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeInternalCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 48), 0, 0);
  std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>((_QWORD *)this + 11);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 96), 0, 0);
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 18) = 0LL;
  std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>((_QWORD *)this + 19);
  std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>((_QWORD *)this + 20);
  *((_QWORD *)this + 21) = 0LL;
  result = this;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  return result;
}
