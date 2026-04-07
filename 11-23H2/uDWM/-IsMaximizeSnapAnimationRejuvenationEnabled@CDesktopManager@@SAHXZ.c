/*
 * XREFs of ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x1800369DC
 * Callers:
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18001E300 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18002E66C (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002F810 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x180037FB8 (-ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA-AUInterpolationParameter.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E74A4 (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036A90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

__int64 __fastcall CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    a2);
  return 1LL;
}
