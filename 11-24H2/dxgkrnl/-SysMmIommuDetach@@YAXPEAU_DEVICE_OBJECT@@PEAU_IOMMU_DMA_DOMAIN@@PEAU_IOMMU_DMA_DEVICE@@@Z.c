/*
 * XREFs of ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x140285514
 * Callers:
 *     SmmAttachDomainToAllDevices @ 0x140283FC4 (SmmAttachDomainToAllDevices.c)
 *     SmmDetachDomainFromAllDevices @ 0x1402841A4 (SmmDetachDomainFromAllDevices.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x140050C58 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x140056FDC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064960 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall SysMmIommuDetach(struct _DEVICE_OBJECT *a1, struct _IOMMU_DMA_DOMAIN *a2, struct _IOMMU_DMA_DEVICE *a3)
{
  __int64 v3; // r8
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r9

  if ( SmmUseIommuV3Interface() || SmmUseIommuV2Interface() )
  {
    v4 = ((__int64 (__fastcall *)(__int64))qword_140161548)(v3);
    goto LABEL_6;
  }
  if ( (unsigned int)SmmGetIommuInterfaceVersion() < 3 )
  {
    v4 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_140161548)(v6, v5, 0LL);
LABEL_6:
    if ( v4 >= 0 )
      return;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 3407;
  DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"(((NTSTATUS)(Status)) >= 0)", 3407LL, 0LL, 0LL, 0LL, 0LL);
}
