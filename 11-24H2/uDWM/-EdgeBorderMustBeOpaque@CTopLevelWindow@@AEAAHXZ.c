/*
 * XREFs of ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x18005ABF0
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18002DB50 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTopLevelWindow::EdgeBorderMustBeOpaque(CTopLevelWindow *this)
{
  return *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 516)
      || (unsigned int)IsWindowArranged(*(_QWORD *)(*((_QWORD *)this + 89) + 40LL))
      || (*((_BYTE *)this + 584) & 0x20) != 0;
}
