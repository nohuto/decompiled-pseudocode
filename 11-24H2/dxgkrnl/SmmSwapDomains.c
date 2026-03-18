/*
 * XREFs of SmmSwapDomains @ 0x140284E00
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x140284848 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140284A94 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x140284B64 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     SmmAttachDomainToAllDevices @ 0x140283FC4 (SmmAttachDomainToAllDevices.c)
 *     SmmDetachDomainFromAllDevices @ 0x1402841A4 (SmmDetachDomainFromAllDevices.c)
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
        WdLogGlobalForLineNumber = 2228;
      }
    }
    WdLogSingleEntry3(3LL, a1, *(_QWORD *)(a1 + 112), v6);
    WdLogGlobalForLineNumber = 2235;
  }
  if ( *(_QWORD *)(a1 + 368) )
    (*(void (__fastcall **)(__int64))(a1 + 344))(a1);
  return (unsigned int)v6;
}
