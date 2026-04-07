/*
 * XREFs of ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x18001DBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x1800370D4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CRenderDataVisual *__fastcall CRenderDataVisual::`scalar deleting destructor'(CRenderDataVisual *this, char a2)
{
  CRenderDataVisual::~CRenderDataVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x120uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CRenderDataVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
