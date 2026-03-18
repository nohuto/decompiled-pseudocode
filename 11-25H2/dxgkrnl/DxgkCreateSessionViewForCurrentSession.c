/*
 * XREFs of DxgkCreateSessionViewForCurrentSession @ 0x14031AA80
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B4E8 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsSessionModeChangeLockExclusiveOwner@DXGSESSIONDATA@@QEBAEXZ @ 0x140057C70 (-IsSessionModeChangeLockExclusiveOwner@DXGSESSIONDATA@@QEBAEXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x14031ABE0 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 */

int __fastcall DxgkCreateSessionViewForCurrentSession(
        struct _LUID *a1,
        unsigned int a2,
        struct tagRECT *a3,
        unsigned __int8 a4,
        struct _LUID *a5)
{
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  DXGSESSIONDATA *v11; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v14; // eax
  struct SESSION_VIEW **v15; // [rsp+30h] [rbp-28h]

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v11 = SessionData;
  if ( SessionData )
  {
    if ( !DXGSESSIONDATA::IsSessionModeChangeLockExclusiveOwner(SessionData) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 892;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pSessionData->IsSessionModeChangeLockExclusiveOwner()",
        892LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return DXGSESSIONDATA::AddSourceViewToSession(v11, a3, a1, a2, a4, a5, v15);
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 887;
    v14 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v14,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return -1073741811;
  }
}
