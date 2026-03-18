/*
 * XREFs of ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027E09C
 * Callers:
 *     SmmAttachDomainToAllDevices @ 0x14027CC54 (SmmAttachDomainToAllDevices.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1400511E8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064D40 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmIommuAttach(
        struct _DEVICE_OBJECT *a1,
        struct _IOMMU_DMA_DOMAIN *a2,
        struct _IOMMU_DMA_DEVICE *a3)
{
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx

  if ( SmmUseIommuV3Interface() || SmmUseIommuV2Interface() )
  {
    v6 = ((__int64 (__fastcall *)(struct _IOMMU_DMA_DOMAIN *, __int64))qword_14015E530)(a2, v5);
  }
  else
  {
    if ( (unsigned int)SmmGetIommuInterfaceVersion() >= 3 )
    {
      v7 = -1073741823;
LABEL_10:
      WdLogSingleEntry2(2LL, a2, a1);
      WdLogGlobalForLineNumber = 3360;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to attach IOMMU_DMA_DOMAIN 0x%.16I64x to DEVICE_OBJECT 0x%.16I64x",
        (__int64)a2,
        (__int64)a1,
        0LL,
        0LL,
        0LL);
      return v7;
    }
    v6 = ((__int64 (__fastcall *)(struct _IOMMU_DMA_DOMAIN *, struct _DEVICE_OBJECT *, _QWORD, __int64))qword_14015E530)(
           a2,
           a1,
           0LL,
           1LL);
  }
  v7 = v6;
  if ( v6 == -1070268314 )
  {
    WdLogSingleEntry2(4LL, a1, a2);
    v7 = 0;
    WdLogGlobalForLineNumber = 3350;
  }
  else if ( v6 < 0 )
  {
    goto LABEL_10;
  }
  return v7;
}
