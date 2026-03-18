/*
 * XREFs of ??0CClientMemoryBitmap@@QEAA@XZ @ 0x180024508
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18002432C (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 * Callees:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180024574 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 */

CClientMemoryBitmap *__fastcall CClientMemoryBitmap::CClientMemoryBitmap(CClientMemoryBitmap *this)
{
  CSystemMemoryBitmap::CSystemMemoryBitmap(this);
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &CClientMemoryBitmap::`vftable'{for `CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 4) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 15) = &CSystemMemoryBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 16) = &CClientMemoryBitmap::`vftable'{for `IPixelColor'};
  return this;
}
