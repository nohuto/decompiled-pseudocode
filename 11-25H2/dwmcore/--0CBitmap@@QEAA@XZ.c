/*
 * XREFs of ??0CBitmap@@QEAA@XZ @ 0x180187884
 * Callers:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180187810 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@@Z @ 0x1801D5480 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1801DCC8C (--0CWICBitmapWrapper@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D58 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CBitmap *__fastcall CBitmap::CBitmap(CBitmap *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  CBitmap *result; // rax

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>();
  InitializeCriticalSection(v2 + 1);
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 4) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  result = this;
  *((_DWORD *)this + 29) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  return result;
}
