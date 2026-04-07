/*
 * XREFs of ?ModeChange@CAnalogCompositorManager@@SAJXZ @ 0x180055EFC
 * Callers:
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18008E834 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180057D38 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 */

__int64 CAnalogCompositorManager::ModeChange(void)
{
  CAnalogCompositorManager::GetInstance();
  return 0LL;
}
