/*
 * XREFs of ??_GCIFlipPresentHistoryTokenData@@UEAAPEAXI@Z @ 0x140073D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CIFlipPresentHistoryTokenData *__fastcall CIFlipPresentHistoryTokenData::`scalar deleting destructor'(
        CIFlipPresentHistoryTokenData *this,
        char a2)
{
  *(_QWORD *)this = &CIFlipPresentHistoryTokenData::`vftable';
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
