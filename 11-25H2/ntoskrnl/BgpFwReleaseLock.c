/*
 * XREFs of BgpFwReleaseLock @ 0x1404A891C
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
 *     BgDisplayBackgroundUpdate @ 0x140BA05EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BA0628 (BgDisplayProgressIndicator.c)
 *     BgFreeContext @ 0x140BA0664 (BgFreeContext.c)
 *     BgGetContext @ 0x140BA06A8 (BgGetContext.c)
 *     BgLibraryDisable @ 0x140BA0724 (BgLibraryDisable.c)
 *     BgMarkHiberPhase @ 0x140BA078C (BgMarkHiberPhase.c)
 *     BgReleaseSpinLock @ 0x140BA07FC (BgReleaseSpinLock.c)
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
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall BgpFwReleaseLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = dword_140EEFD90 & 0xC00;
  if ( (_DWORD)result != 3072 )
  {
    v3 = (unsigned __int8)byte_140E3E8FA;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd64(&qword_140E64BE0, 0LL);
    }
    else
    {
      result = KiReleaseSpinLockInstrumented(&qword_140E64BE0, retaddr);
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
