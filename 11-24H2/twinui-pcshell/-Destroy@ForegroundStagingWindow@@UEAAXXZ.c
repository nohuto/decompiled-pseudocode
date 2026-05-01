/*
 * XREFs of ?Destroy@ForegroundStagingWindow@@UEAAXXZ @ 0x180498E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ForegroundStagingWindow::Destroy(HWND *this)
{
  DestroyWindow(this[3]);
}
