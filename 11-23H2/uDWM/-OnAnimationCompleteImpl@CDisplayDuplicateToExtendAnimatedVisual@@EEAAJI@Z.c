/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJI@Z @ 0x1800B99E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::OnAnimationCompleteImpl(
        CDisplayDuplicateToExtendAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 128) )
  {
    *((_DWORD *)this + 128) = -1;
    return CDisplayDuplicateToExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 129) )
  {
    *((_DWORD *)this + 129) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 130) )
      *((_DWORD *)this + 130) = -1;
    if ( a2 == *((_DWORD *)this + 131) )
      *((_DWORD *)this + 131) = -1;
    if ( a2 == *((_DWORD *)this + 132) )
      *((_DWORD *)this + 132) = -1;
    if ( a2 == *((_DWORD *)this + 133) )
      *((_DWORD *)this + 133) = -1;
    return 0LL;
  }
}
