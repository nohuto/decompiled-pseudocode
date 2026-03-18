/*
 * XREFs of ??0CFormatConverter@@QEAA@XZ @ 0x1802E55EC
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802E5E94 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D58 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CFormatConverter *__fastcall CFormatConverter::CFormatConverter(CFormatConverter *this)
{
  __int64 v2; // rcx
  CFormatConverter *result; // rax

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>();
  InitializeCriticalSection((LPCRITICAL_SECTION)(v2 + 16));
  *(_QWORD *)this = &CFormatConverter::`vftable';
  *((_QWORD *)this + 13) = &CScanPipeline::`vftable';
  *((_QWORD *)this + 14) = (char *)this + 144;
  *((_QWORD *)this + 15) = (char *)this + 144;
  *((_DWORD *)this + 32) = 10;
  *(_QWORD *)((char *)this + 132) = 10LL;
  *((_QWORD *)this + 80) = (char *)this + 672;
  *((_QWORD *)this + 81) = (char *)this + 672;
  *((_DWORD *)this + 164) = 3;
  *(_QWORD *)((char *)this + 660) = 3LL;
  *((_QWORD *)this + 87) = (char *)this + 728;
  *((_QWORD *)this + 88) = (char *)this + 728;
  *((_DWORD *)this + 178) = 2;
  *(_QWORD *)((char *)this + 716) = 2LL;
  result = this;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  return result;
}
