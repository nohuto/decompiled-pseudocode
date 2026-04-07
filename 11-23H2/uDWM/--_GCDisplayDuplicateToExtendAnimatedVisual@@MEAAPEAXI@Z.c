/*
 * XREFs of ??_GCDisplayDuplicateToExtendAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B9640
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B950C (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayDuplicateToExtendAnimatedVisual *__fastcall CDisplayDuplicateToExtendAnimatedVisual::`scalar deleting destructor'(
        CDisplayDuplicateToExtendAnimatedVisual *this,
        char a2)
{
  CDisplayDuplicateToExtendAnimatedVisual::~CDisplayDuplicateToExtendAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDisplayDuplicateToExtendAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
