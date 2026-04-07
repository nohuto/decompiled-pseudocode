/*
 * XREFs of ?GetGlobalTime@CDesktopManager@@SANXZ @ 0x180027CA4
 * Callers:
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800091CC (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001D3F4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x1800269E0 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 *     ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x180079A50 (-OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

double CDesktopManager::GetGlobalTime(void)
{
  return *((double *)CDesktopManager::s_pDesktopManagerInstance + 32);
}
