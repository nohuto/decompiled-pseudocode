/*
 * XREFs of ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x180050850
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawGeometryInstruction@@EEAA@XZ @ 0x1800508AC (--1CDrawGeometryInstruction@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CDrawGeometryInstruction *__fastcall CDrawGeometryInstruction::`vector deleting destructor'(
        CDrawGeometryInstruction *this,
        char a2)
{
  CDrawGeometryInstruction::~CDrawGeometryInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x20uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDrawGeometryInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
