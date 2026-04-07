/*
 * XREFs of ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x180072D18
 * Callers:
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18004665C (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x180072CB4 (--1CTransitionVisual@CAnimationEngine@@QEAA@XZ.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x180072D40 (--1CTransitionVariable@CAnimationEngine@@QEAA@XZ.c)
 */

CAnimationEngine::CTransitionVariable *__fastcall CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVariable *this)
{
  const struct std::nothrow_t *v2; // rdx

  CAnimationEngine::CTransitionVariable::~CTransitionVariable(this);
  CDisplayBlackCurtainAnimatedVisual::operator delete(this, v2);
  return this;
}
