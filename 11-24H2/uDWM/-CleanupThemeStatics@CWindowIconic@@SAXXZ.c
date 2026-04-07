/*
 * XREFs of ?CleanupThemeStatics@CWindowIconic@@SAXXZ @ 0x18007A4D4
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18007A3B8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void CWindowIconic::CleanupThemeStatics(void)
{
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)&CWindowIconic::s_rgpBitmapPendingImages, 1);
}
