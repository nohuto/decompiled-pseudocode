/*
 * XREFs of UserResetPointer @ 0x140131DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetCursorPointerInternal@@YAXXZ @ 0x140131E14 (-ResetCursorPointerInternal@@YAXXZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14026F7B8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void UserResetPointer()
{
  __int64 v0; // rcx

  if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
  {
    ResetCursorPointerInternal();
  }
  else
  {
    EnterSharedCrit(0LL, 1LL);
    ResetCursorPointerInternal();
    UserSessionSwitchLeaveCrit(v0);
  }
}
