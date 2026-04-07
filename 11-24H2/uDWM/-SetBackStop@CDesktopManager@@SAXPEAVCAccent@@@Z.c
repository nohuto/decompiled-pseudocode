/*
 * XREFs of ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180055EC4
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x18002FAE8 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180065DDC (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180057D38 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 */

void __fastcall CDesktopManager::SetBackStop(struct CAccent *a1)
{
  CAnalogCompositorManager *Instance; // rax

  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25) = a1;
  Instance = CAnalogCompositorManager::GetInstance();
  CAnalogCompositorManager::ToggleLockBackstopImpl(Instance, a1 != 0LL);
}
