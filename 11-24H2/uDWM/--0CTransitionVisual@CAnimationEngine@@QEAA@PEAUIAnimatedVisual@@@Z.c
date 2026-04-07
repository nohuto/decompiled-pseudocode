/*
 * XREFs of ??0CTransitionVisual@CAnimationEngine@@QEAA@PEAUIAnimatedVisual@@@Z @ 0x180046618
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x1800464C0 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CAnimationEngine::CTransitionVisual *__fastcall CAnimationEngine::CTransitionVisual::CTransitionVisual(
        CAnimationEngine::CTransitionVisual *this,
        struct IAnimatedVisual *a2)
{
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(struct IAnimatedVisual *))(*(_QWORD *)a2 + 264LL))(a2);
  return this;
}
