/*
 * XREFs of ?RemoveDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@0@Z @ 0x180554970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::RemoveDesktop(
        __int64 a1,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  return CVirtualDesktopManager::RemoveDesktop((CVirtualDesktopManager *)(a1 - 24), a2, a3);
}
