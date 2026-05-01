/*
 * XREFs of ?FindDesktop@CVirtualDesktopManager@@WBI@EAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x180553850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::FindDesktop(__int64 a1, const struct _GUID *a2, struct IVirtualDesktop **a3)
{
  return CVirtualDesktopManager::FindDesktop((CVirtualDesktopManager *)(a1 - 24), a2, a3);
}
