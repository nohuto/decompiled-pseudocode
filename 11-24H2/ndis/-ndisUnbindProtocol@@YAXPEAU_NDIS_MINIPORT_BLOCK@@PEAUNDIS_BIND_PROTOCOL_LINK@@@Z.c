/*
 * XREFs of ?ndisUnbindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015FCE0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140154AB0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015FEA0 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 */

void __fastcall ndisUnbindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  if ( a2->BindDriver._p->_t.RunningDriver->MajorNdisVersion < 6u )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    a2->BindState.m_actualPauseState = DatapathPaused;
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  }
  a2->BindState.PretendBindingActive = 0;
  ndisUnbindEachProtocolOpenOnMiniport(a1, a2);
}
