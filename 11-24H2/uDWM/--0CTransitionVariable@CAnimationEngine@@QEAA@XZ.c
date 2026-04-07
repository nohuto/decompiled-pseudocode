/*
 * XREFs of ??0CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x180046710
 * Callers:
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18004665C (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

CAnimationEngine::CTransitionVariable *__fastcall CAnimationEngine::CTransitionVariable::CTransitionVariable(
        CAnimationEngine::CTransitionVariable *this)
{
  CAnimationEngine::CTransitionVariable *result; // rax

  *(_QWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
