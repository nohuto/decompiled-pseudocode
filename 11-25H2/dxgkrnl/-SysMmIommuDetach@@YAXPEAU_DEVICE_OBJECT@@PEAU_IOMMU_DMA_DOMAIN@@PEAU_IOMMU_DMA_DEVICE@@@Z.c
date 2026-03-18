/*
 * XREFs of ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x14027E1A4
 * Callers:
 *     SmmAttachDomainToAllDevices @ 0x14027CC54 (SmmAttachDomainToAllDevices.c)
 *     SmmDetachDomainFromAllDevices @ 0x14027CE34 (SmmDetachDomainFromAllDevices.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1400511E8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064D40 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall SysMmIommuDetach(struct _DEVICE_OBJECT *a1, struct _IOMMU_DMA_DOMAIN *a2, struct _IOMMU_DMA_DEVICE *a3)
{
  __int64 v3; // r8
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r9

  if ( SmmUseIommuV3Interface() || SmmUseIommuV2Interface() )
  {
    v4 = ((__int64 (__fastcall *)(__int64))qword_14015E538)(v3);
    goto LABEL_6;
  }
  if ( (unsigned int)SmmGetIommuInterfaceVersion() < 3 )
  {
    v4 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_14015E538)(v6, v5, 0LL);
LABEL_6:
    if ( v4 >= 0 )
      return;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 3399;
  DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"(((NTSTATUS)(Status)) >= 0)", 3399LL, 0LL, 0LL, 0LL, 0LL);
}
