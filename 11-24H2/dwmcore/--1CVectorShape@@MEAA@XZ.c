/*
 * XREFs of ??1CVectorShape@@MEAA@XZ @ 0x180203A58
 * Callers:
 *     ??1CContainerVectorShape@@MEAA@XZ @ 0x180130E6C (--1CContainerVectorShape@@MEAA@XZ.c)
 *     ??1CSpriteVectorShape@@UEAA@XZ @ 0x18014EF0C (--1CSpriteVectorShape@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVectorShape::~CVectorShape(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  CResource::~CResource((CResource *)this);
}
