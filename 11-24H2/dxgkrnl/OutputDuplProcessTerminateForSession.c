/*
 * XREFs of OutputDuplProcessTerminateForSession @ 0x1403A12E0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1403A1398 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void OutputDuplProcessTerminateForSession()
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v2; // rcx
  OUTPUTDUPL_SESSION_MGR *v3; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v5; // rax
  const wchar_t *v6; // r9

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v3 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
    if ( v3 )
    {
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v2);
      OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v3, CurrentProcess);
      return;
    }
    WdLogSingleEntry0(2LL);
    v5 = 3134LL;
    v6 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v5 = 3127LL;
    v6 = L"DXGSESSIONDATA is NULL";
  }
  WdLogGlobalForLineNumber = v5;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v6, v5, 0LL, 0LL, 0LL, 0LL);
}
