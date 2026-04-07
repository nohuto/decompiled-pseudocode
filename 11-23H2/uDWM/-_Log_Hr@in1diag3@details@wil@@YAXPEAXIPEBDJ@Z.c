/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x180010A48 (--1CWindowData@@QEAA@XZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800175B0 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x180021630 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18002B8CC (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB90 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002F810 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x1800348C4 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18003EF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180046D50 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18004BD84 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18004C9C8 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180054FEC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ??1CAnalogCompositorManager@@AEAA@XZ @ 0x18005C09C (--1CAnalogCompositorManager@@AEAA@XZ.c)
 *     _lambda_71f40e0cc89b0c7a1c7417970f0d8c94_::operator() @ 0x180065AD0 (_lambda_71f40e0cc89b0c7a1c7417970f0d8c94_--operator().c)
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x1800A0D0C (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z @ 0x1800A0DAC (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A2310 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_a1bd6a3f4010080cf46ed714b573822e__void_::_Do_call @ 0x1800A3C40 (std--_Func_impl_no_alloc__lambda_a1bd6a3f4010080cf46ed714b573822e__void_--_Do_call.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A4E00 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800D42A0 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800D546C (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18010928C (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x180109E58 (-DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x18009901C (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, (int)a2, a3, 0LL, 0LL, retaddr, v4);
}
