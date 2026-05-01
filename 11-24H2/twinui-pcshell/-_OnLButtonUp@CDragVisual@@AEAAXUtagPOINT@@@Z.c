/*
 * XREFs of ?_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180544B50
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180545E58 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180544868 (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x180544950 (-_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnLButtonUp(CDragVisual *this, struct tagPOINT a2)
{
  HWND *v4; // rdi

  if ( *((_BYTE *)this + 324) )
  {
    CDragVisual::_OnFinishDrag(this, 0, a2);
    *((_BYTE *)this + 324) = 0;
    v4 = (HWND *)((char *)this + 152);
  }
  else
  {
    v4 = (HWND *)((char *)this + 152);
    if ( GetCapture() == *((HWND *)this + 19) )
      CDragVisual::_OnClick((HWND *)this, a2);
  }
  if ( *v4 )
  {
    if ( GetCapture() == *v4 )
      ReleaseCapture();
  }
}
