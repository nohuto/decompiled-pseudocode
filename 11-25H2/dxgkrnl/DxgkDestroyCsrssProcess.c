/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1401F6590
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyCsrssProcess@DXGSESSIONDATA@@QEAAXXZ @ 0x1401F3DD4 (-DestroyCsrssProcess@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

void DxgkDestroyCsrssProcess()
{
  DXGGLOBAL *Global; // rax
  __int64 v1; // rcx
  struct DXGSESSIONDATA *SessionData; // rbx

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 712;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pSessionData != NULL", 712LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)SessionData + 2332) != PsGetCurrentProcess(v1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 713;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pSessionData->GetEProcessCSRSS() == PsGetCurrentProcess()",
      713LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONDATA::DestroyCsrssProcess((DXGSESSIONDATA **)SessionData);
}
