/*
 * XREFs of ??_GCToken@@UEAAPEAXI@Z @ 0x14009AE80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CToken@@UEAA@XZ @ 0x14001F040 (--1CToken@@UEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CToken *__fastcall CToken::`scalar deleting destructor'(CToken *this, char a2)
{
  CToken::~CToken(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
