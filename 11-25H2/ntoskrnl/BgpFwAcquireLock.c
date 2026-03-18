/*
 * XREFs of BgpFwAcquireLock @ 0x1404A8BF0
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x1404C4DB0 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1405AF4B0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1405AFF14 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x14068C9BC (BgDisplaySafeToPowerOffScreen.c)
 *     BgLibraryEnable @ 0x14068C9F4 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x14068CA6C (BgQueryBootGraphicsInformation.c)
 *     BgkDestroy @ 0x140BA0170 (BgkDestroy.c)
 *     BgkDrawText @ 0x140BA02DC (BgkDrawText.c)
 *     BgkSetBootGraphicsInformation @ 0x140BA0424 (BgkSetBootGraphicsInformation.c)
 *     BgAcquireSpinLock @ 0x140BA05B4 (BgAcquireSpinLock.c)
 *     BgDisplayBackgroundUpdate @ 0x140BA05EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BA0628 (BgDisplayProgressIndicator.c)
 *     BgFreeContext @ 0x140BA0664 (BgFreeContext.c)
 *     BgGetContext @ 0x140BA06A8 (BgGetContext.c)
 *     BgLibraryDisable @ 0x140BA0724 (BgLibraryDisable.c)
 *     BgMarkHiberPhase @ 0x140BA078C (BgMarkHiberPhase.c)
 *     BgConsoleDestroyInterface @ 0x140BA0940 (BgConsoleDestroyInterface.c)
 *     BgConsoleGetInterface @ 0x140BA09A0 (BgConsoleGetInterface.c)
 *     BgpConsoleClearScreen @ 0x140BA09F0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140BA0AB0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140BA0E60 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140BA0FD0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140BA1040 (BgpConsoleGetState.c)
 *     BgpConsoleInitialize @ 0x140BA10B0 (BgpConsoleInitialize.c)
 *     BgpConsoleSetCursor @ 0x140BA1520 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140BA15D0 (BgpConsoleSetTextColor.c)
 *     ResFwpDestroyBackground @ 0x140BA1B3C (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140BA1BB0 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140BA1C34 (ResFwpPageOutBackground.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BA21B0 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x140BA2F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwFadeCompletion @ 0x140BA358C (AnFwFadeCompletion.c)
 *     BgDisplayFade @ 0x140BA36A4 (BgDisplayFade.c)
 *     AnFwpProgressIndicatorTimer @ 0x140BA49D0 (AnFwpProgressIndicatorTimer.c)
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void BgpFwAcquireLock()
{
  __int64 v0; // rcx
  unsigned __int8 CurrentIrql; // bl

  v0 = 3072LL;
  if ( (dword_140EEFD90 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( qword_140E64BE0 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v0) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v0);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E64BE0, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140E64BE0);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&qword_140E64BE0);
    }
    byte_140E3E8FA = CurrentIrql;
  }
}
