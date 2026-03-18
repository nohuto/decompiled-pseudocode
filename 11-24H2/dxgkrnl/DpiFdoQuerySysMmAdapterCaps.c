/*
 * XREFs of DpiFdoQuerySysMmAdapterCaps @ 0x140244DA4
 * Callers:
 *     DpiFdoCreateSysMmAdapter @ 0x14023D2B4 (DpiFdoCreateSysMmAdapter.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkGpuVaIoMmuEnabled @ 0x1401848A0 (DxgkGpuVaIoMmuEnabled.c)
 *     DpiReadPnpRegistryValue @ 0x14036B708 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall DpiFdoQuerySysMmAdapterCaps(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v8)(__int64, __int128 *); // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 (__fastcall *v12)(__int64, __int128 *); // rax
  int v13; // eax
  unsigned int *v14; // rsi
  unsigned int v15; // edx
  _DWORD *v16; // rdi
  __int64 v17; // rcx
  int v18; // ecx
  char v19; // al
  int v20; // eax
  __int64 v21; // rcx
  int v22; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  __int128 v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+50h] [rbp-20h]
  __int64 *v27; // [rsp+58h] [rbp-18h]
  __int128 v28; // [rsp+60h] [rbp-10h]
  __int64 v29; // [rsp+98h] [rbp+28h] BYREF

  v29 = (unsigned int)Feature_DmaRemapping__private_featureState;
  if ( (Feature_DmaRemapping__private_featureState & 0x10) == 0 )
  {
    LODWORD(v29) = Feature_DmaRemapping__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_DmaRemapping__private_descriptor, v29, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v29,
      3,
      (__int64)&Feature_DmaRemapping__private_descriptor);
  }
  v24 = 0LL;
  LODWORD(v29) = 0;
  v26 = 0LL;
  v27 = &v24;
  v8 = *(__int64 (__fastcall **)(__int64, __int128 *))(a2 + 272);
  v25 = 0LL;
  LODWORD(v25) = 34;
  v28 = 0LL;
  LODWORD(v28) = 8;
  v9 = v8(a3, &v25);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 9265;
    return v10;
  }
  LODWORD(v25) = 35;
  v27 = &v29;
  v12 = *(__int64 (__fastcall **)(__int64, __int128 *))(a2 + 272);
  LODWORD(v28) = 4;
  v13 = v12(a3, &v25);
  v10 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL, v13);
    WdLogGlobalForLineNumber = 9282;
    return v10;
  }
  v14 = (unsigned int *)(a4 + 16);
  v15 = *(_DWORD *)(a4 + 16) & 0xFFFFFFFE;
  *(_QWORD *)a4 = v24;
  *(_DWORD *)(a4 + 16) = v29 & 4 | v29 & 2 | v29 & 1 | v15 & 0xFFFFFFF9;
  v16 = (_DWORD *)(a4 + 16);
  if ( DxgkGpuVaIoMmuEnabled() )
  {
    v17 = *(_QWORD *)(a1 + 24);
    v22 = 0;
    v23 = 0;
    if ( (int)DpiReadPnpRegistryValue(v17, L"DxgkGpuVaIommuSupported", &v22, 4LL, 2) >= 0 )
    {
      v16 = (_DWORD *)(a4 + 16);
      LODWORD(v29) = (v22 != 0 ? 8 : 0) | v29 & 0xFFFFFFF7;
    }
    if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(a1 + 24), L"DxgkGpuVaIommuGlobalSupported", &v23, 4LL, 2) < 0 )
    {
      v19 = v29;
    }
    else
    {
      v16 = (_DWORD *)(a4 + 16);
      v18 = v23 != 0 ? 0x10 : 0;
      v19 = v18 | v29 & 0xEF;
      LODWORD(v29) = v18 | v29 & 0xFFFFFFEF;
    }
    *v14 = v19 & 0x10 | *v14 & 0xFFFFFFE7 | v19 & 8;
  }
  if ( (*v14 & 0x18) != 0 )
  {
    v20 = *v14 | 4;
    *(_DWORD *)(a4 + 16) = v20;
    v20 |= 1u;
    *v16 = v20;
    if ( (v20 & 0x10) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 24);
      v23 = 0;
      DpiReadPnpRegistryValue(v21, L"DualSmmu", &v23, 4LL, 2);
      *v16 = (v23 != 0 ? 0x20 : 0) | *v16 & 0xFFFFFFDF;
    }
  }
  return 0LL;
}
