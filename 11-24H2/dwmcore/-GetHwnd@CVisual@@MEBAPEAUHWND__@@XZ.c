/*
 * XREFs of ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x1801DAE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CVisual::GetHwnd(CVisual *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 104) & 0x40) != 0 )
    return (HWND)CVisual::GetTopLevelWindow(this);
  return result;
}
