/*
 * XREFs of ??_ECFullScreenMagnifier@@EEAAPEAXI@Z @ 0x1800C0170
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CFullScreenMagnifier@@EEAA@XZ @ 0x1800C012C (--1CFullScreenMagnifier@@EEAA@XZ.c)
 */

CFullScreenMagnifier *__fastcall CFullScreenMagnifier::`vector deleting destructor'(
        CFullScreenMagnifier *this,
        char a2)
{
  CFullScreenMagnifier::~CFullScreenMagnifier(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CFullScreenMagnifier *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
