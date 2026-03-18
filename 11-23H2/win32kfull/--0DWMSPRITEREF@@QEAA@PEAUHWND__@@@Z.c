/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0026D20
 * Callers:
 *     GreGetSprite @ 0x1C0013DD0 (GreGetSprite.c)
 *     GreWindowBeginLayoutUpdate @ 0x1C0016928 (GreWindowBeginLayoutUpdate.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0023A1C (GreUpdateSpriteClipRgn.c)
 *     GreWindowLayoutComplete @ 0x1C0023E5C (GreWindowLayoutComplete.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C0024210 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0102AF0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreIsWindowResizeInProgress @ 0x1C0159110 (GreIsWindowResizeInProgress.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C0266AEC (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C0266BF8 (GreConfirmWindowResizeCommit.c)
 *     GreProtectSpriteContent @ 0x1C02675D8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0267BC4 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0267E20 (GreWindowResizeStarted.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0026D64 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00B4110 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2)
{
  HSPRITE v4; // rax

  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(this);
  *((_QWORD *)this + 4) = 0LL;
  v4 = DWMSPRITEREF::hspLookupWindow(a2);
  DWMSPRITEREF::LockSpriteObj(this, v4);
  return this;
}
