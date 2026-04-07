/*
 * XREFs of ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18001DB64
 * Callers:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180003EA8 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800139EC (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18001D85C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180033C68 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18004BD84 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18004DF3C (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x1800DBE28 (-ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransitionVisualController::GetStoredSnapshotNoRefByIndex(
        CTransitionVisualController *this,
        int a2,
        struct CTransitionWindowSnapshot **a3)
{
  __int64 result; // rax

  result = 2147942487LL;
  if ( a2 >= 0 && a2 < *((_DWORD *)this + 20) )
  {
    result = 0LL;
    *a3 = *(struct CTransitionWindowSnapshot **)(*((_QWORD *)this + 7) + 16LL * (unsigned int)a2 + 8);
  }
  return result;
}
