/*
 * XREFs of ??0CSharedStreamGroupProxy@@QEAA@XZ @ 0x18004B7B0
 * Callers:
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKPEAUIAudioModeEffectsWatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK$$QEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x18004B234 (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristic.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B8E8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@.c)
 */

CSharedStreamGroupProxy *__fastcall CSharedStreamGroupProxy::CSharedStreamGroupProxy(CSharedStreamGroupProxy *this)
{
  CSharedStreamGroupProxy *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>();
  *(_QWORD *)this = &CExclusiveStreamGroupProxy::`vftable';
  *((_QWORD *)this + 1) = &CSharedStreamGroupProxy::`vftable'{for `IStreamGroupProxy'};
  *((_QWORD *)this + 2) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioGraphCallback>'};
  *((_QWORD *)this + 41) = &CExclusiveStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 42) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 376), 0, 0);
  *((_BYTE *)this + 416) = 0;
  *(_OWORD *)((char *)this + 424) = 0LL;
  *((_DWORD *)this + 110) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  *((_DWORD *)this + 346) = 0;
  *((_QWORD *)this + 174) = 0LL;
  *((_QWORD *)this + 212) = 0LL;
  *((_QWORD *)this + 213) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
  *(GUID *)((char *)this + 1720) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 217) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 1752), 0, 0);
  *((_QWORD *)this + 224) = 0LL;
  result = this;
  *((_QWORD *)this + 225) = 0LL;
  *((_QWORD *)this + 226) = 0LL;
  return result;
}
