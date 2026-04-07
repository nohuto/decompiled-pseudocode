/*
 * XREFs of ??_ECDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAAPEAXI@Z @ 0x1800BE810
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ @ 0x1800BE71C (--1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ.c)
 */

CDisplaySecondaryOnlyToExtendAnimatedVisual *__fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::`vector deleting destructor'(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this,
        char a2)
{
  CDisplaySecondaryOnlyToExtendAnimatedVisual::~CDisplaySecondaryOnlyToExtendAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDisplaySecondaryOnlyToExtendAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
