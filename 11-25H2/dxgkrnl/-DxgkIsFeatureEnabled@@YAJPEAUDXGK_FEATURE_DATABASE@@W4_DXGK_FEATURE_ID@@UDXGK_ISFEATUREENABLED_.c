/*
 * XREFs of ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x14028134C
 * Callers:
 *     DpiIsFeatureEnabled @ 0x140247234 (DpiIsFeatureEnabled.c)
 *     CheckFeatureDependencies @ 0x140280AE8 (CheckFeatureDependencies.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 *     IsFeatureEnabledUncached @ 0x140281B78 (IsFeatureEnabledUncached.c)
 *     QueryCachedFeatureState @ 0x140281F68 (QueryCachedFeatureState.c)
 *     RecordCachedFeatureState @ 0x140282008 (RecordCachedFeatureState.c)
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
