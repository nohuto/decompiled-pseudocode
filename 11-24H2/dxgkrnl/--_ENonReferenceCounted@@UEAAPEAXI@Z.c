/*
 * XREFs of ??_ENonReferenceCounted@@UEAAPEAXI@Z @ 0x140057D40
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

NonReferenceCounted *__fastcall NonReferenceCounted::`vector deleting destructor'(NonReferenceCounted *this, char a2)
{
  *(_QWORD *)this = &NonReferenceCounted::`vftable';
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
