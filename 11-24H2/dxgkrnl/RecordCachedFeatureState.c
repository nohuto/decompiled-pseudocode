/*
 * XREFs of RecordCachedFeatureState @ 0x1402894B4
 * Callers:
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1402887F8 (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     EnsureCacheSize @ 0x140288D5C (EnsureCacheSize.c)
 */

__int64 __fastcall RecordCachedFeatureState(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // r14
  int v9; // eax

  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v6 = a2 & 0xFFFFFFF;
  if ( (a2 & 0xFFFFFFF) < *(_DWORD *)(a1 + 16 * ((unsigned __int64)a2 >> 28) + 16)
    || EnsureCacheSize(a1, a2 >> 28, v6 + 1) )
  {
    if ( v6 >= *(_DWORD *)(a1 + 16 * ((unsigned __int64)a2 >> 28) + 16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1083;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"FeatureId.Feature < pCache->Count",
        1083LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v7 = *(_QWORD *)(a1 + 16 * ((unsigned __int64)a2 >> 28) + 8);
    v8 = a2 & 0xFFFFFFF;
    if ( (*(_BYTE *)(v7 + 6 * v8) & 1) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1091;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pCachedState->Valid == FALSE",
        1091LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v9 = *a3;
    *(_WORD *)(v7 + 6 * v8) |= 1u;
    *(_DWORD *)(v7 + 6 * v8 + 2) = v9;
  }
  return ExReleasePushLockExclusiveEx(a1, 0LL);
}
