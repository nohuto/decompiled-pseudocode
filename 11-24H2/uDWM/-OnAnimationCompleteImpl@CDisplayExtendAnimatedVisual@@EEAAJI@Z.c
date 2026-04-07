/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayExtendAnimatedVisual@@EEAAJI@Z @ 0x1800BF640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::OnAnimationCompleteImpl(CDisplayExtendAnimatedVisual *this, int a2)
{
  if ( a2 == *((_DWORD *)this + 110) )
  {
    *((_DWORD *)this + 110) = -1;
    return CDisplayExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 111) )
  {
    *((_DWORD *)this + 111) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 112) )
      *((_DWORD *)this + 112) = -1;
    if ( a2 == *((_DWORD *)this + 113) )
      *((_DWORD *)this + 113) = -1;
    if ( a2 == *((_DWORD *)this + 114) )
      *((_DWORD *)this + 114) = -1;
    return 0LL;
  }
}
