/*
 * XREFs of ??_ECCD_BTL@@MEAAPEAXI@Z @ 0x14008F850
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CCD_BTL@@MEAA@XZ @ 0x140261FA8 (--1CCD_BTL@@MEAA@XZ.c)
 */

CCD_BTL *__fastcall CCD_BTL::`vector deleting destructor'(CCD_BTL *this, char a2)
{
  CCD_BTL::~CCD_BTL(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
