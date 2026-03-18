/*
 * XREFs of DxgkGetLegacyDpiInfo @ 0x1401D78B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401D63E4 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall DxgkGetLegacyDpiInfo(__int64 a1, Win81 *a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx

  if ( *(int *)a1 < 4096 )
    return Win81::DxgkUpdateGdiInfo(a2, (void *)a3, *(unsigned int *)(a1 + 4), *(_DWORD *)(a1 + 8), a4);
  v6 = a3;
  WdLogSingleEntry3(1LL, -1073741823LL, a2, a3);
  WdLogGlobalForLineNumber = 1127;
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    0xFFFFFFFFLL,
    L"Win81::DxgkUpdateGdiInfo failed with Status = 0x%I64x, adapter = 0x%I64x, SourceId = 0x%I64x",
    -1073741823LL,
    (__int64)a2,
    v6,
    0LL,
    0LL);
  return 3221225485LL;
}
