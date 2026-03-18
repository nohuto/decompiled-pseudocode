/*
 * XREFs of ??_EDXGPROCESSVMWP@@UEAAPEAXI@Z @ 0x1400770C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x140077038 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 */

DXGPROCESSVMWP *__fastcall DXGPROCESSVMWP::`vector deleting destructor'(DXGPROCESSVMWP *this, unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  DXGPROCESSVMWP::~DXGPROCESSVMWP(this, a2);
  if ( (v2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
