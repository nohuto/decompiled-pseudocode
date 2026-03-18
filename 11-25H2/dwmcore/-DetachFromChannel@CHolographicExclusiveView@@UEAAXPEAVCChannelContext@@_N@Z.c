/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802DB100
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1802D8CAC (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1802D8E4C (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802DB6A8 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
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
