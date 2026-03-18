/*
 * XREFs of ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1402887F8
 * Callers:
 *     DpiIsFeatureEnabled @ 0x14024E064 (DpiIsFeatureEnabled.c)
 *     CheckFeatureDependencies @ 0x140287F88 (CheckFeatureDependencies.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 *     IsFeatureEnabledUncached @ 0x140289024 (IsFeatureEnabledUncached.c)
 *     QueryCachedFeatureState @ 0x140289414 (QueryCachedFeatureState.c)
 *     RecordCachedFeatureState @ 0x1402894B4 (RecordCachedFeatureState.c)
 */

__int64 __fastcall DxgkIsFeatureEnabled(__int64 a1, unsigned int a2, char a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (a3 & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx(a1, 0LL);
    memset(
      *(void **)(a1 + 16 * ((unsigned __int64)a2 >> 28) + 8),
      0,
      6LL * *(unsigned int *)(a1 + 16 * ((unsigned __int64)a2 >> 28) + 16));
    ExReleasePushLockExclusiveEx(a1, 0LL);
  }
  if ( !(unsigned __int8)QueryCachedFeatureState(a1, a2, &v8) )
  {
    result = IsFeatureEnabledUncached(a1, a2, &v8);
    if ( (int)result < 0 )
      return result;
    if ( (v8 & 0x20000) != 0 )
      RecordCachedFeatureState(a1, a2, &v8);
  }
  *a4 = v8;
  return 0LL;
}
