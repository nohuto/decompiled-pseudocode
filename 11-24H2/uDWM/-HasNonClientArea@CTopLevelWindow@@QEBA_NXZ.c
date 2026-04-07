/*
 * XREFs of ?HasNonClientArea@CTopLevelWindow@@QEBA_NXZ @ 0x180032418
 * Callers:
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x180030D88 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CTopLevelWindow::HasNonClientArea(CTopLevelWindow *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 147) || *((_DWORD *)this + 148) || *((_DWORD *)this + 149) || *((_DWORD *)this + 150) )
    return 1;
  return result;
}
