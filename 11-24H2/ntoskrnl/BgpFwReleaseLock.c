/*
 * XREFs of BgpFwReleaseLock @ 0x1404A9ACC
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
 *     BgDisplayBackgroundUpdate @ 0x140BB05EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BB0628 (BgDisplayProgressIndicator.c)
 *     BgFreeContext @ 0x140BB0664 (BgFreeContext.c)
 *     BgGetContext @ 0x140BB06A8 (BgGetContext.c)
 *     BgLibraryDisable @ 0x140BB0724 (BgLibraryDisable.c)
 *     BgMarkHiberPhase @ 0x140BB078C (BgMarkHiberPhase.c)
 *     BgReleaseSpinLock @ 0x140BB07FC (BgReleaseSpinLock.c)
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
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall BgpFwReleaseLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = dword_140EF0050 & 0xC00;
  if ( (_DWORD)result != 3072 )
  {
    v3 = (unsigned __int8)byte_140E3EB3A;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd64(&qword_140E64E20, 0LL);
    }
    else
    {
      result = KiReleaseSpinLockInstrumented(&qword_140E64E20, retaddr);
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
