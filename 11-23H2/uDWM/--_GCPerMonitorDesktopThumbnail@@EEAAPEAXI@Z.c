/*
 * XREFs of ??_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z @ 0x1800B5CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800B5B00 (--1CPerMonitorDesktopThumbnail@@EEAA@XZ.c)
 */

CPerMonitorDesktopThumbnail *__fastcall CPerMonitorDesktopThumbnail::`scalar deleting destructor'(
        CPerMonitorDesktopThumbnail *this,
        char a2)
{
  CPerMonitorDesktopThumbnail::~CPerMonitorDesktopThumbnail(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CPerMonitorDesktopThumbnail *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
