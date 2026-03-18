/*
 * XREFs of ?AddDeferredRenderTargets@CRenderTargetManager@@AEAAXXZ @ 0x18013ED90
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18013E9A0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x1800C1E9C (-AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 */

void __fastcall CRenderTargetManager::AddDeferredRenderTargets(CRenderTargetManager *this)
{
  struct IRenderTarget **v1; // rsi
  struct IRenderTarget **i; // rdi
  __int64 v4; // rax

  v1 = (struct IRenderTarget **)*((_QWORD *)this + 18);
  for ( i = (struct IRenderTarget **)*((_QWORD *)this + 17); i != v1; ++i )
    CRenderTargetManager::AddRenderTarget(this, *i);
  v4 = *((_QWORD *)this + 17);
  if ( v4 != *((_QWORD *)this + 18) )
    *((_QWORD *)this + 18) = v4;
  if ( g_pComposition )
    *((_QWORD *)this + 92) = *((_QWORD *)g_pComposition + 111);
  else
    *((_QWORD *)this + 92) = 0LL;
}
