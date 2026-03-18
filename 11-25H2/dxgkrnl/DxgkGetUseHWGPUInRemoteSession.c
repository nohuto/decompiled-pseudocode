/*
 * XREFs of DxgkGetUseHWGPUInRemoteSession @ 0x1401F6670
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

char DxgkGetUseHWGPUInRemoteSession()
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
    LOBYTE(SessionData) = *((_BYTE *)SessionData + 18505);
  return (char)SessionData;
}
