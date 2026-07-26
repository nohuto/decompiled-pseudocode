/*
 * XREFs of ?SetDirty@BindEngine@Ndis@@QEAAXXZ @ 0x140141110
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140068470 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::SetDirty(Ndis::BindEngine *this)
{
  this->m_isDirty = 1;
}
