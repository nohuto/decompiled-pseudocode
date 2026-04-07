/*
 * XREFs of ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800CCE30
 * Callers:
 *     ??_GCPenPressHoldVisual@@MEAAPEAXI@Z @ 0x1800CCED0 (--_GCPenPressHoldVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800CD220 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CPenPressHoldVisual::~CPenPressHoldVisual(CBaseObject **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CPenPressHoldVisual::`vftable';
  CPenPressHoldVisual::StopTimer((CPenPressHoldVisual *)this);
  CVisual::SetOpacity((CVisual *)this, 0.0);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 90); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[42] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = this[40];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 42);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
