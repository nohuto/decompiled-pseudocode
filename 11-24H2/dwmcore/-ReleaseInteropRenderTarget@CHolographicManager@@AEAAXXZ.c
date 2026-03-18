/*
 * XREFs of ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802CFA50
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802CE194 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802CE4B0 (--1CHolographicManager@@EEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x18021A0F0 (-RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ReleaseInteropRenderTarget(CHolographicManager *this)
{
  CRenderTarget *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  CHolographicInteropTaskQueue *v5; // rcx
  CCachedVisualImage *v6; // rcx

  v2 = (CRenderTarget *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CRenderTarget::RemoveFromRenderTargetManager(v2);
    v5 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v5 )
      CHolographicInteropTaskQueue::PostMessageW(v5, 0x15u, 0LL, 0LL, 0LL, 0LL, 0LL);
    v6 = (CCachedVisualImage *)*((_QWORD *)this + 4);
    if ( v6 )
    {
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v6, v3, v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
}
