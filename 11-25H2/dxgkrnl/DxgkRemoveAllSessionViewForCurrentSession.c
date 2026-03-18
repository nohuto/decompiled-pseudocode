/*
 * XREFs of DxgkRemoveAllSessionViewForCurrentSession @ 0x14031AF5C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B4E8 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsSessionModeChangeLockExclusiveOwner@DXGSESSIONDATA@@QEBAEXZ @ 0x140057C70 (-IsSessionModeChangeLockExclusiveOwner@DXGSESSIONDATA@@QEBAEXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x14031A9C0 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 DxgkRemoveAllSessionViewForCurrentSession()
{
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  DXGSESSIONDATA *v2; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v4; // eax

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v2 = SessionData;
  if ( SessionData )
  {
    if ( !DXGSESSIONDATA::IsSessionModeChangeLockExclusiveOwner(SessionData) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 980;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pSessionData->IsSessionModeChangeLockExclusiveOwner()",
        980LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGSESSIONDATA::RemoveAllSourceViewFromSession(v2);
    return 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 975;
    v4 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
