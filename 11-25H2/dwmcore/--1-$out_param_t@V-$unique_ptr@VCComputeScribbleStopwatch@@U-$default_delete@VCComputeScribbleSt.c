/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180293004
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z @ 0x1802932E0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCComputeScribbleStopwatch@@@std@@QEBAXPEAVCComputeScribbleStopwatch@@@Z @ 0x1802931D4 (--R-$default_delete@VCComputeScribbleStopwatch@@@std@@QEBAXPEAVCComputeScribbleStopwatch@@@Z.c)
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CComputeScribbleStopwatch>>::~out_param_t<std::unique_ptr<CComputeScribbleStopwatch>>(
        __int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  if ( *((_BYTE *)a1 + 16) )
  {
    result = (__int64)a1[1];
    v2 = **a1;
    **a1 = result;
    if ( v2 )
      return std::default_delete<CComputeScribbleStopwatch>::operator()();
  }
  return result;
}
