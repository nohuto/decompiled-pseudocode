/*
 * XREFs of ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180072C8C
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x1800464C0 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x180072C18 (--1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x180072CB4 (--1CTransitionVisual@CAnimationEngine@@QEAA@XZ.c)
 */

CAnimationEngine::CTransitionVisual *__fastcall CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisual *this)
{
  const struct std::nothrow_t *v2; // rdx

  CAnimationEngine::CTransitionVisual::~CTransitionVisual(this);
  CDisplayBlackCurtainAnimatedVisual::operator delete(this, v2);
  return this;
}
