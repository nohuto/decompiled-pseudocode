/*
 * XREFs of Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage @ 0x1C00D20DC
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154F90 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00D0048 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C012DA34 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_GdiEnableLiveKernelDump__private_featureState;
  if ( (Feature_GdiEnableLiveKernelDump__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_GdiEnableLiveKernelDump__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_GdiEnableLiveKernelDump__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_GdiEnableLiveKernelDump__private_descriptor);
  }
}
