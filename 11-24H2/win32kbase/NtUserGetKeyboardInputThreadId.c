/*
 * XREFs of NtUserGetKeyboardInputThreadId @ 0x1401BAD90
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     Feature_Bugfix_58554964__private_IsEnabledDeviceUsageNoInline @ 0x1401B756C (Feature_Bugfix_58554964__private_IsEnabledDeviceUsageNoInline.c)
 *     GetKeyboardInputThreadId @ 0x140212860 (GetKeyboardInputThreadId.c)
 */

__int64 NtUserGetKeyboardInputThreadId()
{
  unsigned int KeyboardInputThreadId; // ebx

  KeyboardInputThreadId = 0;
  EnterSharedCrit(0, 1u);
  if ( (unsigned int)Feature_Bugfix_58554964__private_IsEnabledDeviceUsageNoInline() )
    KeyboardInputThreadId = GetKeyboardInputThreadId();
  UserSessionSwitchLeaveCritWithNonPaged();
  return KeyboardInputThreadId;
}
