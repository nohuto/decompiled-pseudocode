/*
 * XREFs of SdbpCheckUptoStringVersion @ 0x14080820C
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x140807D34 (SdbpCheckAttribute.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

_BOOL8 __fastcall SdbpCheckUptoStringVersion(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v4; // ebp
  BOOL v5; // ebx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r9
  unsigned __int8 v11; // [rsp+40h] [rbp+8h]

  v4 = 0;
  v5 = 1;
  if ( (Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 0x10) == 0 )
  {
    v11 = Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor,
      Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v11,
      3,
      (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor);
  }
  while ( 1 )
  {
    v6 = *a1;
    if ( !*a1 )
      break;
    v7 = *a2;
    if ( !*a2 )
      return 0;
    v8 = 0LL;
    v9 = 0LL;
    v4 = 0;
    if ( v6 == 42 )
    {
      v4 = 1;
      ++a1;
    }
    else
    {
      while ( v6 >= 0x30u && v6 <= 0x39u )
      {
        ++a1;
        v8 = v6 + 2 * (5 * v8 - 24);
        v6 = *a1;
      }
    }
    while ( v7 >= 0x30u && v7 <= 0x39u )
    {
      if ( !v4 )
        v9 = v7 + 2 * (5 * v9 - 24);
      v7 = *++a2;
    }
    if ( !v4 && v8 != v9 )
    {
      v6 = *a1;
      v5 = v8 > v9;
      if ( *a1 )
        goto LABEL_26;
      break;
    }
    if ( *a1 )
    {
      if ( *a2 && *a1 != *a2 )
        return 0;
      ++a1;
    }
    if ( *a2 )
      ++a2;
  }
  if ( !*a2 )
    return v5;
LABEL_26:
  if ( !v5 || v6 || !v4 )
    return 0;
  return v5;
}
