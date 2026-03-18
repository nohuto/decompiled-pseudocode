/*
 * XREFs of ?EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z @ 0x180021C9C
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18003EBA0 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x180021DBC (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     ?GetLiftedOverlayHost@CDesktopTree@@UEBAPEAVILiftedOverlayHost@@XZ @ 0x180021E10 (-GetLiftedOverlayHost@CDesktopTree@@UEBAPEAVILiftedOverlayHost@@XZ.c)
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x180021E20 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 *     ?Optimize@CTreeDirty@@QEAAXXZ @ 0x180021F70 (-Optimize@CTreeDirty@@QEAAXXZ.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180022070 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?IsEmpty@CTreeDirty@@QEBA_NXZ @ 0x180159B40 (-IsEmpty@CTreeDirty@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPreComputeContext::SubTreeContext::EndWalk(CPreComputeContext::SubTreeContext *this, int a2)
{
  __int64 v2; // rbx
  struct ILiftedOverlayHost *(__fastcall *v5)(CDesktopTree *__hidden); // rax
  struct ILiftedOverlayHost *LiftedOverlayHost; // rax
  __int64 v7; // rdx

  v2 = *((_QWORD *)this + 41);
  v5 = *(struct ILiftedOverlayHost *(__fastcall **)(CDesktopTree *__hidden))(*(_QWORD *)v2 + 216LL);
  if ( v5 == CDesktopTree::GetLiftedOverlayHost )
    LiftedOverlayHost = CDesktopTree::GetLiftedOverlayHost((CDesktopTree *)v2);
  else
    LiftedOverlayHost = v5((CDesktopTree *)v2);
  if ( LiftedOverlayHost )
    (*(void (__fastcall **)(struct ILiftedOverlayHost *))(*(_QWORD *)LiftedOverlayHost + 32LL))(LiftedOverlayHost);
  if ( a2 >= 0 || (CTreeDirty::SetFullDirty((CTreeDirty *)(v2 + 112)), a2 != -2147467260) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2) )
    {
      v7 = *(_QWORD *)(v2 + 24);
      if ( *(_DWORD *)(v7 + 6376) && (*(_BYTE *)(v7 + 6469) || !CTreeDirty::IsEmpty((CTreeDirty *)(v2 + 112))) )
      {
        *(_BYTE *)(v2 + 2439) = 1;
        *(_BYTE *)(v7 + 6469) = 0;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 24) + 6384LL) )
        *(_BYTE *)(v2 + 2440) = 1;
    }
    CTreeDirty::Optimize((CTreeDirty *)(v2 + 112));
  }
  CBspPreComputeHelper::CleanupAfterWalking(this);
  if ( *((_BYTE *)this + 344) )
  {
    CThreadContext::UnregisterGraphWalkRoot();
    *((_BYTE *)this + 344) = 0;
  }
}
