/*
 * XREFs of Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140274E78
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x14017581C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 *     EditionPostInputMessage @ 0x140237920 (EditionPostInputMessage.c)
 *     EditionPostMouseMoveToQ @ 0x140237AA0 (EditionPostMouseMoveToQ.c)
 *     EditionPostMouseWheelToForeground @ 0x140237BD0 (EditionPostMouseWheelToForeground.c)
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x140248FAC (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14024C350 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 *     NtUserGetLatestInputMessageData @ 0x140296760 (NtUserGetLatestInputMessageData.c)
 *     NtUserGetPointerIdForPromotion @ 0x140296DC0 (NtUserGetPointerIdForPromotion.c)
 * Callees:
 *     Feature_TouchpadHaptics__private_IsEnabledFallback @ 0x140274EB0 (Feature_TouchpadHaptics__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadHaptics__private_featureState & 0x10) != 0 )
    return Feature_TouchpadHaptics__private_featureState & 1;
  else
    return Feature_TouchpadHaptics__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadHaptics__private_featureState,
             3LL);
}
