/*
 * XREFs of ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x180009030
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompVirtualDesktopThumbnailData@@UEAA@XZ @ 0x180009368 (--1CDCompVirtualDesktopThumbnailData@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

CDCompVirtualDesktopThumbnailData *__fastcall CDCompVirtualDesktopThumbnailData::`scalar deleting destructor'(
        CDCompVirtualDesktopThumbnailData *this,
        char a2)
{
  CDCompVirtualDesktopThumbnailData::~CDCompVirtualDesktopThumbnailData(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDCompVirtualDesktopThumbnailData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
