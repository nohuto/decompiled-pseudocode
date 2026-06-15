/*
 * XREFs of ??0CAPOServiceProvider@@QEAA@XZ @ 0x1400375CC
 * Callers:
 *     ??$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIServiceProvider@@@Z @ 0x140037510 (--$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@WRL@Microsoft@@QEAA@XZ @ 0x14003767C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ChainInterfaces@UIServiceProviderWr.c)
 */

CAPOServiceProvider *__fastcall CAPOServiceProvider::CAPOServiceProvider(CAPOServiceProvider *this)
{
  CAPOServiceProvider *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>();
  *(_QWORD *)this = &CAPOServiceProvider::`vftable';
  *((_QWORD *)this + 1) = &CAPOServiceProvider::`vftable'{for `IAudioProcessingObjectLoggingService'};
  *((_QWORD *)this + 2) = &CAPOServiceProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectRTQueueService>'};
  *((GUID *)this + 2) = GUID_00000000_0000_0000_0000_000000000000;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 48), 0, 0);
  *((_QWORD *)this + 11) = 0LL;
  result = this;
  *((_DWORD *)this + 24) = 0;
  return result;
}
