/*
 * XREFs of ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x180072C18
 * Callers:
 *     ??_GCTransitionVisualSet@CAnimationEngine@@UEAAPEAXI@Z @ 0x180072BE0 (--_GCTransitionVisualSet@CAnimationEngine@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180072C8C (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::~CTransitionVisualSet(
        CAnimationEngine::CTransitionVisualSet *this,
        const struct std::nothrow_t *a2)
{
  __int64 v3; // rcx
  __int64 i; // rdi
  CAnimationEngine::CTransitionVisual *v5; // rcx

  *(_QWORD *)this = &CAnimationEngine::CTransitionVisualSet::`vftable';
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 4) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 5); i = (unsigned int)(i + 1) )
  {
    v5 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 5) + 8 * i);
    if ( v5 )
      CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v5, (unsigned int)a2);
  }
  CDisplayBlackCurtainAnimatedVisual::operator delete(*((void **)this + 5), a2);
  CBaseObject::~CBaseObject(this);
}
