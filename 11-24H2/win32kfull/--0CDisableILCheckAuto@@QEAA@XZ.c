/*
 * XREFs of ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1400617A8
 * Callers:
 *     NtUserMessageCall @ 0x140061360 (NtUserMessageCall.c)
 *     _MapDesktopObject @ 0x140077144 (_MapDesktopObject.c)
 *     ValidateHwndIAM @ 0x1400F5AA4 (ValidateHwndIAM.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1400F5B08 (ValidateHwndIAMComponetUIAware.c)
 *     NtUserSetInteractiveControlFocus @ 0x1402465B0 (NtUserSetInteractiveControlFocus.c)
 *     UserRecreateRedirectionBitmap @ 0x140285640 (UserRecreateRedirectionBitmap.c)
 *     NtUserApplyWindowAction @ 0x140292770 (NtUserApplyWindowAction.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

CDisableILCheckAuto *__fastcall CDisableILCheckAuto::CDisableILCheckAuto(CDisableILCheckAuto *this, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  bool v4; // dl

  v3 = PtiCurrent((__int64)this, a2);
  *(_QWORD *)this = v3;
  v4 = *((_BYTE *)v3 + 1708) == 1;
  *((_BYTE *)this + 8) = v4;
  if ( v4 )
    *((_BYTE *)v3 + 1708) = 0;
  return this;
}
