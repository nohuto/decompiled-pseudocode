/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayDuplicateAnimatedVisual@@EEAAJI@Z @ 0x1800BE130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::OnAnimationCompleteImpl(
        CDisplayDuplicateAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 108) )
  {
    *((_DWORD *)this + 108) = -1;
    return CDisplayDuplicateAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 109) )
  {
    *((_DWORD *)this + 109) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 110) )
      *((_DWORD *)this + 110) = -1;
    if ( a2 == *((_DWORD *)this + 111) )
      *((_DWORD *)this + 111) = -1;
    return 0LL;
  }
}
