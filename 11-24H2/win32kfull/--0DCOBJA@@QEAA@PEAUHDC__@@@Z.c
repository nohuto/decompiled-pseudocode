/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400CDC4C
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x140039EF4 (GreConvertMemToRedirectionDC.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1400CCECC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1400CD670 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1400CDA90 (GreHintDCWnd.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1400CE740 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1400CF010 (DxgkEngGetClientRect.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1400CF090 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1401D3410 (DxgkEngAccumD3DPresentBounds.c)
 *     GreWatchVisRgnChange @ 0x14030D930 (GreWatchVisRgnChange.c)
 *     DxgkEngIsRedirectionDC @ 0x140325410 (DxgkEngIsRedirectionDC.c)
 *     GreConvertRedirectionToMemDC @ 0x140330F48 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1401542B0 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14030D664 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int64 v4; // rdx

  XDCOBJ::XDCOBJ(this);
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((char *)this + 40);
  LOBYTE(v4) = 1;
  *(_QWORD *)this = HmgShareLockEx(a2, v4, 0LL);
  return this;
}
