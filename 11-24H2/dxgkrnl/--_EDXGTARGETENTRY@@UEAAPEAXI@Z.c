/*
 * XREFs of ??_EDXGTARGETENTRY@@UEAAPEAXI@Z @ 0x140057CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

DXGTARGETENTRY *__fastcall DXGTARGETENTRY::`vector deleting destructor'(DXGTARGETENTRY *this, char a2)
{
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
