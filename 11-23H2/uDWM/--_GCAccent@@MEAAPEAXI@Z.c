/*
 * XREFs of ??_GCAccent@@MEAAPEAXI@Z @ 0x180018F20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAccent@@MEAA@XZ @ 0x180018F7C (--1CAccent@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAccent *__fastcall CAccent::`scalar deleting destructor'(CAccent *this, char a2)
{
  CAccent::~CAccent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x260uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CAccent *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
