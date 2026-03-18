/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1401FCEA0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyCsrssProcess@DXGSESSIONDATA@@QEAAXXZ @ 0x1401FA620 (-DestroyCsrssProcess@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
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
    WdLogGlobalForLineNumber = 732;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pSessionData != NULL", 732LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)SessionData + 2332) != PsGetCurrentProcess(v1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 733;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pSessionData->GetEProcessCSRSS() == PsGetCurrentProcess()",
      733LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONDATA::DestroyCsrssProcess((DXGSESSIONDATA **)SessionData);
}
