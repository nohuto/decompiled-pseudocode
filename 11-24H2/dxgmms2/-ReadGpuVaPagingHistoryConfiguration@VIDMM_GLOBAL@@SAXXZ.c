/*
 * XREFs of ?ReadGpuVaPagingHistoryConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x1401084C0
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140107540 (-ReadConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004C9EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004CC70 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void VIDMM_GLOBAL::ReadGpuVaPagingHistoryConfiguration(void)
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+38h] [rbp-11h]
  const wchar_t *v8; // [rsp+40h] [rbp-9h]
  unsigned int *v9; // [rsp+48h] [rbp-1h]
  int v10; // [rsp+50h] [rbp+7h]
  __int64 v11; // [rsp+58h] [rbp+Fh]
  int v12; // [rsp+60h] [rbp+17h]
  __int128 v13; // [rsp+68h] [rbp+1Fh]
  __int128 v14; // [rsp+78h] [rbp+2Fh]
  __int128 v15; // [rsp+88h] [rbp+3Fh]
  __int64 v16; // [rsp+98h] [rbp+4Fh]
  int v17; // [rsp+B0h] [rbp+67h] BYREF
  unsigned int v18; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+C0h] [rbp+77h]

  v19 = (unsigned int)Feature_GpuVaPagingHistoryFre__private_featureState;
  if ( (Feature_GpuVaPagingHistoryFre__private_featureState & 0x10) == 0 )
  {
    LODWORD(v19) = Feature_GpuVaPagingHistoryFre__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_GpuVaPagingHistoryFre__private_descriptor,
      v19,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v19,
      3,
      (__int64)&Feature_GpuVaPagingHistoryFre__private_descriptor);
  }
  VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled = 1;
  v17 = 391190;
  v7 = 292;
  v10 = 0x4000000;
  v6 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v18 = (unsigned __int64)qword_1400812F8 > 0x53333333 ? 0x400 : 0;
  v8 = L"GpuVaPagingHistorySize";
  v9 = &v18;
  v13 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v0 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v6, 0LL, 0LL);
  v6 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v1 = v0 >> 31;
  v7 = 292;
  v8 = L"GpuVaPagingHistoryMask";
  v10 = 0x4000000;
  v9 = (unsigned int *)&v17;
  v13 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v6, 0LL, 0LL) >= 0 || (_BYTE)v1 )
    v2 = v17;
  else
    v2 = -1;
  v3 = v18;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled && v18 )
  {
    v4 = v18 >= 0x1FFFFFF ? 0x7FFFFFFF : v18 << 6;
    v3 = (((((((((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 4) | ((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 8) | ((((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 4) | ((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 16) | ((((((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 4) | ((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 8) | ((((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 4) | ((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1))
       - ((((((((((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 4) | ((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 8) | ((((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 4) | ((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 16) | ((((((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 4) | ((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 8) | ((((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 4) | ((v4 | (v4 >> 1)) >> 2) | v4 | (v4 >> 1)) >> 1);
    if ( v3 <= 0x1000 )
      v3 = 4096;
  }
  dword_1400814CC = v3;
  dword_1400814D0 = v2;
  v5 = (_BYTE)v1 != 0 ? 2 : 32;
  if ( v18 >= 0x7FFFFFFF / v5 )
    dword_1400814D4 = 0x7FFFFFFF;
  else
    dword_1400814D4 = v18 * v5;
}
