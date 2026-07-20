/*
 * XREFs of wil_details_FeatureReporting_IncrementUsageInCache @ 0x140019FA0
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14001A084 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  signed __int32 v4; // r8d
  BOOL v7; // edi
  unsigned int v8; // eax
  char v9; // r10
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  bool v13; // zf
  __int64 result; // rax

  v4 = *a1;
  v7 = a2 == 4;
  do
  {
    a4[1] = 0;
    v8 = v4 | 1;
    v9 = v4;
    if ( (((v4 | 1u) >> 14) & 1) != v7 )
    {
      if ( ((v8 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v8 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v8 = v4 & 0xFFFFC01E | 1;
      }
      v10 = 0;
      if ( a2 == 4 )
        v10 = 0x4000;
      v8 = v8 & 0xFFFFBFFF | v10;
    }
    v11 = (v8 >> 5) & 0x1FF;
    v12 = v11 + 1;
    if ( v11 + 1 > 0x1FF || v12 < v11 )
    {
      LOWORD(v12) = 1;
      a4[2] = a2;
      a4[1] = v11;
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(32 * v12)) & 0x3FE0,
                             v4);
    v13 = v4 == (_DWORD)result;
    v4 = result;
  }
  while ( !v13 );
  a4[4] = 0;
  *a4 = (v9 & 1) == 0;
  return result;
}
