/*
 * XREFs of SmmMapExistingMemoryToDomain @ 0x140094D7C
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x140284848 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     SmmIommuSwitchToTranslation @ 0x140284B64 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     ?SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003A24C (-SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@.c)
 *     ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003A2C4 (-SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMM.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003ADD4 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005A46C (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x140094EC4 (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 */

__int64 __fastcall SmmMapExistingMemoryToDomain(__int64 a1)
{
  struct SYSMM_ADAPTER_OBJECT *v1; // rdi
  struct SYSMM_ADAPTER_OBJECT *j; // rbx
  struct SYSMM_IOMMU *v4; // r15
  KIRQL v5; // r13
  __int64 i; // rbp
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 LogicalAddress; // rax
  __int64 v11; // r9

  v1 = (struct SYSMM_ADAPTER_OBJECT *)(a1 + 40);
  j = *(struct SYSMM_ADAPTER_OBJECT **)(a1 + 40);
  v4 = (struct SYSMM_IOMMU *)(a1 + 64);
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 36));
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 28); i = (unsigned int)(i + 1) )
  {
    v7 = SmmMapHardwareReservedRangeToIommu(
           (const struct SYSMM_HARDWARE_RESERVED_RANGE *)(*(_QWORD *)(a1 + 400) + 24 * i),
           v4);
    if ( v7 < 0 )
    {
LABEL_10:
      while ( 1 )
      {
        v1 = *(struct SYSMM_ADAPTER_OBJECT **)v1;
        if ( v1 == j )
          break;
        SmmUnmapObjectFromIommu((struct SYSMM_ADAPTER_OBJECT *)((char *)v1 - 64), v1, v4);
      }
      if ( (_DWORD)i )
      {
        v8 = 0LL;
        v9 = (unsigned int)i;
        do
        {
          LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(v8 + *(_QWORD *)(a1 + 400) + 16));
          SmmUnmapContiguousRangeFromIommu(
            v4,
            LogicalAddress,
            (struct _MDL *)(*(__int64 *)(v8 + v11) >> 12),
            *(_QWORD *)(v8 + v11 + 8),
            0);
          v8 += 24LL;
          --v9;
        }
        while ( v9 );
      }
      WdLogSingleEntry2(3LL, a1, v7);
      WdLogGlobalForLineNumber = 1675;
      goto LABEL_16;
    }
  }
  for ( j = *(struct SYSMM_ADAPTER_OBJECT **)v1; j != v1; j = *(struct SYSMM_ADAPTER_OBJECT **)j )
  {
    v7 = SmmMapObjectToIommu((struct SYSMM_ADAPTER_OBJECT *)((char *)j - 64), j, v4);
    if ( v7 < 0 )
      goto LABEL_10;
  }
  v7 = 0;
LABEL_16:
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 36), v5);
  return (unsigned int)v7;
}
