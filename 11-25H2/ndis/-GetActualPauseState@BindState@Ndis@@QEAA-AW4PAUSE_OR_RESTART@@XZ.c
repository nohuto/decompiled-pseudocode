/*
 * XREFs of ?GetActualPauseState@BindState@Ndis@@QEAA?AW4PAUSE_OR_RESTART@@XZ @ 0x1401410F0
 * Callers:
 *     ndisEtwCaptureMiniportFilterList @ 0x1400A0F54 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x1400A1250 (ndisEtwCaptureMiniportProtocolList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Ndis::BindState::GetActualPauseState(Ndis::BindState *this)
{
  return (unsigned int)this->m_actualPauseState;
}
