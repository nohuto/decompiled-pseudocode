/*
 * XREFs of ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802D8CF0
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802D7434 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802D7750 (--1CHolographicManager@@EEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180225DB0 (-RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ReleaseInteropRenderTarget(CHolographicManager *this)
{
  CRenderTarget *v2; // rcx
  CHolographicInteropTaskQueue *v3; // rcx
  CResource *v4; // rcx

  v2 = (CRenderTarget *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CRenderTarget::RemoveFromRenderTargetManager(v2);
    v3 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v3 )
      CHolographicInteropTaskQueue::PostMessageW(v3, 0x15u, 0LL, 0LL, 0LL, 0LL, 0LL);
    v4 = (CResource *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
}
