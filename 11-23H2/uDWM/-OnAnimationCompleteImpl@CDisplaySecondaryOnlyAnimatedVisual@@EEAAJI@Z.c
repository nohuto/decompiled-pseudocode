/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJI@Z @ 0x1800BDC00
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::OnAnimationCompleteImpl(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 114) )
  {
    *((_DWORD *)this + 114) = -1;
    CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  return 0LL;
}
