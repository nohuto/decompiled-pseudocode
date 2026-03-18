/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0042A70
 * Callers:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C001D69C (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C0041524 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     UserJobCallout @ 0x1C0042820 (UserJobCallout.c)
 *     DestroyWindowStation @ 0x1C0086080 (DestroyWindowStation.c)
 *     UserDetachQueueFromInputWindow @ 0x1C0086F18 (UserDetachQueueFromInputWindow.c)
 *     FreeWindowStation @ 0x1C009AA80 (FreeWindowStation.c)
 *     FreeDesktop @ 0x1C00A1800 (FreeDesktop.c)
 *     xxxProcessHidInput @ 0x1C014E260 (xxxProcessHidInput.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C01ABA40 (EditionIsUsermodeRIMAccessAllowed.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x1C01F877C (-xxxUserBeep@@YAHKK_N@Z.c)
 *     UserRedrawDesktop @ 0x1C02225B8 (UserRedrawDesktop.c)
 *     UserSetTimer @ 0x1C022C5E8 (UserSetTimer.c)
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  PERESOURCE *v2; // rax

  v2 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
  if ( ExIsResourceAcquiredExclusiveLite(*v2) == 1 )
  {
    *(_BYTE *)this = 1;
  }
  else
  {
    *(_BYTE *)this = 0;
    EnterCrit(1LL, 0LL);
  }
  return this;
}
