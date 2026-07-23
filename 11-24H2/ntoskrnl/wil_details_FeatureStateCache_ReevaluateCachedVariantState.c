/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1405B496C
 * Callers:
 *     wil_details_FeatureStateCache_GetCachedVariantState @ 0x1404933E0 (wil_details_FeatureStateCache_GetCachedVariantState.c)
 * Callees:
 *     wil_details_GetCurrentVariantState @ 0x1405B4A80 (wil_details_GetCurrentVariantState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

signed __int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedVariantState(
        volatile signed __int64 *a1,
        signed __int64 a2,
        __int64 a3)
{
  int v3; // esi
  signed __int64 v5; // rbx
  __int64 CurrentVariantState; // rax
  bool v8; // zf
  int v9; // ecx
  unsigned int v10; // r9d
  signed __int64 v11; // rdi
  unsigned int v12; // r8d
  signed __int64 v13; // rax
  int v15; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp+10h]

  v3 = 0;
  v15 = 0;
  v5 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = guard_dispatch_icall_no_overrides(a1, a2);
  CurrentVariantState = wil_details_GetCurrentVariantState(a3, &v15);
  v8 = *(_BYTE *)(a3 + 28) == 0;
  v9 = CurrentVariantState;
  v16 = CurrentVariantState;
  if ( v8 )
    v15 = v3 != 0 ? v15 : 0;
  v10 = HIDWORD(v16);
  while ( 1 )
  {
    v16 = v5;
    v11 = v5;
    if ( (v5 & 8) != 0 )
    {
      v12 = v16;
    }
    else
    {
      v12 = (v15 != 0 ? 8 : 0) | v9 & 0x3F800 | v5 & 0xFFFC07F7;
      v16 = __PAIR64__(v10, v12);
      v11 = __PAIR64__(v10, v12);
    }
    if ( (v5 & 4) == 0 )
    {
      LODWORD(v16) = v12 & 0xFFFFFBFF | v9 & 0x400 | 4;
      v11 = v16;
    }
    v13 = _InterlockedCompareExchange64(a1, v11, v5);
    if ( v5 == v13 )
      break;
    v5 = v13;
  }
  if ( (v5 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    guard_dispatch_icall_no_overrides(a1, *(unsigned __int8 *)(a3 + 28));
  return v11;
}
