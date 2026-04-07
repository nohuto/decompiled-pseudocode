/*
 * XREFs of ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x1800047CC
 * Callers:
 *     ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18000472C (-GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18001AA6C (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x18001DBFC (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 */

int *__fastcall CTopLevelWindow::GetCurrentDefaultColorizationFlags(CTopLevelWindow *a1, _DWORD *a2)
{
  bool active; // al
  _DWORD *v3; // rdx
  CTopLevelWindow *v4; // rcx
  int *v5; // rdx
  int v6; // r8d
  __int64 v7; // r9

  *a2 = 0;
  active = CTopLevelWindow::TreatAsActiveWindow(a1);
  *v3 = !active + 1;
  if ( CTopLevelWindow::IsSheetOfGlass(v4) )
  {
    v6 |= 0x40u;
    *v5 = v6;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 752) + 677LL) & 4) != 0 )
    *v5 = v6 | 0x80;
  return v5;
}
