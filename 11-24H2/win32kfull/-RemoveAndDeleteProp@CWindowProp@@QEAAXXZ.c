/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1400315C4
 * Callers:
 *     RemoveVisRgnTracker @ 0x1400308C8 (RemoveVisRgnTracker.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x14008ACA8 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x14015EC74 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x140168E9C (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401AC828 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1401F1EB8 (-DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402C9E14 (-PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CA394 (-RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall CWindowProp::RemoveAndDeleteProp(CWindowProp *this)
{
  unsigned __int16 v2; // ax
  void (__fastcall **v3)(CWindowProp *); // rax

  v2 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  InternalRemoveProp(*((_QWORD *)this + 2), v2, 1u);
  v3 = *(void (__fastcall ***)(CWindowProp *))this;
  *((_QWORD *)this + 2) = 0LL;
  (*v3)(this);
}
