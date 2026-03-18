/*
 * XREFs of ??_G?$Vector@_K@@UEAAPEAXI@Z @ 0x140090470
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void **__fastcall Vector<unsigned __int64>::`scalar deleting destructor'(void **a1, char a2)
{
  *a1 = &Vector<unsigned __int64>::`vftable';
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1[3]);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
  return a1;
}
