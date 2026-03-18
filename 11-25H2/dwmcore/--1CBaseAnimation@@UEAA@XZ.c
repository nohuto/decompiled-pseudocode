/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x18021D9C8
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x180207A5C (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x180280020 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x1802ACF50 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 80);
  CResource::~CResource(this);
}
