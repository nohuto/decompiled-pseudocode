/*
 * XREFs of ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401BF110
 * Callers:
 *     DxgkCheckDisplayState @ 0x1401BF1B0 (DxgkCheckDisplayState.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     DpiTryLidStateRecovery @ 0x14007C334 (DpiTryLidStateRecovery.c)
 *     ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401BB804 (-DxgkRequestDisplayRecoveryToBroker@@YAJXZ.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1401BEFE8 (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 */

void __fastcall DISPLAYSTATECHECKER::TryRecovery(DISPLAYSTATECHECKER *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h]

  if ( DISPLAYSTATECHECKER::NeedLidStateRecovery(this) )
  {
    DpiTryLidStateRecovery();
  }
  else
  {
    v6 = (unsigned int)Feature_BlackScreenAutoRecoveryFramework__private_featureState;
    if ( (Feature_BlackScreenAutoRecoveryFramework__private_featureState & 0x10) == 0 )
    {
      LODWORD(v6) = Feature_BlackScreenAutoRecoveryFramework__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_BlackScreenAutoRecoveryFramework__private_descriptor,
        v6,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v6,
        3,
        (__int64)&Feature_BlackScreenAutoRecoveryFramework__private_descriptor);
    }
    if ( *((_BYTE *)this + 14095) )
    {
      v5 = (unsigned int)(unsigned __int8)*(_DWORD *)this - 1;
      if ( (v5 & 0xFFFFFFF7) == 0 )
        DxgkRequestDisplayRecoveryToBroker(v5, v2, v3, v4);
    }
  }
}
