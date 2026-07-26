/*
 * XREFs of ?GetActualPauseState@BindState@Ndis@@QEAA?AW4PAUSE_OR_RESTART@@XZ @ 0x1401360A0
 * Callers:
 *     ndisEtwCaptureMiniportFilterList @ 0x140096AE0 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140096DDC (ndisEtwCaptureMiniportProtocolList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Ndis::BindState::GetActualPauseState(Ndis::BindState *this)
{
  return (unsigned int)this->m_actualPauseState;
}
