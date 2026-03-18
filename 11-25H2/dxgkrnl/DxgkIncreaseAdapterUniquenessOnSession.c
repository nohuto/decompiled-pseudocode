/*
 * XREFs of DxgkIncreaseAdapterUniquenessOnSession @ 0x1401F6698
 * Callers:
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x140198B48 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IncreaseAdapterUniquenessOnSession@DXGSESSIONMGR@@QEAAJ_K@Z @ 0x1401F4724 (-IncreaseAdapterUniquenessOnSession@DXGSESSIONMGR@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DxgkIncreaseAdapterUniquenessOnSession(__int64 a1)
{
  DXGSESSIONMGR *v2; // rcx

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v2 )
    return DXGSESSIONMGR::IncreaseAdapterUniquenessOnSession(v2, a1);
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 1145;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Cannot find the session manager, status 0x%I64x.",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
