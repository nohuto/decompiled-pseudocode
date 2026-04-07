/*
 * XREFs of ?CleanupAnimation@CAnimationEngine@@AEAAJI@Z @ 0x18006CFB8
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18006C588 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimationEngine::CleanupAnimation(CAnimationEngine *this, unsigned int a2)
{
  char *v2; // rdi
  CBaseObject *v4; // rcx

  v2 = (char *)this + 40;
  v4 = *(CBaseObject **)(*((_QWORD *)this + 5) + 8LL * a2);
  if ( v4 )
    CBaseObject::Release(v4);
  return DynArray<CAnimationEngine::CTransitionVisualSet *,0>::RemoveAtOrderNotPreserved(v2, a2);
}
