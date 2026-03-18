/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB398
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     GreGetCharSet @ 0x1400BB178 (GreGetCharSet.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     NtGdiResizePalette @ 0x14010EC60 (NtGdiResizePalette.c)
 *     UntrapAppContainerRenderingWrap @ 0x140147F00 (UntrapAppContainerRenderingWrap.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     NtGdiMakeObjectUnXferable @ 0x14025D1E0 (NtGdiMakeObjectUnXferable.c)
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FBC0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1401542B0 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1402FECD8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  XDCOBJ::XDCOBJ(this);
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 40);
  XDCOBJ::vLock(this, a2);
  return this;
}
