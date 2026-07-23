/*
 * XREFs of BgpFwReleaseLock @ 0x1404A3D9C
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
 *     BgDisplayBackgroundUpdate @ 0x140BB25EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BB2628 (BgDisplayProgressIndicator.c)
 *     BgFreeContext @ 0x140BB2664 (BgFreeContext.c)
 *     BgGetContext @ 0x140BB26A8 (BgGetContext.c)
 *     BgLibraryDisable @ 0x140BB2724 (BgLibraryDisable.c)
 *     BgMarkHiberPhase @ 0x140BB278C (BgMarkHiberPhase.c)
 *     BgReleaseSpinLock @ 0x140BB27FC (BgReleaseSpinLock.c)
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
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall BgpFwReleaseLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = dword_140EF0270 & 0xC00;
  if ( (_DWORD)result != 3072 )
  {
    v3 = (unsigned __int8)byte_140E3EC7A;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd64(&qword_140E64FA8, 0LL);
    }
    else
    {
      result = KiReleaseSpinLockInstrumented(&qword_140E64FA8, retaddr);
    }
    if ( (unsigned __int8)v3 <= 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = v3;
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(v3);
    }
  }
  return result;
}
