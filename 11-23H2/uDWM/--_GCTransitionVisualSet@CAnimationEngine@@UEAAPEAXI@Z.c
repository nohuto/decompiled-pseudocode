/*
 * XREFs of ??_GCTransitionVisualSet@CAnimationEngine@@UEAAPEAXI@Z @ 0x180056160
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x180056448 (--1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVisualSet *__fastcall CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisualSet *this,
        char a2)
{
  CAnimationEngine::CTransitionVisualSet::~CTransitionVisualSet(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimationEngine::CTransitionVisualSet *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
