/*
 * XREFs of ?reset@?$com_ptr_t@VCComputeScribbleRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18020F224
 * Callers:
 *     ?SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z @ 0x18020EEF0 (-SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z.c)
 *     ?SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z @ 0x18020F060 (-SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z.c)
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x18020F1AC (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 *     ?EnableComputeScribble@CScribbleSwapChain@@UEAAJPEAVIMonitorTarget@@@Z @ 0x1802145A0 (-EnableComputeScribble@CScribbleSwapChain@@UEAAJPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     <none>
 */

CGlobalDrawingContext *__fastcall wil::com_ptr_t<CComputeScribbleRenderer,wil::err_returncode_policy>::reset(
        CGlobalDrawingContext **a1)
{
  CGlobalDrawingContext *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CGlobalDrawingContext *)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(result);
  return result;
}
