/*
 * XREFs of ??_GCRectangleInstruction@@EEAAPEAXI@Z @ 0x180051440
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRectangleInstruction@@EEAA@XZ @ 0x1800512B4 (--1CRectangleInstruction@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CRectangleInstruction *__fastcall CRectangleInstruction::`scalar deleting destructor'(
        CRectangleInstruction *this,
        char a2)
{
  CRectangleInstruction::~CRectangleInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x30uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CRectangleInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
