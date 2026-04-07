/*
 * XREFs of ?OnGraphicsDeviceLost@CDesktopManager@@SAXXZ @ 0x1800BA9F4
 * Callers:
 *     ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x18009A94C (-HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void CDesktopManager::OnGraphicsDeviceLost(void)
{
  CWindowList::OnGraphicsDeviceLost(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
}
