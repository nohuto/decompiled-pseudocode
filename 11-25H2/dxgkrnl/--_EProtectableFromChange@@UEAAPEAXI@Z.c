/*
 * XREFs of ??_EProtectableFromChange@@UEAAPEAXI@Z @ 0x14008F220
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1ProtectableFromChange@@UEAA@XZ @ 0x140012610 (--1ProtectableFromChange@@UEAA@XZ.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::`vector deleting destructor'(
        ProtectableFromChange *this,
        char a2)
{
  ProtectableFromChange::~ProtectableFromChange(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
