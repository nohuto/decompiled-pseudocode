/*
 * XREFs of ?NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ @ 0x1401C18C4
 * Callers:
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1401C1998 (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

bool __fastcall DISPLAYDIAGNOSTICADAPTERDATA::NeedLidStateRecovery(DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  unsigned int v2; // r8d
  unsigned int i; // edx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h]

  v6 = (unsigned int)Feature_UnreliableLidRecovery__private_featureState;
  if ( (Feature_UnreliableLidRecovery__private_featureState & 0x10) == 0 )
  {
    LODWORD(v6) = Feature_UnreliableLidRecovery__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_UnreliableLidRecovery__private_descriptor,
      v6,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v6,
      3,
      (__int64)&Feature_UnreliableLidRecovery__private_descriptor);
  }
  if ( !*((_BYTE *)this + 3504) || *((_BYTE *)this + 3506) )
    return 0;
  v2 = *((_DWORD *)this + 489);
  for ( i = 0; i < v2; ++i )
  {
    if ( i >= 4 )
      v4 = 8LL;
    else
      v4 = (__int64)this + 248 * i + 972;
    if ( *(_DWORD *)v4 > 1u )
      return 1;
  }
  return v2 == 1 && *((_BYTE *)this + 970) && *((_BYTE *)this + 971) != 0;
}
