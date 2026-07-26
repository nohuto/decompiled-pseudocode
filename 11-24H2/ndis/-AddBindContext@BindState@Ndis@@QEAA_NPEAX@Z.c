/*
 * XREFs of ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1401603A0
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?grow@?$KArray@PEAX$00@Rtl@@AEAA_N_K@Z @ 0x1401603F0 (-grow@-$KArray@PEAX$00@Rtl@@AEAA_N_K@Z.c)
 */

bool __fastcall Ndis::BindState::AddBindContext(Ndis::BindState *this, void *a2)
{
  Rtl::KArray<void *,1> *p_m_bindContext; // rbx
  bool result; // al

  p_m_bindContext = &this->m_bindContext;
  if ( !(unsigned __int8)Rtl::KArray<void *,1>::grow(&this->m_bindContext, this->m_bindContext.m_numElements + 1) )
    return 0;
  p_m_bindContext->_p[p_m_bindContext->m_numElements] = a2;
  result = 1;
  ++p_m_bindContext->m_numElements;
  return result;
}
