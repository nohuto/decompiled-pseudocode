/*
 * XREFs of ??0AudioModeEffectsWatcher@@QEAA@XZ @ 0x1800B4E50
 * Callers:
 *     ??$MakeAndInitialize@VAudioModeEffectsWatcher@@UIAudioModeEffectsWatcher@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioModeEffectsWatcher@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAU_GUID@@@Z @ 0x18002AF20 (--$MakeAndInitialize@VAudioModeEffectsWatcher@@UIAudioModeEffectsWatcher@@AEAPEAUEndpointCharact.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18000D504 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
AudioModeEffectsWatcher *__fastcall AudioModeEffectsWatcher::AudioModeEffectsWatcher(AudioModeEffectsWatcher *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioModeEffectsWatcher>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioModeEffectsWatcher>::`vftable'{for `IAudioModeEffectsWatcher'};
  *((_QWORD *)this + 2) = &AudioModeEffectsWatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &AudioModeEffectsWatcher::`vftable';
  *((_QWORD *)this + 1) = &AudioModeEffectsWatcher::`vftable'{for `IAudioModeEffectsWatcher'};
  *((_QWORD *)this + 2) = &AudioModeEffectsWatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((GUID *)this + 3) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return this;
}
