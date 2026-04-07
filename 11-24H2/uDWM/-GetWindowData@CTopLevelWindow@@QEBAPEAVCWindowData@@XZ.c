/*
 * XREFs of ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000360C (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180004E14 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180004E74 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800057E8 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180005B60 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180006594 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006D78 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000728C (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180009360 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001C608 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x18008BAFC (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800DDCDC (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 * Callees:
 *     <none>
 */

struct CWindowData *__fastcall CTopLevelWindow::GetWindowData(CTopLevelWindow *this)
{
  return (struct CWindowData *)*((_QWORD *)this + 89);
}
