/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJI@Z @ 0x1800BE910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::OnAnimationCompleteImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 118) )
  {
    *((_DWORD *)this + 118) = -1;
    return CDisplaySecondaryOnlyToExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  if ( a2 == *((_DWORD *)this + 119) )
  {
    *((_DWORD *)this + 119) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  if ( a2 == *((_DWORD *)this + 120) )
  {
    *((_DWORD *)this + 120) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  return 0LL;
}
