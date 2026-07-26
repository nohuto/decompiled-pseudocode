/*
 * XREFs of ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1401711C0
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x140160E40 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 */

void __fastcall ndisFindAdjacentFilters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct _NDIS_FILTER_BLOCK **a3,
        struct _NDIS_FILTER_BLOCK **a4)
{
  struct _NDIS_FILTER_BLOCK *BindContext; // rdi
  unsigned __int64 i; // r10
  struct NDIS_BIND_FILTER_LINK *value; // rcx
  Ndis::BindState **v11; // rdx
  __int64 v12; // r10
  unsigned __int64 v13; // r10
  Ndis::BindState **v14; // rdx

  BindContext = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&a1->BindEngine.m_lock, 0LL);
  for ( i = 0LL; i < a1->Bindings.Filters.m_numElements; i = v12 + 1 )
  {
    value = a1->Bindings.Filters._p[i].__ptr_.__value_;
    if ( value == a2 )
    {
      *a4 = BindContext;
      while ( 1 )
      {
        v13 = i + 1;
        if ( v13 >= a1->Bindings.Filters.m_numElements )
          goto LABEL_11;
        if ( Ndis::BindState::GetBindContext(&a1->Bindings.Filters._p[v13].__ptr_.__value_->BindState) )
        {
          *a3 = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(*v14);
          goto LABEL_11;
        }
      }
    }
    if ( Ndis::BindState::GetBindContext(&value->BindState) )
      BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(*v11);
  }
LABEL_11:
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&a1->BindEngine.m_lock, 0LL);
}
