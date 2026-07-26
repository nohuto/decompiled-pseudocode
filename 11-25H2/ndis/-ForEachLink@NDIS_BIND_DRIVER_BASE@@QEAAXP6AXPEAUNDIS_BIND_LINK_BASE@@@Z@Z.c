/*
 * XREFs of ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x14015E140
 * Callers:
 *     NdisReEnumerateProtocolBindings @ 0x1400BFDF0 (NdisReEnumerateProtocolBindings.c)
 *     NdisFRetryAttach @ 0x140142F50 (NdisFRetryAttach.c)
 *     _lambda_9290c0fce5c4450c26ce3c7312f90185_::_lambda_invoker_cdecl_ @ 0x14014CB80 (_lambda_9290c0fce5c4450c26ce3c7312f90185_--_lambda_invoker_cdecl_.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x14015CED0 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x14015E000 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x14016C210 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::ForEachLink(NDIS_BIND_DRIVER_BASE *this, void (__fastcall *a2)(_LIST_ENTRY *))
{
  KPushLockBase *m_Lock; // rsi
  bool m_Entered; // di
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *p_BindLinks; // r14
  KLockHolder::<unnamed_type_m_State> m_State; // ecx
  _LIST_ENTRY *v9; // rdi
  __int32 v10; // ecx
  KLockHolder v11; // [rsp+20h] [rbp-28h] BYREF

  m_Lock = (KPushLockBase *)(qword_140127130 + 8);
  v11.m_Lock = (KPushLockBase *)(qword_140127130 + 8);
  KeEnterCriticalRegion();
  m_Entered = 1;
  v11.m_Region.m_Entered = 1;
  ExAcquirePushLockSharedEx(m_Lock, 0LL);
  Flink = this->BindLinks.Flink;
  p_BindLinks = &this->BindLinks;
  m_State = Shared;
  v11.m_State = Shared;
  if ( Flink != p_BindLinks )
  {
    do
    {
      v9 = Flink[-4].Flink;
      if ( LODWORD(v9[95].Flink)
        && (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)Flink[-4].Flink, 0x20u) )
      {
        KLockHolder::ReleaseShared(&v11);
        a2(Flink - 4);
        KLockHolder::AcquireShared(&v11);
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v9, 0x20u);
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_BindLinks );
    m_Entered = v11.m_Region.m_Entered;
    m_Lock = v11.m_Lock;
    m_State = v11.m_State;
  }
  v10 = m_State - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      goto LABEL_12;
    ExReleasePushLockExclusiveEx(m_Lock, 0LL);
  }
  else
  {
    ExReleasePushLockEx(m_Lock, 0LL);
  }
  m_Entered = 0;
  KeLeaveCriticalRegion();
LABEL_12:
  if ( m_Entered )
    KeLeaveCriticalRegion();
}
