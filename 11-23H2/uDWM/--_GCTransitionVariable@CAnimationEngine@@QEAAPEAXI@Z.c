/*
 * XREFs of ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800AA770
 * Callers:
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x1800568C4 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 * Callees:
 *     ??1CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x1800565C0 (--1CTransitionVariable@CAnimationEngine@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVariable *__fastcall CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVariable *this)
{
  CAnimationEngine::CTransitionVariable::~CTransitionVariable(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CAnimationEngine::CTransitionVariable *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
