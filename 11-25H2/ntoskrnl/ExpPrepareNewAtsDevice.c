/*
 * XREFs of ExpPrepareNewAtsDevice @ 0x14064C110
 * Callers:
 *     ExInitializeDeviceAts @ 0x14064BCE0 (ExInitializeDeviceAts.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ExpAtsConfigureSecureDevice @ 0x14064BF9C (ExpAtsConfigureSecureDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewAtsDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v5; // eax
  unsigned int v6; // edi

  *a5 = 0LL;
  v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8));
  v6 = v5;
  if ( v5 == -1073741789 || v5 >= 0 )
    return (unsigned int)-1073741823;
  return v6;
}
