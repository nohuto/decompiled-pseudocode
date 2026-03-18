/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400312D0
 * Callers:
 *     CreateVisRgnTracker @ 0x140030A08 (CreateVisRgnTracker.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x140049924 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x14008ACA8 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x140168E9C (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x140169708 (UserSetWindowedSwapChain.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401AC828 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1401BF578 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x140210D30 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x1402C9BEC (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 *     ?IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z @ 0x1402D1B38 (-IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, unsigned __int64 a2)
{
  unsigned __int16 v4; // ax
  CWindowProp *v5; // rax
  __int64 v6; // rdx
  CWindowProp *v7; // r8
  unsigned __int16 v8; // ax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v5 = (CWindowProp *)InternalRemoveProp(a2, v4, 1LL);
  v7 = v5;
  if ( v5 && v5 != this )
    (**(void (__fastcall ***)(CWindowProp *))v5)(v5);
  v8 = (*(__int64 (__fastcall **)(CWindowProp *, __int64, CWindowProp *))(*(_QWORD *)this + 8LL))(this, v6, v7);
  result = InternalSetProp(a2, v8, this, 32769LL);
  *((_QWORD *)this + 2) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
