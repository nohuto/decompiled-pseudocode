/*
 * XREFs of ??1CScrollAnimation@@UEAA@XZ @ 0x1800F04A8
 * Callers:
 *     ??1CInteractionTrackerPositionAnimation@@UEAA@XZ @ 0x1800F1194 (--1CInteractionTrackerPositionAnimation@@UEAA@XZ.c)
 *     ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x1802B52A0 (--_ECScrollAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1800F06A4 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(CScrollAnimation *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CScrollAnimation::`vftable';
  CScrollAnimation::Stop(this);
  v2 = *((_QWORD *)this + 42);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 42) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 384);
  CBaseExpression::~CBaseExpression((void **)this);
}
