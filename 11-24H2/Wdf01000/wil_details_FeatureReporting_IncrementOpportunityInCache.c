/*
 * XREFs of wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x14008A7C0
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14008A994 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        wil_details_FeatureReportingCache *reporting,
        wil_details_ServiceReportingKind kind,
        unsigned int result,
        wil_details_RecordUsageResult *a4)
{
  signed __int32 exchange; // eax
  BOOL v8; // ebx
  unsigned int v9; // ecx
  char v10; // r9
  wil_details_ServiceReportingKind v11; // edx
  int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // r8d
  signed __int32 v15; // ett

  exchange = reporting->reported.exchange;
  v8 = kind == wil_details_ServiceReportingKind_PotentialUniqueOpportunity;
  do
  {
    a4->countImmediate = 0;
    v9 = exchange | 1;
    v10 = exchange;
    if ( (((exchange | 1u) >> 22) & 1) != v8 )
    {
      if ( ((v9 >> 15) & 0x7F) != 0 )
      {
        a4->countImmediate = (v9 >> 15) & 0x7F;
        v11 = wil_details_ServiceReportingKind_PotentialUniqueOpportunity;
        if ( kind != wil_details_ServiceReportingKind_UniqueOpportunity )
          v11 = wil_details_ServiceReportingKind_UniqueOpportunity;
        v9 = exchange & 0xFFC07FFE | 1;
        a4->kindImmediate = v11;
      }
      v12 = 0;
      if ( kind == wil_details_ServiceReportingKind_PotentialUniqueOpportunity )
        v12 = 0x400000;
      v9 = v9 & 0xFFBFFFFF | v12;
    }
    v13 = (v9 >> 15) & 0x7F;
    v14 = v13 + 1;
    if ( v13 + 1 > 0x7F || v14 < v13 )
    {
      v14 = 1;
      a4->kindImmediate = kind;
      a4->countImmediate = v13;
    }
    v15 = exchange;
    exchange = _InterlockedCompareExchange(
                 (volatile signed __int32 *)reporting,
                 (v9 ^ (v14 << 15)) & 0x3F8000 ^ v9,
                 exchange);
  }
  while ( v15 != exchange );
  a4->ignoredUse = 0;
  a4->queueBackground = (v10 & 1) == 0;
}
