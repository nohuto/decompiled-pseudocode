/*
 * XREFs of ??_ELockable@@UEAAPEAXI@Z @ 0x1400900B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1Lockable@@UEAA@XZ @ 0x14018B0D4 (--1Lockable@@UEAA@XZ.c)
 */

Lockable *__fastcall Lockable::`vector deleting destructor'(Lockable *this, char a2)
{
  Lockable::~Lockable(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
