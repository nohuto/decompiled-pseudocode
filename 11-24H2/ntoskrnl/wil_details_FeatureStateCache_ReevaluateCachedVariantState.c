/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1405DB508
 * Callers:
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x1405DB0A0 (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 * Callees:
 *     wil_details_GetCurrentVariantState @ 0x1405DB610 (wil_details_GetCurrentVariantState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

signed __int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedVariantState(
        __int64 a1,
        signed __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // esi
  signed __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // r9
  signed __int64 v8; // rdi
  unsigned int v9; // r8d
  signed __int64 v10; // rax
  __int64 CurrentVariantState; // [rsp+30h] [rbp+8h]
  unsigned __int64 v13; // [rsp+30h] [rbp+8h]
  int v14; // [rsp+40h] [rbp+18h] BYREF
  int v15; // [rsp+44h] [rbp+1Ch]

  v15 = HIDWORD(a3);
  v4 = 0;
  v5 = a2;
  v14 = 0;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v4 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  CurrentVariantState = wil_details_GetCurrentVariantState(a1, &v14);
  v6 = CurrentVariantState;
  v7 = HIDWORD(CurrentVariantState);
  while ( 1 )
  {
    HIDWORD(v13) = HIDWORD(v5);
    v8 = v5;
    if ( (v5 & 8) != 0 )
    {
      v9 = v5;
    }
    else
    {
      v9 = (v14 != 0 ? 8 : 0) | v6 & 0x3F800 | v5 & 0xFFFC07F7;
      v13 = __PAIR64__(v7, v9);
      v8 = __PAIR64__(v7, v9);
    }
    if ( (v5 & 4) == 0 )
    {
      LODWORD(v13) = v9 & 0xFFFFFBFF | v6 & 0x400 | 4;
      v8 = v13;
    }
    v10 = _InterlockedCompareExchange64(&Feature_AdaptiveHibernateEnhancements__private_featureState, v8, v5);
    if ( v5 == v10 )
      break;
    v5 = v10;
  }
  if ( (v5 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    guard_dispatch_icall_no_overrides(&Feature_AdaptiveHibernateEnhancements__private_featureState, 3LL, v4, v7);
  return v8;
}
