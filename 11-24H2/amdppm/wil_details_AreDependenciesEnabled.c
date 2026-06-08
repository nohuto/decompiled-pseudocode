/*
 * XREFs of wil_details_AreDependenciesEnabled @ 0x1400045CC
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140004E18 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x140004B80 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

_BOOL8 __fastcall wil_details_AreDependenciesEnabled(__int64 a1)
{
  __int64 *v1; // rdi
  BOOL v2; // ebx
  __int64 v3; // rax

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
        v2 = (wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(_QWORD *)v3, *v1++) & 1) != 0;
        if ( !v2 )
          return v2;
      }
    }
  }
  return v2;
}
