/*
 * XREFs of SmmSwapDomains @ 0x14027DA90
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x14027D4D8 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x14027D724 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x14027D7F4 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     SmmAttachDomainToAllDevices @ 0x14027CC54 (SmmAttachDomainToAllDevices.c)
 *     SmmDetachDomainFromAllDevices @ 0x14027CE34 (SmmDetachDomainFromAllDevices.c)
 */

__int64 __fastcall SmmSwapDomains(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2, struct _IOMMU_DMA_DOMAIN *a3)
{
  int v6; // edi
  int v7; // eax

  if ( *(_QWORD *)(a1 + 368) )
    (*(void (**)(void))(a1 + 336))();
  if ( a3 )
    SmmDetachDomainFromAllDevices(a1, a3);
  v6 = SmmAttachDomainToAllDevices(a1, a2);
  if ( v6 < 0 )
  {
    if ( a3 )
    {
      v7 = SmmAttachDomainToAllDevices(a1, a3);
      v6 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry5(0LL, 484LL, 10LL, a1, a2, v7);
        WdLogGlobalForLineNumber = 2220;
      }
    }
    WdLogSingleEntry3(3LL, a1, *(_QWORD *)(a1 + 112), v6);
    WdLogGlobalForLineNumber = 2227;
  }
  if ( *(_QWORD *)(a1 + 368) )
    (*(void (__fastcall **)(__int64))(a1 + 344))(a1);
  return (unsigned int)v6;
}
