/*
 * XREFs of ??_ECompositionSurfaceObject@@MEAAPEAXI@Z @ 0x14009CB30
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CompositionSurfaceObject *__fastcall CompositionSurfaceObject::`vector deleting destructor'(
        CompositionSurfaceObject *this,
        char a2)
{
  *((_QWORD *)this + 4) = &CompositionSurfaceObject::`vftable'{for `IPairedSurfaceObject'};
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
