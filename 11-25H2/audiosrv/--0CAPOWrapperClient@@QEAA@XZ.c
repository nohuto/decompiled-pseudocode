/*
 * XREFs of ??0CAPOWrapperClient@@QEAA@XZ @ 0x180056C40
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180056B5C (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 * Callees:
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180056F88 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180057010 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIApoAcousticEchoCancellation2@@UIAudioProcessingObjectPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A2EBC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAPOWrapperClient@@UIAudioProcessingO.c)
 */

// Hidden C++ exception states: #wind=4
CAPOWrapperClient *__fastcall CAPOWrapperClient::CAPOWrapperClient(CAPOWrapperClient *this)
{
  LPCRITICAL_SECTION v2; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>();
  *(_QWORD *)this = &CAPOWrapperClient::`vftable'{for `IAPOWrapperClient'};
  *((_QWORD *)this + 1) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 2) = &CAPOWrapperClient::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)this + 3) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 4) = &CAPOWrapperClient::`vftable'{for `IApoAuxiliaryInputConfiguration'};
  *((_QWORD *)this + 5) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 6) = &CAPOWrapperClient::`vftable'{for `IApoAcousticEchoCancellation'};
  *((_QWORD *)this + 7) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 8) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObjectPreferredFormatSupport'};
  *((_QWORD *)this + 9) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *(_OWORD *)((char *)this + 132) = 0LL;
  *(_OWORD *)((char *)this + 148) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_WORD *)this + 84) = 0;
  *((_BYTE *)this + 170) = 0;
  v2 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( ++LODWORD(v2[1].DebugInfo) == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer((CAudioDGProcess *)v2);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v2);
  }
  LeaveCriticalSection(v2);
  return this;
}
