/*
 * XREFs of ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x1800D07B4
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800D0538 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800D07D4 (--1SpectrumListener@@UEAA@XZ.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$2 @ 0x1801D5548 (_SpectrumListener--SpectrumListener_--_1_--dtor$2.c)
 * Callees:
 *     ??R?$default_delete@VSpeechRuntimeListener@@@std@@QEBAXPEAVSpeechRuntimeListener@@@Z @ 0x1800D0814 (--R-$default_delete@VSpeechRuntimeListener@@@std@@QEBAXPEAVSpeechRuntimeListener@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SpeechRuntimeListener>::operator()();
  return result;
}
