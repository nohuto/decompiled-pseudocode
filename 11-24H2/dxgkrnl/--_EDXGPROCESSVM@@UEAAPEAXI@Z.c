/*
 * XREFs of ??_EDXGPROCESSVM@@UEAAPEAXI@Z @ 0x140077AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x140077A44 (--1DXGPROCESSVM@@UEAA@XZ.c)
 */

void **__fastcall DXGPROCESSVM::`vector deleting destructor'(void **this, char a2)
{
  DXGPROCESSVM::~DXGPROCESSVM(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
