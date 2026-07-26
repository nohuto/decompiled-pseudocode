/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400900DC
 * Callers:
 *     wil_details_AreDependenciesEnabled @ 0x14008FB70 (wil_details_AreDependenciesEnabled.c)
 *     wil_details_IsEnabledFallback @ 0x140090368 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140090250 (wil_details_GetCurrentFeatureEnabledState.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  signed __int32 v5; // edi
  __int16 CurrentFeatureEnabledState; // bx
  signed __int32 v8; // eax
  char i; // cl
  signed __int32 v10; // esi
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v12 = 0;
  v13 = a2;
  v5 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  CurrentFeatureEnabledState = wil_details_GetCurrentFeatureEnabledState(a3, &v12);
  if ( !*(_BYTE *)(a3 + 28) )
    v12 = v3 != 0 ? v12 : 0;
  v8 = v5;
  for ( i = v5; ; i = v8 )
  {
    v10 = v8 | 0x40000;
    LODWORD(v13) = v8 | 0x40000;
    if ( v12 && (i & 2) == 0 )
    {
      v10 = CurrentFeatureEnabledState & 0x9C1 | v8 & 0xFFFBF63E | 0x40000 | 2;
      LODWORD(v13) = v10;
    }
    if ( (v5 & 4) == 0 )
    {
      v10 = v10 & 0xFFFFFBFF | CurrentFeatureEnabledState & 0x400 | 4;
      LODWORD(v13) = v10;
    }
    v8 = _InterlockedCompareExchange(a1, v10, v5);
    if ( v5 == v8 )
      break;
    v5 = v8;
  }
  if ( (v5 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(a1, *(unsigned __int8 *)(a3 + 28), v3);
  if ( !v12 )
    LODWORD(v13) = v10 & 0xFFFFF63E | CurrentFeatureEnabledState & 0x9C1;
  return v13;
}
