/*
 * XREFs of ?WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x14018FD50
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ @ 0x14021C3A4 (-ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ.c)
 */

void __fastcall CMouseProcessor::CWheelEvent::WriteChunkMouseInputData(
        CMouseProcessor::CWheelEvent *this,
        struct _MOUSE_INPUT_DATA *a2)
{
  a2->ButtonFlags |= *(_WORD *)(*((_QWORD *)this + 1) + 28LL) & 0xC00;
  a2->ButtonData = CMouseProcessor::CWheelEvent::ComputeWheelData(this);
}
