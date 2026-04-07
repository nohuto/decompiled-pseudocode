/*
 * XREFs of ??0IBitmapDest@@QEAA@XZ @ 0x1800227D4
 * Callers:
 *     ??0CBitmap@@QEAA@XZ @ 0x180022664 (--0CBitmap@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18006B946 (--0IUnknown@@QEAA@XZ.c)
 */

IBitmapDest *__fastcall IBitmapDest::IBitmapDest(IBitmapDest *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &IBitmapDest::`vftable';
  return this;
}
