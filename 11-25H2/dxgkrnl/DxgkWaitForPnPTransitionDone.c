/*
 * XREFs of DxgkWaitForPnPTransitionDone @ 0x14031C9CC
 * Callers:
 *     DpiIndicateConnectorChangeWorkItem @ 0x1403C6450 (DpiIndicateConnectorChangeWorkItem.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x14031DC34 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForPnPTransitionDone(unsigned int a1, char a2, unsigned int a3, int a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8

  Global = DXGGLOBAL::GetGlobal();
  LOBYTE(v9) = a2;
  return DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 118), a1, v9, a3, a4);
}
