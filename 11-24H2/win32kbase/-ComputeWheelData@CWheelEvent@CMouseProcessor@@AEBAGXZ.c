/*
 * XREFs of ?ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ @ 0x14021C3A4
 * Callers:
 *     ?WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x14018FD50 (-WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14021C120 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall CMouseProcessor::CWheelEvent::ComputeWheelData(CMouseProcessor::CWheelEvent *this)
{
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 120LL) & 0x20000) != 0 || !*(_DWORD *)(W32GetUserSessionState(this) + 67520) )
    return *(_WORD *)(*((_QWORD *)this + 1) + 30LL);
  else
    return -*(_WORD *)(*((_QWORD *)this + 1) + 30LL);
}
