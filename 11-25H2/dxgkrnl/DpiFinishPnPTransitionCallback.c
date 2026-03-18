/*
 * XREFs of DpiFinishPnPTransitionCallback @ 0x140243810
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1401F44FC (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z.c)
 *     DxgkCompletePnPTransition @ 0x1401F6448 (DxgkCompletePnPTransition.c)
 *     ?CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z @ 0x14040C210 (-CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z.c)
 */

unsigned __int8 __fastcall DpiFinishPnPTransitionCallback(struct _PNP_TRANS_TOKEN *a1, int a2, unsigned int a3)
{
  char v3; // bl
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rax

  v3 = 1;
  if ( a2 == 1 )
  {
    if ( a1 )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGSESSIONMGR::FinishPnPTransitionOnSession(*((DXGSESSIONMGR **)Global + 118), a1, a3);
    }
  }
  else if ( a2 == 2 )
  {
    DxgkCompletePnPTransition(a1);
  }
  else if ( !a2 && a1 )
  {
    v7 = DXGGLOBAL::GetGlobal();
    return DXGSESSIONMGR::CheckPnPTransitionForSession(*((DXGSESSIONMGR **)v7 + 118), a1, a3);
  }
  return v3;
}
