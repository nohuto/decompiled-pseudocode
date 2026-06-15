/*
 * XREFs of ??0CVirtualProtectedOutput@@QEAA@PEAVCProtectedOutputController@@@Z @ 0x14006CD80
 * Callers:
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14006CEA0 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 * Callees:
 *     <none>
 */

CVirtualProtectedOutput *__fastcall CVirtualProtectedOutput::CVirtualProtectedOutput(
        CVirtualProtectedOutput *this,
        struct CProtectedOutputController *a2)
{
  CVirtualProtectedOutput *result; // rax

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *(_QWORD *)this = &CVirtualProtectedOutput::`vftable';
  result = this;
  *((_QWORD *)this + 1) = a2;
  return result;
}
