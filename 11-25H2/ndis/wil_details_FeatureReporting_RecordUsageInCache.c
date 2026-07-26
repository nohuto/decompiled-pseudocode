/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x14009F934
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14009FB3C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x14009F760 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x14009F844 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 a3,
        int a4)
{
  int v6; // r10d
  unsigned __int32 v7; // eax
  BOOL v8; // ecx
  unsigned __int32 v9; // ett
  int v10; // edx
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  signed __int32 v14; // eax
  int v15; // r9d
  char v16; // r10
  signed __int32 v17; // r8d
  signed __int32 v18; // ett

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( (_DWORD)a3 )
  {
    case 0:
      goto LABEL_34;
    case 1:
LABEL_33:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
      return a1;
    case 2:
    case 3:
      goto LABEL_17;
    case 4:
LABEL_34:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
      return a1;
    case 5:
      goto LABEL_33;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v6 = a3 - 320;
    if ( (int)a3 - 320 >= 64 )
      goto LABEL_16;
    v7 = *((_DWORD *)a2 + 1);
    do
    {
      v8 = (v7 & 0x10) != 0 && ((v7 >> 5) & 0x3F) == v6;
      *(_DWORD *)(a1 + 16) = v8;
      v9 = v7;
      v7 = _InterlockedCompareExchange(
             a2 + 1,
             v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(32 * v6)) & 0x7E0 | 0x10,
             v7);
    }
    while ( v9 != v7 );
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_16:
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 12) = a4;
    }
    return a1;
  }
LABEL_17:
  v10 = 0;
  v11 = a3 - 2;
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
  v14 = *a2;
  v15 = 1;
  do
  {
    v16 = v14;
    *(_DWORD *)(a1 + 16) = (v14 | v10) == v14;
    v17 = v14 | v10 | 1;
    if ( (v14 | v10) == v14 )
      v17 = v14 | v10;
    v18 = v14;
    v14 = _InterlockedCompareExchange(a2, v17, v14);
  }
  while ( v18 != v14 );
  if ( (v17 & 1) == 0 || (v16 & 1) != 0 )
    v15 = 0;
  *(_DWORD *)a1 = v15;
  return a1;
}
