/*
 * XREFs of ??0CMILCOMBase@@QEAA@XZ @ 0x1800227A8
 * Callers:
 *     ??0CBitmap@@QEAA@XZ @ 0x180022664 (--0CBitmap@@QEAA@XZ.c)
 *     ??0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z @ 0x18005A928 (--0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18005AA78 (--0CBitmapLock@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18006B946 (--0IUnknown@@QEAA@XZ.c)
 */

CMILCOMBase *__fastcall CMILCOMBase::CMILCOMBase(CMILCOMBase *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  return this;
}
