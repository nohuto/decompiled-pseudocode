/*
 * XREFs of ExpPrepareNewAtsDevice @ 0x140656770
 * Callers:
 *     ExInitializeDeviceAts @ 0x140656340 (ExInitializeDeviceAts.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ExpAtsConfigureSecureDevice @ 0x1406565FC (ExpAtsConfigureSecureDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewAtsDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // r12
  int v6; // eax
  unsigned int v7; // edi

  v5 = a5;
  LODWORD(a5) = 0;
  *v5 = 0LL;
  v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8), 0LL);
  v7 = v6;
  if ( v6 == -1073741789 || v6 >= 0 )
    return (unsigned int)-1073741823;
  return v7;
}
