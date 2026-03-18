/*
 * XREFs of ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1801DCC8C
 * Callers:
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1801DCBB8 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x180187884 (--0CBitmap@@QEAA@XZ.c)
 */

CWICBitmapWrapper *__fastcall CWICBitmapWrapper::CWICBitmapWrapper(CWICBitmapWrapper *this)
{
  CWICBitmapWrapper *result; // rax

  CBitmap::CBitmap(this);
  *(_QWORD *)this = &CWICBitmapWrapper::`vftable'{for `CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 4) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 15) = &CWICBitmapWrapper::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 16) = &CWICBitmapWrapper::`vftable'{for `IWICDecoderBitmapSource'};
  result = this;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}
