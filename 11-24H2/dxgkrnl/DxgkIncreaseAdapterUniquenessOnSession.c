/*
 * XREFs of DxgkIncreaseAdapterUniquenessOnSession @ 0x1401FCFA8
 * Callers:
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x14019B038 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IncreaseAdapterUniquenessOnSession@DXGSESSIONMGR@@QEAAJ_K@Z @ 0x1401FAFE4 (-IncreaseAdapterUniquenessOnSession@DXGSESSIONMGR@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DxgkIncreaseAdapterUniquenessOnSession(__int64 a1)
{
  DXGSESSIONMGR *v2; // rcx

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 122);
  if ( v2 )
    return DXGSESSIONMGR::IncreaseAdapterUniquenessOnSession(v2, a1);
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 1165;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Cannot find the session manager, status 0x%I64x.",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
