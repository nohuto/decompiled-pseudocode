/*
 * XREFs of IsKeyboardIVEnabled @ 0x14004FB3C
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14004FA04 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     RIMInitialize @ 0x14004FCC0 (RIMInitialize.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1400CE858 (UseVelocityToEnableIV.c)
 */

char IsKeyboardIVEnabled()
{
  char v0; // bl
  __int64 v1; // rcx

  v0 = 0;
  if ( (unsigned __int8)UseVelocityToEnableIV()
    || (unsigned __int8)isChildPartition() && *(_BYTE *)(W32GetUserSessionState(v1) + 19417) )
  {
    return 1;
  }
  return v0;
}
