/*
 * XREFs of wil_details_FeatureReporting_IncrementUsageInCache @ 0x140228BB4
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1401A5620 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        volatile signed __int32 *a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  __int64 result; // rax
  BOOL v8; // esi
  unsigned int v10; // ecx
  char v11; // r9
  int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // r8d
  int v15; // ett

  LODWORD(result) = *a1;
  v8 = a2 == 4;
  do
  {
    a4[1] = 0;
    v10 = result | 1;
    v11 = result;
    if ( ((((unsigned int)result | 1) >> 14) & 1) != v8 )
    {
      if ( ((v10 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v10 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v10 = result & 0xFFFFC01E | 1;
      }
      v12 = 0;
      if ( a2 == 4 )
        v12 = 0x4000;
      v10 = v10 & 0xFFFFBFFF | v12;
    }
    v13 = (v10 >> 5) & 0x1FF;
    v14 = v13 + a3;
    if ( v13 + a3 > 0x1FF || v14 < v13 )
    {
      LOWORD(v14) = a3;
      a4[2] = a2;
      a4[1] = v13;
    }
    v15 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             ((unsigned __int16)v10 ^ (unsigned __int16)(32 * v14)) & 0x3FE0 ^ v10,
                             result);
  }
  while ( v15 != (_DWORD)result );
  a4[4] = 0;
  *a4 = (v11 & 1) == 0;
  return result;
}
