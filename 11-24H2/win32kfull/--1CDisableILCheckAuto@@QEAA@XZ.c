/*
 * XREFs of ??1CDisableILCheckAuto@@QEAA@XZ @ 0x140061790
 * Callers:
 *     NtUserMessageCall @ 0x140061360 (NtUserMessageCall.c)
 *     _MapDesktopObject @ 0x140077144 (_MapDesktopObject.c)
 *     ValidateHwndIAM @ 0x1400F5AA4 (ValidateHwndIAM.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1400F5B08 (ValidateHwndIAMComponetUIAware.c)
 *     UserRecreateRedirectionBitmap @ 0x140285640 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisableILCheckAuto::~CDisableILCheckAuto(CDisableILCheckAuto *this)
{
  if ( *((_BYTE *)this + 8) )
    *(_BYTE *)(*(_QWORD *)this + 1708LL) = 1;
}
