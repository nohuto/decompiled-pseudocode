/*
 * XREFs of SmmAttachDomainToAllDevices @ 0x14027CC54
 * Callers:
 *     SmmSwapDomains @ 0x14027DA90 (SmmSwapDomains.c)
 * Callees:
 *     ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027E09C (-SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027E1A4 (-SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 */

__int64 __fastcall SmmAttachDomainToAllDevices(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  unsigned int i; // edi
  __int64 v7; // r14
  __int64 v8; // r12
  int v9; // eax
  struct _IOMMU_DMA_DEVICE *v10; // r8
  int v11; // eax

  v2 = 0LL;
  LODWORD(v4) = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 24); ++i )
  {
    v7 = *(_QWORD *)(a1 + 392);
    v8 = i;
    v9 = SysMmIommuAttach(
           *(struct _DEVICE_OBJECT **)(v7 + 24LL * i + 16),
           a2,
           *(struct _IOMMU_DMA_DEVICE **)(v7 + 24LL * i));
    v4 = v9;
    if ( v9 < 0 )
    {
      if ( i )
      {
        do
        {
          SysMmIommuDetach(
            *(struct _DEVICE_OBJECT **)(v2 + *(_QWORD *)(a1 + 392) + 16),
            a2,
            *(struct _IOMMU_DMA_DEVICE **)(v2 + *(_QWORD *)(a1 + 392)));
          v2 += 24LL;
          --v8;
        }
        while ( v8 );
      }
      WdLogSingleEntry2(3LL, i, v4);
      WdLogGlobalForLineNumber = 2063;
      return (unsigned int)v4;
    }
    v10 = *(struct _IOMMU_DMA_DEVICE **)(v7 + 24LL * i + 8);
    if ( v10 )
    {
      v11 = SysMmIommuAttach(*(struct _DEVICE_OBJECT **)(v7 + 24LL * i + 16), a2, v10);
      v4 = v11;
      if ( v11 < 0 )
      {
        SysMmIommuDetach(
          *(struct _DEVICE_OBJECT **)(v7 + 24LL * i + 16),
          a2,
          *(struct _IOMMU_DMA_DEVICE **)(v7 + 24LL * i));
        WdLogSingleEntry2(3LL, i, v4);
        WdLogGlobalForLineNumber = 2072;
        return (unsigned int)v4;
      }
    }
  }
  return (unsigned int)v4;
}
