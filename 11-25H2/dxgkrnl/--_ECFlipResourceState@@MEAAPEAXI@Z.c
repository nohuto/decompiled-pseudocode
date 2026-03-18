/*
 * XREFs of ??_ECFlipResourceState@@MEAAPEAXI@Z @ 0x14009D350
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x14005434C (--1CFlipResourceState@@MEAA@XZ.c)
 */

CFlipResource **__fastcall CFlipResourceState::`vector deleting destructor'(CFlipResource **this, char a2)
{
  CFlipResourceState::~CFlipResourceState(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
