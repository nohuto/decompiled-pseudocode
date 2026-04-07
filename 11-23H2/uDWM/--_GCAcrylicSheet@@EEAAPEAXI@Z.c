/*
 * XREFs of ??_GCAcrylicSheet@@EEAAPEAXI@Z @ 0x1800A2430
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A2310 (--1CAcrylicSheet@@EEAA@XZ.c)
 */

CBaseObject **__fastcall CAcrylicSheet::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CAcrylicSheet::~CAcrylicSheet(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
