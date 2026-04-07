/*
 * XREFs of ?IsImmersiveAppBand@CImmersiveState@@SA_NW4ZBID@@@Z @ 0x18009B0F8
 * Callers:
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180053678 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveState::IsImmersiveAppBand(int a1)
{
  return (unsigned int)(a1 - 8) <= 3;
}
