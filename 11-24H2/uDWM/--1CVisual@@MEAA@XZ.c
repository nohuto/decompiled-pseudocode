/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x180063A7C
 * Callers:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x18002189C (--1CContainerVisual@@MEAA@XZ.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x180039CE0 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x180063A30 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??1CClientArea@@MEAA@XZ @ 0x18006EBDC (--1CClientArea@@MEAA@XZ.c)
 *     ??_ECWindowTarget@@UEAAPEAXI@Z @ 0x1800B7740 (--_ECWindowTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CVisual::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
  CBaseObject::~CBaseObject(this);
}
