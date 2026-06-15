/*
 * XREFs of ??1CSystemEffectWrapper@@UEAA@XZ @ 0x1400391A8
 * Callers:
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140039150 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSystemEffectWrapper::~CSystemEffectWrapper(CSystemEffectWrapper *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CSystemEffectWrapper::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioProcessingObject,IWeakReferenceSource,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 2) = &CSystemEffectWrapper::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 4) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectRT'};
  *((_QWORD *)this + 5) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 6) = &CSystemEffectWrapper::`vftable'{for `IApoAuxiliaryInputConfiguration'};
  *((_QWORD *)this + 7) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 8) = &CSystemEffectWrapper::`vftable'{for `IApoAcousticEchoCancellation'};
  *((_QWORD *)this + 9) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 10) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectPreferredFormatSupport'};
  *((_QWORD *)this + 11) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 12) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectNotifications2'};
  *((_QWORD *)this + 13) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAPOWrapperSrv>'};
  *((_QWORD *)this + 16) = &CSystemEffectWrapper::`vftable';
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
  CoTaskMemFree(*((LPVOID *)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioProcessingObject,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioProcessingObject,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>(this);
}
