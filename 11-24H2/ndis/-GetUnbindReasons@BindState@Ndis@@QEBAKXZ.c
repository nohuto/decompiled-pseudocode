/*
 * XREFs of ?GetUnbindReasons@BindState@Ndis@@QEBAKXZ @ 0x1401432AC
 * Callers:
 *     ndisEtwCaptureMiniportFilterList @ 0x140096AE0 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140096DDC (ndisEtwCaptureMiniportProtocolList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Ndis::BindState::GetUnbindReasons(Ndis::BindState *this)
{
  return this->m_unbindReasons;
}
