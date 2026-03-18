/*
 * XREFs of ??1?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@QEAA@XZ @ 0x180287A94
 * Callers:
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x180287AB4 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x180289CFC (-Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCComputeScribbleStopwatch@@@std@@QEBAXPEAVCComputeScribbleStopwatch@@@Z @ 0x180287C34 (--R-$default_delete@VCComputeScribbleStopwatch@@@std@@QEBAXPEAVCComputeScribbleStopwatch@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CComputeScribbleStopwatch>::~unique_ptr<CComputeScribbleStopwatch>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CComputeScribbleStopwatch>::operator()();
  return result;
}
