/*
 * XREFs of ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C005BCE4
 * Callers:
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C0017A40 (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     _lambda_a4faeffec317e94db02d9bdb76d95fff_::operator() @ 0x1C00249E0 (_lambda_a4faeffec317e94db02d9bdb76d95fff_--operator().c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C005BC94 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C005D0BC (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C005D5F4 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C00A418C (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?GetTooltipIdFromHitTest@@YA?AW4tagTOOLTIPID@@PEAUtagWND@@H@Z @ 0x1C013CA04 (-GetTooltipIdFromHitTest@@YA-AW4tagTOOLTIPID@@PEAUtagWND@@H@Z.c)
 *     ?IsTooltipHittest2@@YA_NPEAUtagWND@@I@Z @ 0x1C013CAF4 (-IsTooltipHittest2@@YA_NPEAUtagWND@@I@Z.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C01E99D4 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01EB2A4 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01FFF28 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C021D7B8 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellWindowManagement::BehaviorEnabled(ShellWindowManagement *this, const struct tagDESKTOP *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *((_QWORD *)this + 41) )
    return ((unsigned int)a2 & *((_DWORD *)this + 84) & 0x1FF) != 0;
  return v2;
}
