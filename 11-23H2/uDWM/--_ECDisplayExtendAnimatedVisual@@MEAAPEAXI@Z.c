/*
 * XREFs of ??_ECDisplayExtendAnimatedVisual@@MEAAPEAXI@Z @ 0x1800BA4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDisplayExtendAnimatedVisual@@MEAA@XZ @ 0x1800BA3EC (--1CDisplayExtendAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayExtendAnimatedVisual *__fastcall CDisplayExtendAnimatedVisual::`vector deleting destructor'(
        CDisplayExtendAnimatedVisual *this,
        char a2)
{
  CDisplayExtendAnimatedVisual::~CDisplayExtendAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDisplayExtendAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
