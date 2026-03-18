/*
 * XREFs of ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BCFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x1801BD030 (-ShouldNotify@CAnimation@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimation::DetachFromChannel(CAnimation *this, struct CChannelContext *a2)
{
  _DWORD *v4; // rdi

  if ( (struct CChannelContext *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 9) + 16LL))((char *)this + 72) == a2 )
  {
    v4 = (_DWORD *)((char *)this + 284);
    if ( CAnimation::ShouldNotify(this) )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 88LL))(
        *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
        *((unsigned int *)this + 72),
        (unsigned int)*v4);
    *v4 = 0;
  }
  if ( a2 == *((struct CChannelContext **)this + 7) )
    *((_QWORD *)this + 7) = 0LL;
}
