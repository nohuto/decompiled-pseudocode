/*
 * XREFs of wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x14026E830
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1401A5620 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        volatile signed __int32 *a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  __int64 result; // rax
  BOOL v8; // edi
  unsigned int v10; // ecx
  char v11; // r9
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // r8d
  int v16; // ett

  LODWORD(result) = *a1;
  v8 = a2 == 5;
  do
  {
    a4[1] = 0;
    v10 = result | 1;
    v11 = result;
    if ( ((((unsigned int)result | 1) >> 22) & 1) != v8 )
    {
      if ( ((v10 >> 15) & 0x7F) != 0 )
      {
        a4[1] = (v10 >> 15) & 0x7F;
        v12 = 5;
        if ( a2 != 1 )
          v12 = 1;
        v10 = result & 0xFFC07FFE | 1;
        a4[2] = v12;
      }
      v13 = 0;
      if ( a2 == 5 )
        v13 = 0x400000;
      v10 = v10 & 0xFFBFFFFF | v13;
    }
    v14 = (v10 >> 15) & 0x7F;
    v15 = v14 + a3;
    if ( v14 + a3 > 0x7F || v15 < v14 )
    {
      v15 = a3;
      a4[2] = a2;
      a4[1] = v14;
    }
    v16 = result;
    result = (unsigned int)_InterlockedCompareExchange(a1, (v10 ^ (v15 << 15)) & 0x3F8000 ^ v10, result);
  }
  while ( v16 != (_DWORD)result );
  a4[4] = 0;
  *a4 = (v11 & 1) == 0;
  return result;
}
