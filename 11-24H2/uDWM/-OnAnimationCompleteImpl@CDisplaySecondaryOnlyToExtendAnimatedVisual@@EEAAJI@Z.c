/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJI@Z @ 0x1800C2430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::OnAnimationCompleteImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 106) )
  {
    *((_DWORD *)this + 106) = -1;
    return CDisplaySecondaryOnlyToExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  if ( a2 == *((_DWORD *)this + 107) )
  {
    *((_DWORD *)this + 107) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  if ( a2 == *((_DWORD *)this + 108) )
  {
    *((_DWORD *)this + 108) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  return 0LL;
}
