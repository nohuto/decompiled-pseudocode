/*
 * XREFs of DpiFeatureStartDevice @ 0x14024DEF8
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DpiQueryMiniportInterface @ 0x14018AFAC (DpiQueryMiniportInterface.c)
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x1402884A0 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDX.c)
 */

__int64 __fastcall DpiFeatureStartDevice(__int64 a1)
{
  __int64 v1; // rbx
  int MiniportInterface; // eax
  int FeatureDatabase; // eax
  unsigned int v5; // ebx
  struct DXGK_FEATURE_DATABASE **v7; // [rsp+20h] [rbp-40h]
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h]
  __int128 v10; // [rsp+50h] [rbp-10h]
  __int64 v11; // [rsp+80h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = (unsigned int)Feature_IsFeatureEnabled__private_featureState;
  if ( (Feature_IsFeatureEnabled__private_featureState & 0x10) == 0 )
  {
    LODWORD(v11) = Feature_IsFeatureEnabled__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_IsFeatureEnabled__private_descriptor, v11, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v11,
      3,
      (__int64)&Feature_IsFeatureEnabled__private_descriptor);
  }
  MiniportInterface = DpiQueryMiniportInterface(
                        a1,
                        (__int64)&GUID_WDDM_INTERFACE_FEATURE,
                        48,
                        1,
                        (__int64)v7,
                        (__int64)&v8);
  if ( MiniportInterface < 0 )
  {
    WdLogSingleEntry1(2LL, MiniportInterface);
    *(_QWORD *)&v9 = WdpInterfaceReferenceNop;
    *((_QWORD *)&v9 + 1) = WdpInterfaceReferenceNop;
    *(_QWORD *)&v10 = DpiQueryFeatureSupportLegacy;
    *((_QWORD *)&v10 + 1) = DpiQueryFeatureInterfaceLegacy;
    WdLogGlobalForLineNumber = 141;
    LODWORD(v8) = 65584;
    *((_QWORD *)&v8 + 1) = v1;
  }
  FeatureDatabase = DxgkCreateFeatureDatabase(
                      (PCUNICODE_STRING)(v1 + 528),
                      (const struct _DXGKDDI_FEATURE_INTERFACE *)&v8,
                      0,
                      *(_BYTE *)(v1 + 481) != 0,
                      (struct DXGK_FEATURE_DATABASE **)(v1 + 5832));
  v5 = FeatureDatabase;
  if ( FeatureDatabase >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL, FeatureDatabase);
  WdLogGlobalForLineNumber = 161;
  (*((void (__fastcall **)(_QWORD))&v9 + 1))(*((_QWORD *)&v8 + 1));
  return v5;
}
