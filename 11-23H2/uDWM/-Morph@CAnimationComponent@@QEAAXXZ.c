/*
 * XREFs of ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800AA3F8
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x180014A8C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18000EC8C (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800AA444 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x1800AA47C (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 */

void __fastcall CAnimationComponent::Morph(CAnimationComponent *this)
{
  __int64 v2; // rcx

  if ( !*((_BYTE *)this + 66) )
  {
    CAnimationComponent::SetGhost(this);
    CAnimationComponent::_LogEvent(this, 2LL);
    *((_BYTE *)this + 66) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0p_EtwEventWriteTransfer(v2, (int)&UdwmSystemAnimation_Morph, *((_QWORD *)this + 2));
  }
}
