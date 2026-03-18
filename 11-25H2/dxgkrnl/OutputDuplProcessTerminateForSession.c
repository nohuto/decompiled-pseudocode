/*
 * XREFs of OutputDuplProcessTerminateForSession @ 0x1403B003C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1403B00F4 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
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
    v5 = 3128LL;
    v6 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v5 = 3121LL;
    v6 = L"DXGSESSIONDATA is NULL";
  }
  WdLogGlobalForLineNumber = v5;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v6, v5, 0LL, 0LL, 0LL, 0LL);
}
