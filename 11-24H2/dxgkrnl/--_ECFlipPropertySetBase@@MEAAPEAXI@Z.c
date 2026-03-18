/*
 * XREFs of ??_ECFlipPropertySetBase@@MEAAPEAXI@Z @ 0x14009DD00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipPropertySetBase@@MEAA@XZ @ 0x140017ED8 (--1CFlipPropertySetBase@@MEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CFlipPropertySetBase *__fastcall CFlipPropertySetBase::`vector deleting destructor'(
        CFlipPropertySetBase *this,
        char a2)
{
  CFlipPropertySetBase::~CFlipPropertySetBase(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
