/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x14008A994
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14008AB9C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x14008A7C0 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x14008A8A4 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

wil_details_RecordUsageResult *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        wil_details_RecordUsageResult *result,
        wil_details_FeatureReportingCache *reporting,
        unsigned __int32 kind,
        unsigned int payloadId)
{
  unsigned __int32 v6; // r10d
  unsigned __int32 exchange; // eax
  BOOL v8; // ecx
  unsigned __int32 v9; // ett
  int v10; // edx
  unsigned __int32 v11; // r8d
  unsigned __int32 v12; // r8d
  unsigned __int32 v13; // r8d
  signed __int32 v14; // eax
  int v15; // r9d
  char v16; // r10
  signed __int32 v17; // r8d
  signed __int32 v18; // ett

  *(_OWORD *)&result->queueBackground = 0LL;
  *(_QWORD *)&result->ignoredUse = 0LL;
  switch ( kind )
  {
    case 0u:
      goto LABEL_34;
    case 1u:
LABEL_33:
      wil_details_FeatureReporting_IncrementOpportunityInCache(
        reporting,
        (wil_details_ServiceReportingKind)kind,
        kind,
        result);
      return result;
    case 2u:
    case 3u:
      goto LABEL_17;
    case 4u:
LABEL_34:
      wil_details_FeatureReporting_IncrementUsageInCache(
        reporting,
        (wil_details_ServiceReportingKind)kind,
        kind,
        result);
      return result;
    case 5u:
      goto LABEL_33;
  }
  if ( kind - 6 >= 2 )
  {
    v6 = kind - 320;
    if ( (int)(kind - 320) >= 64 )
      goto LABEL_16;
    exchange = reporting->recorded.exchange;
    do
    {
      v8 = (exchange & 0x10) != 0 && ((exchange >> 5) & 0x3F) == v6;
      result->ignoredUse = v8;
      v9 = exchange;
      exchange = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&reporting->recorded,
                   exchange ^ ((unsigned __int16)exchange ^ (unsigned __int16)(32 * v6)) & 0x7E0 | 0x10,
                   exchange);
    }
    while ( v9 != exchange );
    if ( !result->ignoredUse )
    {
LABEL_16:
      result->kindImmediate = kind;
      result->countImmediate = 1;
      result->payloadId = payloadId;
    }
    return result;
  }
LABEL_17:
  v10 = 0;
  v11 = kind - 2;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 3;
      if ( v13 )
      {
        if ( v13 == 1 )
          v10 = 16;
      }
      else
      {
        v10 = 4;
      }
    }
    else
    {
      v10 = 8;
    }
  }
  else
  {
    v10 = 2;
  }
  v14 = reporting->reported.exchange;
  v15 = 1;
  do
  {
    v16 = v14;
    result->ignoredUse = (v14 | v10) == v14;
    v17 = v14 | v10 | 1;
    if ( (v14 | v10) == v14 )
      v17 = v14 | v10;
    v18 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)reporting, v17, v14);
  }
  while ( v18 != v14 );
  if ( (v17 & 1) == 0 || (v16 & 1) != 0 )
    v15 = 0;
  result->queueBackground = v15;
  return result;
}
