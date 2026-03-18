/*
 * XREFs of ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D55C4
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802D5008 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1802D5C50 (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802D1DA8 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1802D1E0C (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicClient::ProcessReleaseExclusiveSwapChain(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  CHolographicExclusiveView *v4; // rbx
  CHolographicExclusiveView *v5; // rcx
  __int64 v6; // rax
  CHolographicInteropTaskQueue *v7; // rcx
  CHolographicExclusiveView *v8; // [rsp+58h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v8 = 0LL;
  if ( ((int (__fastcall *)(struct IUnknown *, GUID *, CHolographicExclusiveView **))lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v8) >= 0 )
  {
    v4 = v8;
    v5 = (CHolographicExclusiveView *)*((_QWORD *)this + 25);
    if ( v5 == v8 && !*((_BYTE *)v5 + 91) )
    {
      CHolographicExclusiveView::DeactivateView(v5, this);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 25);
      v4 = v8;
    }
    if ( *((_QWORD *)v4 + 13) )
    {
      CHolographicExclusiveView::DeactivateSwapChain(v4);
      v6 = *((_QWORD *)v4 + 9);
      v7 = *(CHolographicInteropTaskQueue **)(v6 + 56);
      if ( v7 )
      {
        if ( *(_BYTE *)(v6 + 240) )
          CHolographicInteropTaskQueue::PostMessageW(v7, 28, *((struct _SLIST_ENTRY **)v4 + 13), 0LL, 0LL, 0LL, 0LL);
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 13) + 16LL))(*((_QWORD *)v4 + 13));
      *((_QWORD *)v4 + 13) = 0LL;
      *((_BYTE *)v4 + 90) = 0;
      v4 = v8;
    }
    (*(void (__fastcall **)(CHolographicExclusiveView *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
