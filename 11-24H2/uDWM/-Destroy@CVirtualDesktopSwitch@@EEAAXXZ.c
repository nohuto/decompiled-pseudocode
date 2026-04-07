/*
 * XREFs of ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800D1CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800D5388 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 */

void __fastcall CVirtualDesktopSwitch::Destroy(CVirtualDesktopSwitch *this)
{
  CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents(this);
  CStoryboard::Destroy(this);
}
