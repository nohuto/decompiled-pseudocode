/*
 * XREFs of ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x18000F930
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x18000F98C (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CWindowSnapshot *__fastcall CWindowSnapshot::`scalar deleting destructor'(CWindowSnapshot *this, char a2)
{
  CWindowSnapshot::~CWindowSnapshot(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x68uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CWindowSnapshot *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
