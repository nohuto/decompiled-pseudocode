/*
 * XREFs of ??_ECLegacyNonClientBackground@@UEAAPEAXI@Z @ 0x18001DCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyNonClientBackground@@UEAA@XZ @ 0x18001DD3C (--1CLegacyNonClientBackground@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CLegacyNonClientBackground *__fastcall CLegacyNonClientBackground::`vector deleting destructor'(
        CLegacyNonClientBackground *this,
        char a2)
{
  CLegacyNonClientBackground::~CLegacyNonClientBackground(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x168uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CLegacyNonClientBackground *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
