/*
 * XREFs of ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x180072CB4
 * Callers:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180072C8C (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x180072D18 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationEngine::CTransitionVisual::~CTransitionVisual(
        CAnimationEngine::CTransitionVisual *this,
        unsigned int a2)
{
  CAnimationEngine::CTransitionVariable **v3; // rbx
  __int64 v4; // rdi

  v3 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
  v4 = 7LL;
  do
  {
    if ( *v3 )
      CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v3, a2);
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 272LL))(*(_QWORD *)this);
}
