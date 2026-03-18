/*
 * XREFs of ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8
 * Callers:
 *     NtGdiCreateMetafileDC @ 0x14000CE10 (NtGdiCreateMetafileDC.c)
 *     GreSetLayout @ 0x14000DFB0 (GreSetLayout.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14000E350 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x140010910 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x140013DF0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreSelectBitmap @ 0x14001C680 (GreSelectBitmap.c)
 *     GreGetDeviceCaps @ 0x14001D350 (GreGetDeviceCaps.c)
 *     GreIntersectClipRect @ 0x14001DA50 (GreIntersectClipRect.c)
 *     NtGdiGetDeviceCaps @ 0x14001E030 (NtGdiGetDeviceCaps.c)
 *     GreGetClipBox @ 0x140039310 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x140039A60 (GreGetNearestColor.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GreSelectPalette @ 0x1400D7C80 (GreSelectPalette.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400E71E0 (NtGdiGetDeviceCapsAll.c)
 *     GreCleanDC @ 0x1401073F0 (GreCleanDC.c)
 *     GreRestoreDC @ 0x140121140 (GreRestoreDC.c)
 *     GreSelectBrush @ 0x140132CF0 (GreSelectBrush.c)
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 *     GreSelectPen @ 0x140151CE0 (GreSelectPen.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C5BB0 (GreCleanDCAndSetOwnerEx.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1401C845C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400348A0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1400349F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1400B8540 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x1401C3050 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1401C3090 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

APIDCOBJ *__fastcall APIDCOBJ::APIDCOBJ(APIDCOBJ *this, HDC a2)
{
  __int64 v4; // rax

  XDCOBJ::XDCOBJ(this);
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 40);
  XDCOBJ::vLock(this, a2);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>((char *)this + 72);
  v4 = *(_QWORD *)this;
  *((_BYTE *)this + 104) = 1;
  if ( v4 )
  {
    if ( *(_WORD *)(v4 + 12) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
    {
      XDCOBJ::vUnlockNoNullSet(this);
      *(_QWORD *)this = 0LL;
    }
  }
  return this;
}
