/*
 * XREFs of ??1CThumbnailTransition@@UEAA@XZ @ 0x1800D9FB4
 * Callers:
 *     ??_GCThumbnailTransition@@UEAAPEAXI@Z @ 0x1800D9FF0 (--_GCThumbnailTransition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800DA4B0 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

void __fastcall CThumbnailTransition::~CThumbnailTransition(CThumbnailTransition *this)
{
  *(_QWORD *)this = &CThumbnailTransition::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CThumbnailTransition::`vftable'{for `IAnimationListener'};
  CThumbnailTransition::StopAnimation(this);
  CBaseObject::~CBaseObject(this);
}
