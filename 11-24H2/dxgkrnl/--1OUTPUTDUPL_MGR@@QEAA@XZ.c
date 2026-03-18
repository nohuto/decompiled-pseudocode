/*
 * XREFs of ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1401E41DC
 * Callers:
 *     ??1OUTPUTDUPL_MGR_INDIRECT@@QEAA@XZ @ 0x140076DC4 (--1OUTPUTDUPL_MGR_INDIRECT@@QEAA@XZ.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x140076E58 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1400731D0 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1401E4DD4 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(OUTPUTDUPL_MGR **this)
{
  DXGDIAGNOSTICS *v2; // rcx

  if ( this[7] != (OUTPUTDUPL_MGR *)(this + 7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 884;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsListEmpty(&m_PendingDestroyListHead)",
      884LL,
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
