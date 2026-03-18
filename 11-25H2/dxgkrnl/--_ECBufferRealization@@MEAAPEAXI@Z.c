/*
 * XREFs of ??_ECBufferRealization@@MEAAPEAXI@Z @ 0x140010690
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBufferRealization@@MEAA@XZ @ 0x1400106C8 (--1CBufferRealization@@MEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CBufferRealization *__fastcall CBufferRealization::`vector deleting destructor'(CBufferRealization *this, char a2)
{
  CBufferRealization::~CBufferRealization(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
