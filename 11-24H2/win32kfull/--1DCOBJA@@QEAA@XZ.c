/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1400CDC98
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
 *     GreCancelDC @ 0x140330A3C (GreCancelDC.c)
 *     GreConvertRedirectionToMemDC @ 0x140330F48 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14016EFA0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  XDCOBJ::vAltUnlockNoNullSet(this);
  PopThreadGuardedObject((char *)this + 40);
}
