/*
 * XREFs of wil_details_AreDependenciesEnabled @ 0x180134A10
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1800D0D6C (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x180105704 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

_BOOL8 __fastcall wil_details_AreDependenciesEnabled(__int64 a1)
{
  __int64 *v1; // rdi
  BOOL v2; // ebx
  __int64 v3; // rax
  char CachedFeatureEnabledState; // al

  v1 = *(__int64 **)(a1 + 32);
  v2 = 1;
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = *v1;
      if ( !*v1 )
        break;
      if ( *(_BYTE *)(v3 + 30) || *(_BYTE *)(v3 + 29) )
      {
        if ( !*(_BYTE *)(v3 + 31) )
          return 0;
        v2 = 1;
        ++v1;
      }
      else
      {
        CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                      *(volatile signed __int32 **)v3,
                                      *v1);
        v2 = (CachedFeatureEnabledState & 1) != 0;
        ++v1;
        if ( (CachedFeatureEnabledState & 1) == 0 )
          return v2;
      }
    }
  }
  return v2;
}
