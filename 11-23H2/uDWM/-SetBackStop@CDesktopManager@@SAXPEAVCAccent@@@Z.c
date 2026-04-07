/*
 * XREFs of ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x18000B27C
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800199A0 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002EA28 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 */

void __fastcall CDesktopManager::SetBackStop(struct CAccent *a1)
{
  struct CAnalogCompositorManager *Instance; // rax

  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25) = a1;
  Instance = CAnalogCompositorManager::GetInstance();
  *((_BYTE *)Instance + 72) = a1 != 0LL;
  CAnalogCompositorManager::UpdateHolographicLockState(Instance);
}
