/*
 * XREFs of DxgkStartPnPTransition @ 0x1401FD198
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1402421F0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024772C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9530 (DpiFdoHandleDevicePower.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1401FC2A4 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z.c)
 */

_QWORD *__fastcall DxgkStartPnPTransition(_QWORD *a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 122), a1, a2);
}
