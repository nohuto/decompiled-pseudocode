/*
 * XREFs of ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x14008AE58 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x140094048 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     UserDetachQueueFromInputWindow @ 0x1400A4408 (UserDetachQueueFromInputWindow.c)
 *     UserJobCallout @ 0x1400A4480 (UserJobCallout.c)
 *     EditionParseDesktop @ 0x1400A48F0 (EditionParseDesktop.c)
 *     DestroyWindowStation @ 0x1401E4650 (DestroyWindowStation.c)
 *     FreeWindowStation @ 0x1401E89C0 (FreeWindowStation.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x140216730 (-xxxUserBeep@@YAHKK_N@Z.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x140274B90 (EditionIsUsermodeRIMAccessAllowed.c)
 *     UserSetTimer @ 0x1402DC9AC (UserSetTimer.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1403249A0 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ReEnterLeaveCrit::~ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  if ( !*(_BYTE *)this )
    UserSessionSwitchLeaveCritWithNonPaged();
}
