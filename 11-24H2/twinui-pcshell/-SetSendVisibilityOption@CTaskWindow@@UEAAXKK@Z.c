/*
 * XREFs of ?SetSendVisibilityOption@CTaskWindow@@UEAAXKK@Z @ 0x180222990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTaskWindow::SetSendVisibilityOption(CTaskWindow *this, int a2, int a3)
{
  *((_DWORD *)this + 29) = a3 & a2 | *((_DWORD *)this + 29) & ~a2;
}
