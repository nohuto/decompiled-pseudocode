/*
 * XREFs of wil_details_FeatureReporting_IncrementUsageInCache @ 0x1801100D8
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1800D1054 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        volatile signed __int32 *a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  signed __int32 v4; // r10d
  BOOL v8; // esi
  unsigned int v9; // eax
  char v10; // r8
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  bool v14; // zf
  __int64 result; // rax

  v4 = *a1;
  v8 = a2 == 4;
  do
  {
    a4[1] = 0;
    v9 = v4 | 1;
    v10 = v4;
    if ( (((v4 | 1u) >> 14) & 1) != v8 )
    {
      if ( ((v9 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v9 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v9 = v4 & 0xFFFFC01E | 1;
      }
      v11 = 0;
      if ( a2 == 4 )
        v11 = 0x4000;
      v9 = v9 & 0xFFFFBFFF | v11;
    }
    v12 = (v9 >> 5) & 0x1FF;
    v13 = v12 + a3;
    if ( v12 + a3 > 0x1FF || v13 < v12 )
    {
      LOWORD(v13) = a3;
      a4[2] = a2;
      a4[1] = v12;
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(32 * v13)) & 0x3FE0,
                             v4);
    v14 = v4 == (_DWORD)result;
    v4 = result;
  }
  while ( !v14 );
  a4[4] = 0;
  *a4 = (v10 & 1) == 0;
  return result;
}
