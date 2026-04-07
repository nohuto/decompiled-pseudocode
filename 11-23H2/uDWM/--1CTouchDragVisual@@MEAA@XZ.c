/*
 * XREFs of ??1CTouchDragVisual@@MEAA@XZ @ 0x1800E7788
 * Callers:
 *     ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x18006DBA0 (--_GCTouchDragVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800E7970 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchDragVisual::~CTouchDragVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CTouchDragVisual::`vftable';
  CTouchDragVisual::Stop((CTouchDragVisual *)this);
  v2 = this[49];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[49] = 0LL;
  }
  v3 = this[54];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[54] = 0LL;
  }
  v4 = this[55];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[55] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 45);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 41);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
