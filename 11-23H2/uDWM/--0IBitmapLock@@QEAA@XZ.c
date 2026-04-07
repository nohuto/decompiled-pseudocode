/*
 * XREFs of ??0IBitmapLock@@QEAA@XZ @ 0x18002202C
 * Callers:
 *     ??0CBitmap@@QEAA@XZ @ 0x180022664 (--0CBitmap@@QEAA@XZ.c)
 *     ??0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z @ 0x18005A928 (--0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18005AA78 (--0CBitmapLock@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18006B946 (--0IUnknown@@QEAA@XZ.c)
 */

IBitmapLock *__fastcall IBitmapLock::IBitmapLock(IBitmapLock *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &IBitmapLock::`vftable';
  return this;
}
