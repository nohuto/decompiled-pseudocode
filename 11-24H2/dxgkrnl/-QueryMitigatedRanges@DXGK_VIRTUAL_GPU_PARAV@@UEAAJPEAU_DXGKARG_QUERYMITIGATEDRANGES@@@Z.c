/*
 * XREFs of ?QueryMitigatedRanges@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1402167D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::QueryMitigatedRanges(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_QUERYMITIGATEDRANGES *a2)
{
  ULONG NumRanges; // eax
  __int64 v5; // [rsp+20h] [rbp-38h]

  NumRanges = a2->NumRanges;
  if ( !NumRanges )
    return 0LL;
  WdLogSingleEntry1(2LL, NumRanges);
  v5 = a2->NumRanges;
  WdLogGlobalForLineNumber = 665;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid mitigation range count: 0x%I64x",
    v5,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
