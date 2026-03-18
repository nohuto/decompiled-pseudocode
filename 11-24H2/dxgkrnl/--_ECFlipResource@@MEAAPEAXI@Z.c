/*
 * XREFs of ??_ECFlipResource@@MEAAPEAXI@Z @ 0x1400A04D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x140056470 (--1CFlipResource@@MEAA@XZ.c)
 */

CFlipResource *__fastcall CFlipResource::`vector deleting destructor'(CFlipResource *this, char a2)
{
  CFlipResource::~CFlipResource((__int64)this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
