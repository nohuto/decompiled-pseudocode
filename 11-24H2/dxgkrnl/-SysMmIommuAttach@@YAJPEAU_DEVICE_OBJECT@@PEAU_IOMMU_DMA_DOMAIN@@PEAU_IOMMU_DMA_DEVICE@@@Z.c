/*
 * XREFs of ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14028540C
 * Callers:
 *     SmmAttachDomainToAllDevices @ 0x140283FC4 (SmmAttachDomainToAllDevices.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x140050C58 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x140056FDC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064960 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
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
    v6 = ((__int64 (__fastcall *)(struct _IOMMU_DMA_DOMAIN *, __int64))qword_140161540)(a2, v5);
  }
  else
  {
    if ( (unsigned int)SmmGetIommuInterfaceVersion() >= 3 )
    {
      v7 = -1073741823;
LABEL_10:
      WdLogSingleEntry2(2LL, a2, a1);
      WdLogGlobalForLineNumber = 3368;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to attach IOMMU_DMA_DOMAIN 0x%.16I64x to DEVICE_OBJECT 0x%.16I64x",
        (__int64)a2,
        (__int64)a1,
        0LL,
        0LL,
        0LL);
      return v7;
    }
    v6 = ((__int64 (__fastcall *)(struct _IOMMU_DMA_DOMAIN *, struct _DEVICE_OBJECT *, _QWORD, __int64))qword_140161540)(
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
    WdLogGlobalForLineNumber = 3358;
  }
  else if ( v6 < 0 )
  {
    goto LABEL_10;
  }
  return v7;
}
