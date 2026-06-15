/*
 * XREFs of ??0CExclusiveStreamGroupProxy@@QEAA@XZ @ 0x180059060
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18008788C (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteris.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x180059778 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@.c)
 */

CExclusiveStreamGroupProxy *__fastcall CExclusiveStreamGroupProxy::CExclusiveStreamGroupProxy(
        CExclusiveStreamGroupProxy *this)
{
  CExclusiveStreamGroupProxy *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>();
  *(_QWORD *)this = &CExclusiveStreamGroupProxy::`vftable';
  *((_QWORD *)this + 1) = &CExclusiveStreamGroupProxy::`vftable'{for `IStreamGroupProxy'};
  *((_QWORD *)this + 2) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioGraphCallback>'};
  *((_QWORD *)this + 41) = &CExclusiveStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 42) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  result = this;
  *((_QWORD *)this + 87) = 0LL;
  return result;
}
