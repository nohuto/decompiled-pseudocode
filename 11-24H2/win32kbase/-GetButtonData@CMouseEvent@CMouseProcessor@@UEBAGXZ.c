/*
 * XREFs of ?GetButtonData@CMouseEvent@CMouseProcessor@@UEBAGXZ @ 0x14021CE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::CMouseEvent::GetButtonData(CMouseProcessor::CMouseEvent *this)
{
  return *(unsigned __int16 *)(*((_QWORD *)this + 1) + 30LL);
}
