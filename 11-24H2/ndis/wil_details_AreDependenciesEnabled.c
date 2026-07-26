/*
 * XREFs of wil_details_AreDependenciesEnabled @ 0x14008FB70
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140090250 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400900DC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

_BOOL8 __fastcall wil_details_AreDependenciesEnabled(__int64 a1)
{
  unsigned int ***v1; // rdi
  BOOL v2; // ebx
  unsigned int **v3; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h]

  v1 = *(unsigned int ****)(a1 + 32);
  v2 = 1;
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = *v1;
      if ( !*v1 )
        break;
      if ( *((_BYTE *)v3 + 30) || *((_BYTE *)v3 + 29) )
      {
        if ( !*((_BYTE *)v3 + 31) )
          return 0;
        v2 = 1;
        ++v1;
      }
      else
      {
        v6 = **v3;
        if ( (v6 & 2) != 0 )
          v4 = **v3;
        else
          LOBYTE(v4) = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*v3, v6, v3);
        v2 = (v4 & 1) != 0;
        ++v1;
        if ( (v4 & 1) == 0 )
          return v2;
      }
    }
  }
  return v2;
}
