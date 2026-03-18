/*
 * XREFs of ??_GCTokenBase@@UEAAPEAXI@Z @ 0x140099E10
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CTokenBase *__fastcall CTokenBase::`scalar deleting destructor'(CTokenBase *this, char a2)
{
  *(_QWORD *)this = &CTokenBase::`vftable';
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
