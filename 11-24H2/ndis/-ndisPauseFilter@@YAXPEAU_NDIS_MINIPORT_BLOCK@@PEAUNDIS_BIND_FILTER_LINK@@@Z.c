/*
 * XREFs of ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140152680
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140154AB0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF__guid_Dq @ 0x14005B590 (WPP_RECORDER_SF__guid_Dq.c)
 *     ?ndisFInvokeSetFilterModuleOptions@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140152570 (-ndisFInvokeSetFilterModuleOptions@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1401545D0 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140175480 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 */

void __fastcall ndisPauseFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  __int64 v4; // rdx
  struct _NDIS_FILTER_BLOCK *BindContext; // rdi
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-38h]

  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      *(_QWORD *)(v4 + 80) + 24LL,
      v6,
      0xDu,
      v9,
      *(_QWORD *)(v4 + 80) + 24LL);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a2->BindState.NeedsPauseAction = 0;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  ndisPauseFilterInner(BindContext, v7);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&a2->BindDriver._p->_t.Guid,
      v8,
      0xEu,
      v9,
      (__int64)&a2->BindDriver._p->_t.Guid);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a2->BindState.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  ndisFInvokeSetFilterModuleOptions(BindContext);
}
