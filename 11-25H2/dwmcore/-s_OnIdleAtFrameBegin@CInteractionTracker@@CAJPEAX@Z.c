/*
 * XREFs of ?s_OnIdleAtFrameBegin@CInteractionTracker@@CAJPEAX@Z @ 0x180223D10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::s_OnIdleAtFrameBegin(CResource *this)
{
  __int64 (__fastcall *v2)(CResource *); // rax

  if ( *((_QWORD *)this + 7) )
    CResource::InvalidateAnimationSources(this, 60LL);
  *((_BYTE *)this + 540) &= ~0x80u;
  v2 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)this + 16LL);
  if ( v2 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(this);
  else
    v2(this);
  return 0LL;
}
