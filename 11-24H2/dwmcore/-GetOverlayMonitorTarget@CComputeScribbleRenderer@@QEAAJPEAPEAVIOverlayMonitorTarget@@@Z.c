/*
 * XREFs of ?GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z @ 0x1801C5270
 * Callers:
 *     ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x1801C505C (-WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ.c)
 *     ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x1801C5F60 (-DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Resolve@VIOverlayMonitorTarget@@@IUnknownWeakRef@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z @ 0x1801C5984 (--$Resolve@VIOverlayMonitorTarget@@@IUnknownWeakRef@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::GetOverlayMonitorTarget(
        CComputeScribbleRenderer *this,
        struct IOverlayMonitorTarget **a2)
{
  __int64 v3; // rcx
  struct IOverlayMonitorTarget *v5; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !*((_BYTE *)this + 48) )
    return 2291662987LL;
  v3 = *((_QWORD *)this + 2);
  v5 = 0LL;
  if ( (int)IUnknownWeakRef::Resolve<IOverlayMonitorTarget>(v3, &v5) < 0 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v5);
    return 2291662854LL;
  }
  else
  {
    *a2 = v5;
    return 0LL;
  }
}
