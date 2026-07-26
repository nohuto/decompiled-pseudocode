/*
 * XREFs of ??1NDIS_PD_BM_DOMAIN@@QEAA@XZ @ 0x1401444A0
 * Callers:
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x14014474C (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall NDIS_PD_BM_DOMAIN::~NDIS_PD_BM_DOMAIN(void (**this)(void))
{
  if ( this[4] )
  {
    this[10]();
    this[4] = 0LL;
  }
}
