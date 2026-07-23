/*
 * XREFs of SdbpCheckFromStringVersion @ 0x140808034
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x140807D34 (SdbpCheckAttribute.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall SdbpCheckFromStringVersion(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v4; // esi
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  int v9; // r11d
  unsigned __int8 v11; // [rsp+40h] [rbp+8h]

  v4 = 1;
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
  v5 = *a1;
  while ( v5 )
  {
    v6 = *a2;
    if ( !*a2 )
      break;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0;
    if ( v5 == 42 )
    {
      v9 = 1;
      ++a1;
    }
    else if ( v5 >= 0x30u )
    {
      do
      {
        if ( v5 > 0x39u )
          break;
        ++a1;
        v7 = v5 + 2 * (5 * v7 - 24);
        v5 = *a1;
      }
      while ( *a1 >= 0x30u );
    }
    while ( v6 >= 0x30u && v6 <= 0x39u )
    {
      if ( !v9 )
        v8 = v6 + 2 * (5 * v8 - 24);
      v6 = *++a2;
    }
    if ( !v9 && v7 != v8 )
      return v7 < v8;
    if ( *a1 )
    {
      if ( *a2 && *a1 != *a2 )
        return 0;
      ++a1;
    }
    if ( *a2 )
      ++a2;
    if ( !*a1 )
    {
      v5 = 0;
      if ( !*a2 )
        continue;
    }
    if ( v4 )
    {
      if ( !*a1 )
      {
        v5 = 0;
        if ( v9 )
          continue;
      }
    }
    v4 = 0;
    v5 = *a1;
  }
  return v4;
}
