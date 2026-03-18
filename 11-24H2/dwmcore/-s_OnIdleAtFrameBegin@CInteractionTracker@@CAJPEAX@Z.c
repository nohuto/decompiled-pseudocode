/*
 * XREFs of ?s_OnIdleAtFrameBegin@CInteractionTracker@@CAJPEAX@Z @ 0x180217BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::s_OnIdleAtFrameBegin(CCachedVisualImage *this, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(CCachedVisualImage *, __int64, __int64); // rax

  if ( *((_QWORD *)this + 7) )
    CResource::InvalidateAnimationSources(this, 60);
  *((_BYTE *)this + 540) &= ~0x80u;
  v4 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)this + 16LL);
  if ( v4 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(this, a2, a3);
  else
    ((void (__fastcall *)(CCachedVisualImage *))v4)(this);
  return 0LL;
}
