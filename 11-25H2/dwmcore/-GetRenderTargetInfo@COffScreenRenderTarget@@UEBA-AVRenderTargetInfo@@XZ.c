/*
 * XREFs of ?GetRenderTargetInfo@COffScreenRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x18028ABF0
 * Callers:
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028BB84 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003EB34 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetRenderTargetInfo(CDisplayManager *a1, __int64 a2)
{
  CDisplayManager::GetPrimaryAdapterLuid(a1, (_QWORD *)a2);
  *(_DWORD *)(a2 + 8) = -1;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_BYTE *)(a2 + 20) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
