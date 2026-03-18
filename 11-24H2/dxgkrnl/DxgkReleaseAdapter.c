/*
 * XREFs of DxgkReleaseAdapter @ 0x1401D7520
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1400739F0 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

void __fastcall DxgkReleaseAdapter(DXGADAPTER *a1)
{
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax

  if ( a1 )
    DXGADAPTER::ReleaseReference(a1);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
    DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionData, 0LL);
}
