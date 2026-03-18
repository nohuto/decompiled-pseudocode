/*
 * XREFs of ?ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE@@_N@Z @ 0x1401D10FC
 * Callers:
 *     NtDxgkSetProperties @ 0x1402E1F00 (NtDxgkSetProperties.c)
 *     NtDxgkGetProperties @ 0x1402E2560 (NtDxgkGetProperties.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ProcessBoostedVSyncEligibleProperty(
        struct DXGPROCESS *a1,
        struct _D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE *a2,
        char a3)
{
  const wchar_t *v3; // r9

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v3 = L"Invalid process context, returning 0x%I64x";
    WdLogGlobalForLineNumber = 6269;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v3, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( a3 )
  {
    if ( !*(_BYTE *)a2 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v3 = L"D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE is only allowed to set eligiblity to TRUE, returning 0x%I64x";
      WdLogGlobalForLineNumber = 6278;
      goto LABEL_3;
    }
    *(_BYTE *)(*((_QWORD *)a1 + 8) + 138LL) = 1;
  }
  else
  {
    *(_BYTE *)a2 = *(_BYTE *)(*((_QWORD *)a1 + 8) + 138LL);
  }
  return 0LL;
}
