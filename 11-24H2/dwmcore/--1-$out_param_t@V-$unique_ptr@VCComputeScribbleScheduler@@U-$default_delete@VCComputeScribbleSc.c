/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180285114
 * Callers:
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z @ 0x18028531C (-Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCComputeScribbleScheduler@@@std@@QEBAXPEAVCComputeScribbleScheduler@@@Z @ 0x180285194 (--R-$default_delete@VCComputeScribbleScheduler@@@std@@QEBAXPEAVCComputeScribbleScheduler@@@Z.c)
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CComputeScribbleScheduler>>::~out_param_t<std::unique_ptr<CComputeScribbleScheduler>>(
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
      return std::default_delete<CComputeScribbleScheduler>::operator()();
  }
  return result;
}
