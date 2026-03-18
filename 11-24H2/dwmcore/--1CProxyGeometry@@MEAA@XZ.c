/*
 * XREFs of ??1CProxyGeometry@@MEAA@XZ @ 0x180203B5C
 * Callers:
 *     ??_GCProxyGeometry@@MEAAPEAXI@Z @ 0x180203B10 (--_GCProxyGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CProxyGeometry::~CProxyGeometry(CProxyGeometry *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 17);
  *(_QWORD *)this = &CProxyGeometry::`vftable';
  CResource::UnRegisterNotifierInternal(this, v1);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 18));
  CGeometry::~CGeometry((struct CResource **)this);
}
