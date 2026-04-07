/*
 * XREFs of ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800AA444
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180014E94 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800AA3F8 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x1800DB870 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x1800AA47C (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 */

void __fastcall CAnimationComponent::SetGhost(CAnimationComponent *this)
{
  __int64 v2; // rax

  if ( !*((_BYTE *)this + 65) )
  {
    CAnimationComponent::_LogEvent(this, 3LL);
    v2 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 65) = 1;
    *(_BYTE *)(v2 + 970) = 1;
  }
}
