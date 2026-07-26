/*
 * XREFs of ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x140160140
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015FEA0 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015FFE0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall Ndis::BindState::RemoveBindContext(Ndis::BindState *this, void *a2)
{
  unsigned __int64 m_numElements; // rax
  unsigned __int64 i; // r9
  void **p; // rcx
  unsigned int v6; // eax

  m_numElements = this->m_bindContext.m_numElements;
  for ( i = 0LL; i < m_numElements; ++i )
  {
    p = this->m_bindContext._p;
    if ( p[i] == a2 )
    {
      v6 = m_numElements - i - 1;
      if ( v6 )
        memmove(&p[(unsigned int)i], &p[(unsigned int)(i + 1)], 8LL * v6);
      --this->m_bindContext.m_numElements;
      return;
    }
  }
}
