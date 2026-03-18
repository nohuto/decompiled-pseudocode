/*
 * XREFs of ??_GCBitmapLock@@MEAAPEAXI@Z @ 0x18018B730
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmapLock@@MEAA@XZ @ 0x18018B76C (--1CBitmapLock@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x80uLL);
  return this;
}
