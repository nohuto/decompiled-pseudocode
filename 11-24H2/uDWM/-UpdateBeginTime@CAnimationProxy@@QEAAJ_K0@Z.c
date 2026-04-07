/*
 * XREFs of ?UpdateBeginTime@CAnimationProxy@@QEAAJ_K0@Z @ 0x1800A7E58
 * Callers:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x180049F54 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationProxy::UpdateBeginTime(CAnimationProxy *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 464LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           0LL);
}
