/*
 * XREFs of ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800B3C90
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B36AC (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180108658 (--1CWindowList@@UEAA@XZ.c)
 */

CWindowList *__fastcall CWindowList::`vector deleting destructor'(CWindowList *this, char a2)
{
  CWindowList::~CWindowList(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CWindowList *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
