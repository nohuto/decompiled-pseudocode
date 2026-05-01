/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1800791DC
 * Callers:
 *     CrmComparisonRoutineBinaryBackoffSearchIndexerNPUUsageHigh @ 0x1800784A0 (CrmComparisonRoutineBinaryBackoffSearchIndexerNPUUsageHigh.c)
 *     Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant @ 0x180078D38 (Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant.c)
 * Callees:
 *     wil_details_GetCurrentVariantState @ 0x180079480 (wil_details_GetCurrentVariantState.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed __int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedVariantState(
        __int64 a1,
        signed __int64 a2,
        __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // r9d
  int v6; // ecx
  int v7; // r8d
  signed __int64 v8; // rdi
  unsigned int v9; // edx
  signed __int64 v10; // rax
  __int64 CurrentVariantState; // [rsp+30h] [rbp+8h]
  unsigned __int64 v13; // [rsp+30h] [rbp+8h]
  int v14; // [rsp+40h] [rbp+18h] BYREF
  int v15; // [rsp+44h] [rbp+1Ch]

  v15 = HIDWORD(a3);
  v3 = 0;
  v14 = 0;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  CurrentVariantState = wil_details_GetCurrentVariantState(a1, &v14);
  v5 = HIDWORD(CurrentVariantState);
  v6 = CurrentVariantState;
  v7 = v3 != 0 ? v14 : 0;
  v14 = v7;
  while ( 1 )
  {
    HIDWORD(v13) = HIDWORD(a2);
    v8 = a2;
    if ( (a2 & 8) != 0 )
    {
      v9 = a2;
    }
    else
    {
      v9 = (v7 != 0 ? 8 : 0) | v6 & 0x3F800 | a2 & 0xFFFC07F7;
      v13 = __PAIR64__(v5, v9);
      v8 = __PAIR64__(v5, v9);
    }
    if ( (a2 & 4) == 0 )
    {
      LODWORD(v13) = v9 & 0xFFFFFBFF | v6 & 0x400 | 4;
      v8 = v13;
    }
    v10 = _InterlockedCompareExchange64(&Feature_CRMDrivenIndexerNPUBackoff__private_featureState, v8, a2);
    if ( a2 == v10 )
      break;
    v7 = v14;
    a2 = v10;
  }
  if ( (a2 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(
      &Feature_CRMDrivenIndexerNPUBackoff__private_featureState,
      0LL,
      v3);
  return v8;
}
