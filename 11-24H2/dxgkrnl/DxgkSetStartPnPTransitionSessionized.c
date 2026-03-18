/*
 * XREFs of DxgkSetStartPnPTransitionSessionized @ 0x1401FD158
 * Callers:
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z @ 0x14018F0FC (-EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetStartPnPTransitionSessionized@DXGSESSIONMGR@@QEAAXPEAXE@Z @ 0x1401FC24C (-SetStartPnPTransitionSessionized@DXGSESSIONMGR@@QEAAXPEAXE@Z.c)
 */

void __fastcall DxgkSetStartPnPTransitionSessionized(_BYTE *a1, char a2)
{
  struct DXGGLOBAL *Global; // rax

  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetStartPnPTransitionSessionized(*((DXGSESSIONMGR **)Global + 122), a1, a2);
  }
}
