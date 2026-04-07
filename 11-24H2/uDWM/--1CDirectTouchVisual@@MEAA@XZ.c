/*
 * XREFs of ??1CDirectTouchVisual@@MEAA@XZ @ 0x18001205C
 * Callers:
 *     ??_GCDirectTouchVisual@@MEAAPEAXI@Z @ 0x180011F90 (--_GCDirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x1800120B0 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDirectTouchVisual::~CDirectTouchVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *this = (CBaseObject *)&CDirectTouchVisual::`vftable';
  CDirectTouchVisual::Stop((CDirectTouchVisual *)this);
  v2 = this[47];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[46];
  if ( v3 )
    CBaseObject::Release(v3);
  CTouchVisual::~CTouchVisual((CTouchVisual *)this);
}
