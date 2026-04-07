/*
 * XREFs of ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x18009A94C
 * Callers:
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18007DD4C (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18004F61C (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x18009A974 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 */

void __fastcall CGraphicsDeviceManager::HandleGraphicsDeviceLost(CGraphicsDeviceManager *this)
{
  CGraphicsDeviceManager::ReleaseGraphicsDevice(this);
  CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(this);
  CDesktopManager::OnGraphicsDeviceLost();
}
