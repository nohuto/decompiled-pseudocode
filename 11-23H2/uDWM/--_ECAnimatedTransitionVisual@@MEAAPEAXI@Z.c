/*
 * XREFs of ??_ECAnimatedTransitionVisual@@MEAAPEAXI@Z @ 0x180055528
 * Callers:
 *     ??_ECAnimatedTransitionVisual@@O7EAAPEAXI@Z @ 0x180066380 (--_ECAnimatedTransitionVisual@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180055814 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAnimatedTransitionVisual *__fastcall CAnimatedTransitionVisual::`vector deleting destructor'(
        CAnimatedTransitionVisual *this,
        char a2)
{
  CAnimatedTransitionVisual::~CAnimatedTransitionVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x410uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CAnimatedTransitionVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
