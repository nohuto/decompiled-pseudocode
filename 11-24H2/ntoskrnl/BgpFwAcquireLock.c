/*
 * XREFs of BgpFwAcquireLock @ 0x1404A3F74
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x1404BE988 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1405AFDB0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1405B0834 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x140698D8C (BgDisplaySafeToPowerOffScreen.c)
 *     BgLibraryEnable @ 0x140698DC4 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x140698E3C (BgQueryBootGraphicsInformation.c)
 *     BgkDestroy @ 0x140BB2170 (BgkDestroy.c)
 *     BgkDrawText @ 0x140BB22DC (BgkDrawText.c)
 *     BgkSetBootGraphicsInformation @ 0x140BB2424 (BgkSetBootGraphicsInformation.c)
 *     BgAcquireSpinLock @ 0x140BB25B4 (BgAcquireSpinLock.c)
 *     BgDisplayBackgroundUpdate @ 0x140BB25EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BB2628 (BgDisplayProgressIndicator.c)
 *     BgFreeContext @ 0x140BB2664 (BgFreeContext.c)
 *     BgGetContext @ 0x140BB26A8 (BgGetContext.c)
 *     BgLibraryDisable @ 0x140BB2724 (BgLibraryDisable.c)
 *     BgMarkHiberPhase @ 0x140BB278C (BgMarkHiberPhase.c)
 *     BgConsoleDestroyInterface @ 0x140BB2940 (BgConsoleDestroyInterface.c)
 *     BgConsoleGetInterface @ 0x140BB29A0 (BgConsoleGetInterface.c)
 *     BgpConsoleClearScreen @ 0x140BB29F0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140BB2AB0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140BB2E60 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140BB2FD0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140BB3040 (BgpConsoleGetState.c)
 *     BgpConsoleInitialize @ 0x140BB30B0 (BgpConsoleInitialize.c)
 *     BgpConsoleSetCursor @ 0x140BB3520 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140BB35D0 (BgpConsoleSetTextColor.c)
 *     ResFwpDestroyBackground @ 0x140BB3B3C (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140BB3BB0 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140BB3C34 (ResFwpPageOutBackground.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BB41B0 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x140BB4F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwFadeCompletion @ 0x140BB558C (AnFwFadeCompletion.c)
 *     BgDisplayFade @ 0x140BB56A4 (BgDisplayFade.c)
 *     AnFwpProgressIndicatorTimer @ 0x140BB69D0 (AnFwpProgressIndicatorTimer.c)
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall BgpFwAcquireLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rdx

  v4 = 3072LL;
  if ( (dword_140EF0270 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v6 = 2LL;
    if ( CurrentIrql <= 2u )
    {
      while ( qword_140E64FA8 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v4) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v4, 2LL);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E64FA8, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140E64FA8, v6, a3, a4);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&qword_140E64FA8);
    }
    byte_140E3EC7A = CurrentIrql;
  }
}
