/*
 * XREFs of CheckFeatureDependencies @ 0x140280AE8
 * Callers:
 *     IsFeatureEnabledUncached @ 0x140281B78 (IsFeatureEnabledUncached.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x14028134C (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
 */

__int64 __fastcall CheckFeatureDependencies(__int64 a1, int a2, int **a3, _BYTE *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  int IsFeatureEnabled; // ebp

  v4 = a2;
  *a4 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v5 = **a3;
    IsFeatureEnabled = DxgkIsFeatureEnabled(a1);
    if ( IsFeatureEnabled < 0 )
    {
      WdLogSingleEntry2(2LL, v5, v4);
      WdLogGlobalForLineNumber = 806;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to query dependency %u for feature %u. Assuming disabled",
        v5,
        v4,
        0LL,
        0LL,
        0LL);
      return (unsigned int)IsFeatureEnabled;
    }
    WdLogSingleEntry2(4LL, v4, v5);
    WdLogGlobalForLineNumber = 815;
  }
  else
  {
    *a4 = 1;
  }
  return 0LL;
}
