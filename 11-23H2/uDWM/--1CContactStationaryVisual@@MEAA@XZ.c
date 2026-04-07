/*
 * XREFs of ??1CContactStationaryVisual@@MEAA@XZ @ 0x1800B2504
 * Callers:
 *     ??_ECContactStationaryVisual@@MEAAPEAXI@Z @ 0x1800B25A0 (--_ECContactStationaryVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800B2BE0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

void __fastcall CContactStationaryVisual::~CContactStationaryVisual(CBaseObject **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CContactStationaryVisual::`vftable';
  CContactStationaryVisual::StopTimer((CContactStationaryVisual *)this);
  CVisual::SetOpacity((CVisual *)this, 0.0);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 104); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[49] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = this[47];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 49);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
