/*
 * XREFs of ??0CAPOProcessingHostObject@@QEAA@XZ @ 0x14001901C
 * Callers:
 *     ??$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOProcessingHostObject@@AEAPEAUIAudioProcessingObject@@@Z @ 0x140018E98 (--$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@M.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x140019074 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

CAPOProcessingHostObject *__fastcall CAPOProcessingHostObject::CAPOProcessingHostObject(CAPOProcessingHostObject *this)
{
  CAPOProcessingHostObject *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>();
  *(_QWORD *)this = &CAPOProcessingHostObject::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 1, 0, 0);
  *((_QWORD *)this + 10) = 0LL;
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
