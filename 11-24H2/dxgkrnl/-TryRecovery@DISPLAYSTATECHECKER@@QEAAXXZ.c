/*
 * XREFs of ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401C1AC0
 * Callers:
 *     DxgkCheckDisplayState @ 0x1401C1B60 (DxgkCheckDisplayState.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     DpiTryLidStateRecovery @ 0x14007C7D4 (DpiTryLidStateRecovery.c)
 *     ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401BE18C (-DxgkRequestDisplayRecoveryToBroker@@YAJXZ.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1401C1998 (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 */

void __fastcall DISPLAYSTATECHECKER::TryRecovery(DISPLAYSTATECHECKER *this)
{
  __int64 v2; // [rsp+38h] [rbp+10h]

  if ( DISPLAYSTATECHECKER::NeedLidStateRecovery(this) )
  {
    DpiTryLidStateRecovery();
  }
  else
  {
    v2 = (unsigned int)Feature_BlackScreenAutoRecoveryFramework__private_featureState;
    if ( (Feature_BlackScreenAutoRecoveryFramework__private_featureState & 0x10) == 0 )
    {
      LODWORD(v2) = Feature_BlackScreenAutoRecoveryFramework__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_BlackScreenAutoRecoveryFramework__private_descriptor,
        v2,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v2,
        3,
        (__int64)&Feature_BlackScreenAutoRecoveryFramework__private_descriptor);
    }
    if ( *((_BYTE *)this + 14095) )
    {
      if ( (((unsigned __int8)*(_DWORD *)this - 1) & 0xFFFFFFF7) == 0 )
        DxgkRequestDisplayRecoveryToBroker();
    }
  }
}
