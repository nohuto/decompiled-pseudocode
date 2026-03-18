/*
 * XREFs of ?ProcessAttachExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D4F6C
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802D5008 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicClient::ProcessAttachExclusiveSwapChain(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // rbx
  PVOID Ptr; // rcx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  lpVtbl = a2->lpVtbl;
  v6 = 0LL;
  if ( ((int (__fastcall *)(struct IUnknown *, GUID *, RTL_SRWLOCK **))lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v6) >= 0 )
  {
    v3 = v6;
    v4 = v6 + 52;
    AcquireSRWLockExclusive(v6 + 52);
    Ptr = v3[12].Ptr;
    if ( Ptr )
    {
      v3[13].Ptr = Ptr;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
      BYTE2(v3[11].Ptr) = 1;
    }
    ReleaseSRWLockExclusive(v4);
    (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 2))(v6);
  }
}
