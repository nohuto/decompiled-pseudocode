/*
 * XREFs of DxgkReleaseGdiViewId @ 0x1401F67DC
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiGdoDestroyGdiObjects @ 0x14024EF2C (DpiGdoDestroyGdiObjects.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z @ 0x1401F4BD4 (-ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1403037B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

void __fastcall DxgkReleaseGdiViewId(char a1, __int64 a2, unsigned __int32 a3, char a4)
{
  unsigned int v6; // esi
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v6 = a2;
  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *((DXGSESSIONMGR **)Global + 118),
                                       v6);
    if ( SessionDataForSpecifiedSession )
      DXGSESSIONDATA::ReleaseSessionGdiViewId(SessionDataForSpecifiedSession, a3, a4);
  }
  else
  {
    LOBYTE(a2) = a4;
    DMgrReleaseGdiViewId(a3, a2);
  }
}
