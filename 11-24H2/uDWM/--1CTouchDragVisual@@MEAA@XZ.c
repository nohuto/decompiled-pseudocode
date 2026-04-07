/*
 * XREFs of ??1CTouchDragVisual@@MEAA@XZ @ 0x18007E4BC
 * Callers:
 *     ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x18007E470 (--_GCTouchDragVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18007E550 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchDragVisual::~CTouchDragVisual(void **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = &CTouchDragVisual::`vftable';
  CTouchDragVisual::Stop((CTouchDragVisual *)this);
  v2 = (CBaseObject *)this[43];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[43] = 0LL;
  }
  v3 = (CBaseObject *)this[48];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[48] = 0LL;
  }
  v4 = (CBaseObject *)this[49];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[49] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 39);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 35);
  CTouchVisual::~CTouchVisual((CTouchVisual *)this);
}
