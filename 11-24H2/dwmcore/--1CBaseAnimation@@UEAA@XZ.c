/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x180212510
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1801FB3EC (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x1802755A0 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x1802A3430 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 80);
  CResource::~CResource(this);
}
