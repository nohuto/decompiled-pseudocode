/*
 * XREFs of GetPhysicalScreenRect @ 0x1401DA3D0
 * Callers:
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14022FDC8 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     zzzResetSharedDesktops @ 0x14024E3F0 (zzzResetSharedDesktops.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 *     CreatePseudoDigitizerDevice @ 0x140279418 (CreatePseudoDigitizerDevice.c)
 *     GetHimetricScaleForMonitor @ 0x1402818AC (GetHimetricScaleForMonitor.c)
 *     xxxRemoteConsoleShadowStart @ 0x1402B71F0 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetPhysicalScreenRect(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  _OWORD *result; // rax

  v3 = *(_OWORD *)(**(_QWORD **)(W32GetUserSessionState(a1, a2) + 57008) + 24LL);
  result = a1;
  *a1 = v3;
  return result;
}
