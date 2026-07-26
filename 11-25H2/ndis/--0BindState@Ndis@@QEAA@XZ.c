/*
 * XREFs of ??0BindState@Ndis@@QEAA@XZ @ 0x14016C9C0
 * Callers:
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x14016C8B0 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x14016C8F0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x14016C990 (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 * Callees:
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x140070910 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 */

Ndis::BindState *__fastcall Ndis::BindState::BindState(Ndis::BindState *this)
{
  Rtl::KArray<void *,1> *p_m_bindContext; // rcx

  this->m_unbindReasons = 2;
  this->Miniport = 0LL;
  *(_WORD *)&this->AllowBindDespiteMandatory = 0;
  this->NeedsPauseAction = 0;
  this->m_AdditionalContext = 0LL;
  *(_QWORD *)&this->m_LastErrorCode = 0LL;
  *(_QWORD *)&this->m_pauseReasons = 1LL;
  p_m_bindContext = &this->m_bindContext;
  *(_QWORD *)&p_m_bindContext->m_bufferSize = 0LL;
  p_m_bindContext->_p = 0LL;
  Rtl::KArray<void *,1>::reserve(&p_m_bindContext->m_bufferSize, 4uLL);
  return this;
}
