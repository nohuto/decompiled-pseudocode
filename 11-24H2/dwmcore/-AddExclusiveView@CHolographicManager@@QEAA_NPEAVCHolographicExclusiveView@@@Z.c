/*
 * XREFs of ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802CE6E4
 * Callers:
 *     ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x1802D2048 (-ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCL.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CHolographicManager::AddExclusiveView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  bool v3; // di
  unsigned int Ptr; // eax
  unsigned int v5; // r8d
  CHolographicInteropTaskQueue *v6; // rcx
  int v7; // eax
  struct IUnknown *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  AcquireSRWLockExclusive(this + 13);
  v3 = 0;
  Ptr = (unsigned int)this[24].Ptr;
  v5 = Ptr + 1;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_10;
  }
  if ( v5 > HIDWORD(this[23].Ptr) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[21], 8, 1, &v9);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xC0u, 0LL);
      goto LABEL_10;
    }
  }
  else
  {
    *((_QWORD *)this[21].Ptr + Ptr) = v9;
    LODWORD(this[24].Ptr) = v5;
  }
  ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->AddRef)(v9);
  v6 = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( v6 && LOBYTE(this[30].Ptr) )
    v3 = CHolographicInteropTaskQueue::PostMessageW(v6, 0xCu, v9, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
  ReleaseSRWLockExclusive(this + 13);
  return v3;
}
