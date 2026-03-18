/*
 * XREFs of RecordCachedFeatureState @ 0x140282008
 * Callers:
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x14028134C (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     EnsureCacheSize @ 0x1402818B0 (EnsureCacheSize.c)
 */

__int64 __fastcall RecordCachedFeatureState(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v6; // r9
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // r14
  int v10; // eax

  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v7 = a2 & 0xFFFFFFF;
  if ( (a2 & 0xFFFFFFF) < *(_DWORD *)(a1 + 16 * ((unsigned __int64)a2 >> 28) + 16)
    || EnsureCacheSize(a1, a2 >> 28, v7 + 1, v6) )
  {
    if ( v7 >= *(_DWORD *)(a1 + 16 * ((unsigned __int64)a2 >> 28) + 16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1068;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"FeatureId.Feature < pCache->Count",
        1068LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = *(_QWORD *)(a1 + 16 * ((unsigned __int64)a2 >> 28) + 8);
    v9 = a2 & 0xFFFFFFF;
    if ( (*(_BYTE *)(v8 + 6 * v9) & 1) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1076;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pCachedState->Valid == FALSE", 1076LL, 0LL, 0LL, 0LL, 0LL);
    }
    v10 = *a3;
    *(_WORD *)(v8 + 6 * v9) |= 1u;
    *(_DWORD *)(v8 + 6 * v9 + 2) = v10;
  }
  return ExReleasePushLockExclusiveEx(a1, 0LL);
}
