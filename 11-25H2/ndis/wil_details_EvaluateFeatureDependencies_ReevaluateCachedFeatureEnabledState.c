/*
 * XREFs of wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x14014263C
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140142604 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140142604 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        unsigned __int32 a2,
        __int64 a3)
{
  signed __int32 v3; // ebx
  int v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // rax
  signed __int32 v8; // eax
  signed __int32 v9; // ecx
  signed __int32 i; // edx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  __int64 v15; // [rsp+48h] [rbp+10h]

  HIDWORD(v15) = 0;
  v3 = a2;
  v5 = (a2 >> 6) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a3 + 32);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          break;
        if ( *(_BYTE *)(v7 + 30) || *(_BYTE *)(v7 + 29) )
        {
          if ( !*(_BYTE *)(v7 + 31) )
          {
            v5 = 0;
            break;
          }
          v5 = 1;
          ++v6;
        }
        else
        {
          v5 = (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*(unsigned int **)v7, *v6++) & 1) != 0;
          if ( !v5 )
            break;
        }
      }
    }
  }
  LOBYTE(v8) = v3;
  v9 = v3;
  for ( i = v3; ; i = v8 )
  {
    v11 = v8 & 1;
    v12 = v5 | v3 & 0xFFFFFFFE;
    if ( v11 == v5 )
      i = v9;
    v13 = v12 & 0xFFFFFFCF;
    if ( v11 == v5 )
      v13 = v12;
    v8 = _InterlockedCompareExchange(a1, v13 & 0xFFFFFDFF, i);
    if ( i == v8 )
      break;
    v3 = v8;
    v9 = v8;
  }
  LODWORD(v15) = v13 & 0xFFFFFDFF;
  return v15;
}
