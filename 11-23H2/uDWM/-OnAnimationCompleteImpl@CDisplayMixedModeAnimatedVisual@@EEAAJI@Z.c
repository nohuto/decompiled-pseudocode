/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayMixedModeAnimatedVisual@@EEAAJI@Z @ 0x1800BBEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayMixedModeAnimatedVisual::OnAnimationCompleteImpl(
        CDisplayMixedModeAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 130) )
  {
    *((_DWORD *)this + 130) = -1;
    return CDisplayMixedModeAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 131) )
  {
    *((_DWORD *)this + 131) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 132) )
      *((_DWORD *)this + 132) = -1;
    return 0LL;
  }
}
