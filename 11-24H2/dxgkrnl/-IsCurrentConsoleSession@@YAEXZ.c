/*
 * XREFs of ?IsCurrentConsoleSession@@YAEXZ @ 0x140063C44
 * Callers:
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x14018AD84 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1401D39A4 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x14018CA00 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

bool IsCurrentConsoleSession(void)
{
  DXGGLOBAL *Global; // rax
  int v1; // ebx

  Global = DXGGLOBAL::GetGlobal();
  v1 = *((_DWORD *)DXGGLOBAL::GetSessionMgr(Global) + 36);
  return (unsigned int)PsGetCurrentProcessSessionId() == v1;
}
