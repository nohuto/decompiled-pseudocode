/*
 * XREFs of ??_ECDisplayDuplicateAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B8DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDisplayDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B8CDC (--1CDisplayDuplicateAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayDuplicateAnimatedVisual *__fastcall CDisplayDuplicateAnimatedVisual::`vector deleting destructor'(
        CDisplayDuplicateAnimatedVisual *this,
        char a2)
{
  CDisplayDuplicateAnimatedVisual::~CDisplayDuplicateAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDisplayDuplicateAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
