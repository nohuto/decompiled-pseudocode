/*
 * XREFs of ??_GCDesktopThumbnailCVI@@MEAAPEAXI@Z @ 0x1800B5C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x18000B4FC (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

CDesktopThumbnailCVI *__fastcall CDesktopThumbnailCVI::`scalar deleting destructor'(
        CDesktopThumbnailCVI *this,
        char a2)
{
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDesktopThumbnailCVI *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
