/*
 * XREFs of ?GetAdjacentDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180553A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::GetAdjacentDesktop(
        __int64 a1,
        struct IVirtualDesktop *a2,
        unsigned int a3,
        struct IVirtualDesktop **a4)
{
  return CVirtualDesktopManager::GetAdjacentDesktop((CVirtualDesktopManager *)(a1 - 24), a2, a3, a4);
}
