/*
 * XREFs of ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800A6FD0
 * Callers:
 *     ?_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ @ 0x1800443E0 (-_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800A6F64 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 *     ?GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z @ 0x1800D2B50 (-GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18007BA58 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 */

void __fastcall CAnimationComponent::SetGhost(CAnimationComponent *this)
{
  __int64 v2; // rax

  if ( !*((_BYTE *)this + 65) )
  {
    CAnimationComponent::_LogEvent((__int64)this, 3);
    v2 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 65) = 1;
    *(_BYTE *)(v2 + 922) = 1;
  }
}
