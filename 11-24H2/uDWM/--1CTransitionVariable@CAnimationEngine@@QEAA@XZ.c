/*
 * XREFs of ??1CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x180072D40
 * Callers:
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x180072D18 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
