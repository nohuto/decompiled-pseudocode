/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x1401E0894
 * Callers:
 *     ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402C3360 (-PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1400260CC (GetMonitorRectForWindow.c)
 */

__int64 __fastcall GetPrimaryMonitorRectForWindow(__int64 a1, const struct tagWND *a2)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1, a2);
  GetMonitorRectForWindow(a1, *(_QWORD *)(DispInfo + 104), a2);
  return a1;
}
