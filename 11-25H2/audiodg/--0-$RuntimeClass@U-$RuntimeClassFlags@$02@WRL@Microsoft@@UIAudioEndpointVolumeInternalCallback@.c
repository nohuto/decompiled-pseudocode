/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIAudioEndpointVolumeInternalCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x140057FF8
 * Callers:
 *     ??0CAPOEndpointNotificationsHandler@@QEAA@XZ @ 0x14003FE5C (--0CAPOEndpointNotificationsHandler@@QEAA@XZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140058050 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsProp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeInternalCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeInternalCallback>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>();
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeInternalCallback>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeInternalCallback>::`vftable'{for `IAudioEndpointVolumeInternalCallback'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeInternalCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
