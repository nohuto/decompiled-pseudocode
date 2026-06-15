/*
 * XREFs of ??1CAPOWrapperClient@@UEAA@XZ @ 0x18000BEEC
 * Callers:
 *     ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x18000BEB0 (--_GCAPOWrapperClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18000CB20 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAPOWrapperClient::~CAPOWrapperClient(CAPOWrapperClient *this)
{
  struct AudioSrvTelemetryProvider *v2; // rax
  LPCRITICAL_SECTION v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF

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
  v2 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v2 + 1),
    "SystemEffect_Release",
    (const char *const)this + 132);
  v3 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v3[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v3);
  LeaveCriticalSection(v3);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_DWORD *)this + 21) = -1073741823;
}
