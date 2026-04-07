/*
 * XREFs of ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x180106310
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x1801061E4 (--1CWindowIconic@@MEAA@XZ.c)
 */

CWindowIconic *__fastcall CWindowIconic::`vector deleting destructor'(CWindowIconic *this, char a2)
{
  CWindowIconic::~CWindowIconic(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CWindowIconic *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
