/*
 * XREFs of ??_ELockable@@UEAAPEAXI@Z @ 0x14008EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1Lockable@@UEAA@XZ @ 0x140188FD8 (--1Lockable@@UEAA@XZ.c)
 */

Lockable *__fastcall Lockable::`vector deleting destructor'(Lockable *this, char a2)
{
  Lockable::~Lockable(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
