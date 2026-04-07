/*
 * XREFs of ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x18004F640
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18004D2E0 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CSecondaryWindowRepresentation *__fastcall CSecondaryWindowRepresentation::`vector deleting destructor'(
        CSecondaryWindowRepresentation *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // di

  v3 = a2;
  CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      __global_delete(this, 0x1A8uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CSecondaryWindowRepresentation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
