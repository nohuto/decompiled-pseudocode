/*
 * XREFs of ?IsUnownedNonTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x1801D9C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsUnownedNonTrayWindow(CClassicWindow *this)
{
  return *((_DWORD *)this + 18) == 0;
}
