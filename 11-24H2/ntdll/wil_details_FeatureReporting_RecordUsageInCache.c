/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1800D1054
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800D0FAC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1801100D8 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x180112174 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  _DWORD *v8; // r9
  int v9; // r8d
  unsigned __int32 v10; // eax
  BOOL v11; // ecx
  unsigned __int32 v12; // ett
  int v13; // edx
  signed __int32 v14; // eax
  int v15; // r10d
  char v16; // r11
  signed __int32 v17; // r8d
  signed __int32 v18; // ett

  v8 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( a3 )
  {
    case 0u:
      goto LABEL_34;
    case 1u:
LABEL_33:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a5, a1);
      return v8;
    case 2u:
    case 3u:
      goto LABEL_17;
    case 4u:
LABEL_34:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a5, a1);
      return v8;
    case 5u:
      goto LABEL_33;
  }
  if ( a3 - 6 >= 2 )
  {
    v9 = a3 - 320;
    if ( v9 >= 64 )
      goto LABEL_16;
    v10 = *((_DWORD *)a2 + 1);
    do
    {
      v11 = (v10 & 0x10) != 0 && ((v10 >> 5) & 0x3F) == v9;
      v8[4] = v11;
      v12 = v10;
      v10 = _InterlockedCompareExchange(
              a2 + 1,
              v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(32 * v9)) & 0x7E0 | 0x10,
              v10);
    }
    while ( v12 != v10 );
    if ( !v8[4] )
    {
LABEL_16:
      v8[1] = a5;
      v8[2] = a3;
      v8[3] = a4;
    }
    return v8;
  }
LABEL_17:
  v13 = 0;
  switch ( a3 )
  {
    case 2u:
      v13 = 2;
      break;
    case 3u:
      v13 = 8;
      break;
    case 6u:
      v13 = 4;
      break;
    case 7u:
      v13 = 16;
      break;
  }
  v14 = *a2;
  v15 = 1;
  do
  {
    v16 = v14;
    *(_DWORD *)(a1 + 16) = (v14 | v13) == v14;
    v17 = v14 | v13 | 1;
    if ( (v14 | v13) == v14 )
      v17 = v14 | v13;
    v18 = v14;
    v14 = _InterlockedCompareExchange(a2, v17, v14);
  }
  while ( v18 != v14 );
  if ( (v17 & 1) == 0 || (v16 & 1) != 0 )
    v15 = 0;
  *(_DWORD *)a1 = v15;
  return v8;
}
