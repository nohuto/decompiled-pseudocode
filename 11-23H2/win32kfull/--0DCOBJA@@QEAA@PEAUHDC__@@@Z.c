/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0083A90
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C008399C (GreConvertMemToRedirectionDC.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0159840 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0159930 (DxgkEngGetClientRect.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0159A80 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C026E910 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngIsRedirectionDC @ 0x1C026F530 (DxgkEngIsRedirectionDC.c)
 *     GreWatchVisRgnChange @ 0x1C02A832C (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02AD224 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C013DBE4 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int64 v4; // rdx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((char *)this + 16);
  LOBYTE(v4) = 1;
  *(_QWORD *)this = HmgShareLockEx(a2, v4, 0LL);
  return this;
}
