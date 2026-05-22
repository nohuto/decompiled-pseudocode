/*
 * XREFs of ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x1800CDE24
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800CDBA8 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800CDE44 (--1SpectrumListener@@UEAA@XZ.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$2 @ 0x1801CDFEB (_SpectrumListener--SpectrumListener_--_1_--dtor$2.c)
 * Callees:
 *     ??R?$default_delete@VSpeechRuntimeListener@@@std@@QEBAXPEAVSpeechRuntimeListener@@@Z @ 0x1800CDE84 (--R-$default_delete@VSpeechRuntimeListener@@@std@@QEBAXPEAVSpeechRuntimeListener@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SpeechRuntimeListener>::operator()();
  return result;
}
