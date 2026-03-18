/*
 * XREFs of BgpFwAcquireLock @ 0x1404A9CA4
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x1404C3450 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1405B2E40 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1405B38C0 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x140697D0C (BgDisplaySafeToPowerOffScreen.c)
 *     BgLibraryEnable @ 0x140697D44 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x140697DBC (BgQueryBootGraphicsInformation.c)
 *     BgkDestroy @ 0x140BB0170 (BgkDestroy.c)
 *     BgkDrawText @ 0x140BB02DC (BgkDrawText.c)
 *     BgkSetBootGraphicsInformation @ 0x140BB0424 (BgkSetBootGraphicsInformation.c)
 *     BgAcquireSpinLock @ 0x140BB05B4 (BgAcquireSpinLock.c)
 *     BgDisplayBackgroundUpdate @ 0x140BB05EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BB0628 (BgDisplayProgressIndicator.c)
 *     BgFreeContext @ 0x140BB0664 (BgFreeContext.c)
 *     BgGetContext @ 0x140BB06A8 (BgGetContext.c)
 *     BgLibraryDisable @ 0x140BB0724 (BgLibraryDisable.c)
 *     BgMarkHiberPhase @ 0x140BB078C (BgMarkHiberPhase.c)
 *     BgConsoleDestroyInterface @ 0x140BB0940 (BgConsoleDestroyInterface.c)
 *     BgConsoleGetInterface @ 0x140BB09A0 (BgConsoleGetInterface.c)
 *     BgpConsoleClearScreen @ 0x140BB09F0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140BB0AB0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140BB0E60 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140BB0FD0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140BB1040 (BgpConsoleGetState.c)
 *     BgpConsoleInitialize @ 0x140BB10B0 (BgpConsoleInitialize.c)
 *     BgpConsoleSetCursor @ 0x140BB1520 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140BB15D0 (BgpConsoleSetTextColor.c)
 *     ResFwpDestroyBackground @ 0x140BB1B3C (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140BB1BB0 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140BB1C34 (ResFwpPageOutBackground.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BB21B0 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x140BB2F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwFadeCompletion @ 0x140BB358C (AnFwFadeCompletion.c)
 *     BgDisplayFade @ 0x140BB36A4 (BgDisplayFade.c)
 *     AnFwpProgressIndicatorTimer @ 0x140BB49D0 (AnFwpProgressIndicatorTimer.c)
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void BgpFwAcquireLock()
{
  __int64 v0; // rcx
  unsigned __int8 CurrentIrql; // bl

  v0 = 3072LL;
  if ( (dword_140EF0050 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( qword_140E64E20 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v0) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v0, 2LL);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E64E20, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140E64E20);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&qword_140E64E20);
    }
    byte_140E3EB3A = CurrentIrql;
  }
}
