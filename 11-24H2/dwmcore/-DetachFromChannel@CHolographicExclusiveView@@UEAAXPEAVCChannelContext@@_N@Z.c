/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802D1E60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1802CFA0C (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1802CFBAC (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802D2408 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CHolographicExclusiveView::DetachFromChannel(
        CHolographicExclusiveView *this,
        struct CChannelContext *a2)
{
  void *v4; // rcx
  CHolographicInteropTaskQueue **v5; // rcx

  CHolographicExclusiveView::ReleaseSwapChain(this);
  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  v5 = (CHolographicInteropTaskQueue **)*((_QWORD *)this + 9);
  if ( v5 )
  {
    CHolographicManager::ReleaseExclusivePresentData(v5, *((_DWORD *)this + 20));
    CHolographicManager::RemoveExclusiveView(*((CHolographicManager **)this + 9), (struct IUnknown *)this);
  }
  CResource::DetachFromChannel(this, a2);
}
