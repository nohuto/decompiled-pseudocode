/*
 * XREFs of ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x18006DBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x1800E7788 (--1CTouchDragVisual@@MEAA@XZ.c)
 */

CTouchDragVisual *__fastcall CTouchDragVisual::`scalar deleting destructor'(CTouchDragVisual *this, char a2)
{
  CTouchDragVisual::~CTouchDragVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CTouchDragVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
