/*
 * XREFs of ??1CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x1800565C0
 * Callers:
 *     ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x180056524 (--1CTransitionVisual@CAnimationEngine@@QEAA@XZ.c)
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800AA770 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVariable::~CTransitionVariable(
        CAnimationEngine::CTransitionVariable *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
