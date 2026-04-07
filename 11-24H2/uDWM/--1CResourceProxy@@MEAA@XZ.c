/*
 * XREFs of ??1CResourceProxy@@MEAA@XZ @ 0x180026524
 * Callers:
 *     ??_ECRotateTransformProxy@@UEAAPEAXI@Z @ 0x1800252B0 (--_ECRotateTransformProxy@@UEAAPEAXI@Z.c)
 *     ??1CVisualProxy@@UEAA@XZ @ 0x1800692AC (--1CVisualProxy@@UEAA@XZ.c)
 *     ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x18006ACAC (--1CImageLegacyMilBrushProxy@@MEAA@XZ.c)
 *     ??_ECBaseTransformProxy@@UEAAPEAXI@Z @ 0x1800B60D0 (--_ECBaseTransformProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CResourceProxy::~CResourceProxy(CResourceProxy *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
    CBaseObject::Release(v2);
  CBaseObject::~CBaseObject(this);
}
