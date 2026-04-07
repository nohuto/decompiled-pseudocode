/*
 * XREFs of ??0IBitmapUnlock@@QEAA@XZ @ 0x18002263C
 * Callers:
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x180022524 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ??0CBitmap@@QEAA@XZ @ 0x180022664 (--0CBitmap@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18006B946 (--0IUnknown@@QEAA@XZ.c)
 */

IBitmapUnlock *__fastcall IBitmapUnlock::IBitmapUnlock(IBitmapUnlock *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &IBitmapUnlock::`vftable';
  return this;
}
