/*
 * XREFs of ??1?$unique_ptr@VMPCHeadMovementDetector@@U?$default_delete@VMPCHeadMovementDetector@@@std@@@std@@QEAA@XZ @ 0x1800CF204
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800CF2D4 (--1MPCRawInputProvider@@MEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VMPCHeadMovementDetector@@@std@@QEBAXPEAVMPCHeadMovementDetector@@@Z @ 0x1800CF510 (--R-$default_delete@VMPCHeadMovementDetector@@@std@@QEBAXPEAVMPCHeadMovementDetector@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<MPCHeadMovementDetector>::~unique_ptr<MPCHeadMovementDetector>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MPCHeadMovementDetector>::operator()();
  return result;
}
