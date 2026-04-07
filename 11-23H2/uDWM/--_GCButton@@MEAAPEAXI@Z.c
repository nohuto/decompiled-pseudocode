/*
 * XREFs of ??_GCButton@@MEAAPEAXI@Z @ 0x180035DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CButton@@MEAA@XZ @ 0x180035EB0 (--1CButton@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CButton *__fastcall CButton::`scalar deleting destructor'(CButton *this, char a2)
{
  CButton::~CButton(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x1A0uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CButton *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
