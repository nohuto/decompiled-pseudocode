/*
 * XREFs of ??1?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x180285144
 * Callers:
 *     ??1CComputeScribbleRenderer@@EEAA@XZ @ 0x180285164 (--1CComputeScribbleRenderer@@EEAA@XZ.c)
 *     ?Create@CComputeScribbleScheduler@@SAJPEAVCComputeScribbleRenderer@@PEAVIOverlaySwapChain@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAPEAV1@@Z @ 0x180287C64 (-Create@CComputeScribbleScheduler@@SAJPEAVCComputeScribbleRenderer@@PEAVIOverlaySwapChain@@PEAUI.c)
 * Callees:
 *     ??R?$default_delete@VCComputeScribbleScheduler@@@std@@QEBAXPEAVCComputeScribbleScheduler@@@Z @ 0x180285194 (--R-$default_delete@VCComputeScribbleScheduler@@@std@@QEBAXPEAVCComputeScribbleScheduler@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CComputeScribbleScheduler>::~unique_ptr<CComputeScribbleScheduler>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CComputeScribbleScheduler>::operator()();
  return result;
}
