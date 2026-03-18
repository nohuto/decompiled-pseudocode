/*
 * XREFs of ??_GDXGGLOBAL@@EEAAPEAXI@Z @ 0x140073200
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401D29F4 (--1DXGGLOBAL@@EEAA@XZ.c)
 */

DXGGLOBAL *__fastcall DXGGLOBAL::`scalar deleting destructor'(DXGGLOBAL *this, char a2)
{
  DXGGLOBAL::~DXGGLOBAL(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
