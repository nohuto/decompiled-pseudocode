/*
 * XREFs of ?GetBindSources@BindState@Ndis@@QEBAKXZ @ 0x140143294
 * Callers:
 *     ndisEtwCaptureMiniportFilterList @ 0x140096AE0 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140096DDC (ndisEtwCaptureMiniportProtocolList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Ndis::BindState::GetBindSources(Ndis::BindState *this)
{
  return this->m_bindSources;
}
