/*
 * XREFs of wil_details_FeatureReporting_IncrementUsageInCache @ 0x14008A848
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14008A938 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        wil_details_FeatureReportingCache *reporting,
        wil_details_ServiceReportingKind kind,
        unsigned int result,
        wil_details_RecordUsageResult *a4)
{
  signed __int32 exchange; // eax
  BOOL v8; // edi
  unsigned int v9; // ecx
  char v10; // r9
  int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // r8d
  signed __int32 v14; // ett

  exchange = reporting->reported.exchange;
  v8 = kind == wil_details_ServiceReportingKind_PotentialUniqueUsage;
  do
  {
    a4->countImmediate = 0;
    v9 = exchange | 1;
    v10 = exchange;
    if ( (((exchange | 1u) >> 14) & 1) != v8 )
    {
      if ( ((v9 >> 5) & 0x1FF) != 0 )
      {
        a4->countImmediate = (v9 >> 5) & 0x1FF;
        a4->kindImmediate = kind == wil_details_ServiceReportingKind_UniqueUsage
                          ? wil_details_ServiceReportingKind_PotentialUniqueUsage
                          : wil_details_ServiceReportingKind_UniqueUsage;
        v9 = exchange & 0xFFFFC01E | 1;
      }
      v11 = 0;
      if ( kind == wil_details_ServiceReportingKind_PotentialUniqueUsage )
        v11 = 0x4000;
      v9 = v9 & 0xFFFFBFFF | v11;
    }
    v12 = (v9 >> 5) & 0x1FF;
    v13 = v12 + 1;
    if ( v12 + 1 > 0x1FF || v13 < v12 )
    {
      LOWORD(v13) = 1;
      a4->kindImmediate = kind;
      a4->countImmediate = v12;
    }
    v14 = exchange;
    exchange = _InterlockedCompareExchange(
                 (volatile signed __int32 *)reporting,
                 ((unsigned __int16)v9 ^ (unsigned __int16)(32 * v13)) & 0x3FE0 ^ v9,
                 exchange);
  }
  while ( v14 != exchange );
  a4->ignoredUse = 0;
  a4->queueBackground = (v10 & 1) == 0;
}
