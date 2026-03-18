/*
 * XREFs of wil_details_GetCurrentVariantState @ 0x1401B07A8
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1401B06A0 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14019E420 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1402C30F0 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentVariantState(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // esi
  char v4; // bp
  int v5; // r14d
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+8h]

  v9 = 0LL;
  v10 = 0LL;
  *a2 = 1;
  v2 = wil_RtlStagingConfig_QueryFeatureState(&v9, 58853500LL, 1LL);
  v3 = ((_DWORD)v10 != 0 ? 0x400 : 0) | (HIDWORD(v10) != 0 ? 0x800 : 0);
  if ( v2 )
  {
    v4 = BYTE4(v9);
    v5 = HIDWORD(v9);
  }
  else
  {
    v4 = 0;
    v5 = 15;
  }
  v6 = (__int64 *)&Feature_PackagedComElevationSupport__private_requiresFeatures;
  if ( &Feature_PackagedComElevationSupport__private_requiresFeatures )
  {
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      if ( *(_BYTE *)(v7 + 30) || *(_BYTE *)(v7 + 29) )
      {
        if ( !*(_BYTE *)(v7 + 31) )
          goto LABEL_9;
        ++v6;
      }
      else
      {
        ++v6;
        if ( (wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(unsigned int **)v7) & 1) == 0 )
          goto LABEL_9;
      }
    }
  }
  if ( !v4 )
  {
LABEL_9:
    LODWORD(v11) = v3;
LABEL_14:
    HIDWORD(v11) = 15;
    return v11;
  }
  HIDWORD(v11) = v5;
  LODWORD(v11) = v3 ^ ((v4 & 0x3F) << 12);
  if ( !DWORD2(v9) )
    goto LABEL_14;
  return v11;
}
