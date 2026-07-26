/*
 * XREFs of ??1NDIS_PD_BM_DOMAIN@@QEAA@XZ @ 0x1401395B8
 * Callers:
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x140139864 (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall NDIS_PD_BM_DOMAIN::~NDIS_PD_BM_DOMAIN(void (**this)(void))
{
  if ( this[4] )
  {
    this[10]();
    this[4] = 0LL;
  }
}
