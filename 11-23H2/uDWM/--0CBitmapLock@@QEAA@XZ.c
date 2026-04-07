/*
 * XREFs of ??0CBitmapLock@@QEAA@XZ @ 0x18005AA78
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18005A7B8 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 * Callees:
 *     ??0IBitmapLock@@QEAA@XZ @ 0x18002202C (--0IBitmapLock@@QEAA@XZ.c)
 *     ??0IWICBitmap@@QEAA@XZ @ 0x180022080 (--0IWICBitmap@@QEAA@XZ.c)
 *     ??0CMILCOMBase@@QEAA@XZ @ 0x1800227A8 (--0CMILCOMBase@@QEAA@XZ.c)
 *     ??0CMTALock@@QEAA@XZ @ 0x180022870 (--0CMTALock@@QEAA@XZ.c)
 */

CBitmapLock *__fastcall CBitmapLock::CBitmapLock(CBitmapLock *this)
{
  CMILCOMBase::CMILCOMBase(this);
  CMTALock::CMTALock((CBitmapLock *)((char *)this + 16));
  IBitmapLock::IBitmapLock((CBitmapLock *)((char *)this + 72));
  IWICBitmap::IWICBitmap((IWICBitmap *)this + 10);
  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLock::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 10) = &CBitmapLock::`vftable'{for `IWICBitmapLock'};
  *((_WORD *)this + 44) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  return this;
}
