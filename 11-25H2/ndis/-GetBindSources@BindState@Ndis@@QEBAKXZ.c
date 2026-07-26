/*
 * XREFs of ?GetBindSources@BindState@Ndis@@QEBAKXZ @ 0x14014DF50
 * Callers:
 *     ndisEtwCaptureMiniportFilterList @ 0x1400A0F54 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x1400A1250 (ndisEtwCaptureMiniportProtocolList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Ndis::BindState::GetBindSources(Ndis::BindState *this)
{
  return this->m_bindSources;
}
