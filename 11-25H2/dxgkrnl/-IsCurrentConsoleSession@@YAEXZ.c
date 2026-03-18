/*
 * XREFs of ?IsCurrentConsoleSession@@YAEXZ @ 0x140063354
 * Callers:
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x140188B3C (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1401CE654 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x14018AA10 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

bool IsCurrentConsoleSession(void)
{
  DXGGLOBAL *Global; // rax
  int v1; // ebx

  Global = DXGGLOBAL::GetGlobal();
  v1 = *((_DWORD *)DXGGLOBAL::GetSessionMgr(Global) + 36);
  return (unsigned int)PsGetCurrentProcessSessionId() == v1;
}
