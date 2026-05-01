/*
 * XREFs of ?EnumWindowsProc_DesktopWindow@@YAHPEAUHWND__@@_J@Z @ 0x180609BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EnumWindowsProc_DesktopWindow(HWND a1, _QWORD *a2)
{
  if ( !GetPropW(a1, L"DesktopWindow") )
    return 1LL;
  *a2 = a1;
  return 0LL;
}
