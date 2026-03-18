/*
 * XREFs of ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1401DEFDC
 * Callers:
 *     ??1OUTPUTDUPL_MGR_INDIRECT@@QEAA@XZ @ 0x140076384 (--1OUTPUTDUPL_MGR_INDIRECT@@QEAA@XZ.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x140076418 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x14007283C (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1401DFBD0 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(OUTPUTDUPL_MGR **this)
{
  DXGDIAGNOSTICS *v2; // rcx

  if ( this[7] != (OUTPUTDUPL_MGR *)(this + 7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 878;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsListEmpty(&m_PendingDestroyListHead)",
      878LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  OUTPUTDUPL_MGR::DestroySourceContextLists((OUTPUTDUPL_MGR *)this);
  v2 = this[10];
  if ( v2 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v2);
    this[10] = 0LL;
  }
}
