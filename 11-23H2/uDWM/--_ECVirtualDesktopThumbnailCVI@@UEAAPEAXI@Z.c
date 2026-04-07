/*
 * XREFs of ??_ECVirtualDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x18000B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x18000B4FC (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CVirtualDesktopThumbnailCVI *__fastcall CVirtualDesktopThumbnailCVI::`vector deleting destructor'(
        CVirtualDesktopThumbnailCVI *this,
        char a2)
{
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x50uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CVirtualDesktopThumbnailCVI *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
