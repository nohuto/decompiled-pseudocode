/*
 * XREFs of wil_details_FeatureReporting_IncrementUsageInCache @ 0x14008FCF4
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14008FDE4 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 result; // rax
  BOOL v8; // edi
  unsigned int v9; // ecx
  char v10; // r9
  int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // r8d
  int v14; // ett

  LODWORD(result) = *a1;
  v8 = a2 == 4;
  do
  {
    a4[1] = 0;
    v9 = result | 1;
    v10 = result;
    if ( ((((unsigned int)result | 1) >> 14) & 1) != v8 )
    {
      if ( ((v9 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v9 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v9 = result & 0xFFFFC01E | 1;
      }
      v11 = 0;
      if ( a2 == 4 )
        v11 = 0x4000;
      v9 = v9 & 0xFFFFBFFF | v11;
    }
    v12 = (v9 >> 5) & 0x1FF;
    v13 = v12 + 1;
    if ( v12 + 1 > 0x1FF || v13 < v12 )
    {
      LOWORD(v13) = 1;
      a4[2] = a2;
      a4[1] = v12;
    }
    v14 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             ((unsigned __int16)v9 ^ (unsigned __int16)(32 * v13)) & 0x3FE0 ^ v9,
                             result);
  }
  while ( v14 != (_DWORD)result );
  a4[4] = 0;
  *a4 = (v10 & 1) == 0;
  return result;
}
