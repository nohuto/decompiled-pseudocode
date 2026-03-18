/*
 * XREFs of ?reset@?$com_ptr_t@VCComputeScribbleRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021882C
 * Callers:
 *     ?SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z @ 0x1802184D0 (-SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z.c)
 *     ?SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z @ 0x1802186A0 (-SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z.c)
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1802187B4 (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 *     ?EnableComputeScribble@CScribbleSwapChain@@UEAAJPEAVIMonitorTarget@@@Z @ 0x18021FD60 (-EnableComputeScribble@CScribbleSwapChain@@UEAAJPEAVIMonitorTarget@@@Z.c)
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
