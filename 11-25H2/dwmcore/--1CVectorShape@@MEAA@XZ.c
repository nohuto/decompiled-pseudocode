/*
 * XREFs of ??1CVectorShape@@MEAA@XZ @ 0x18020FD28
 * Callers:
 *     ??1CContainerVectorShape@@MEAA@XZ @ 0x1800792AC (--1CContainerVectorShape@@MEAA@XZ.c)
 *     ??1CSpriteVectorShape@@UEAA@XZ @ 0x1801FAA8C (--1CSpriteVectorShape@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVectorShape::~CVectorShape(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  CResource::~CResource((CResource *)this);
}
