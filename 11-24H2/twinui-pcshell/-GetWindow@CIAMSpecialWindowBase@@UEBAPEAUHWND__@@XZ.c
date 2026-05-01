/*
 * XREFs of ?GetWindow@CIAMSpecialWindowBase@@UEBAPEAUHWND__@@XZ @ 0x18010FC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CIAMSpecialWindowBase::GetWindow(CIAMSpecialWindowBase *this)
{
  return (HWND)*((_QWORD *)this + 2);
}
