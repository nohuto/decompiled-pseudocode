/*
 * XREFs of ??_ECFlipQueuedObject@@MEAAPEAXI@Z @ 0x14009B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipQueuedObject@@MEAA@XZ @ 0x140008AE0 (--1CFlipQueuedObject@@MEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CFlipQueuedObject *__fastcall CFlipQueuedObject::`vector deleting destructor'(CFlipQueuedObject *this, char a2)
{
  CFlipQueuedObject::~CFlipQueuedObject(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
