/*
 * XREFs of ??_GCFlipContentToken@@UEAAPEAXI@Z @ 0x14001EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x14001F008 (--1CFlipContentToken@@UEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CFlipContentToken *__fastcall CFlipContentToken::`scalar deleting destructor'(CFlipContentToken *this, char a2)
{
  CFlipContentToken::~CFlipContentToken(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
