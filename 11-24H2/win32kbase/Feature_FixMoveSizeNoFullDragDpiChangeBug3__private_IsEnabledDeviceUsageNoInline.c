/*
 * XREFs of Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x14021F3D4
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14018CE80 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback @ 0x14021F40C (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback.c)
 */

__int64 Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState & 0x10) != 0 )
    return Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState & 1;
  else
    return Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback(
             (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState,
             3LL);
}
