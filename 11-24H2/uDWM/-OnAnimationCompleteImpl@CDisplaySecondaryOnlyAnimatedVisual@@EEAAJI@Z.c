/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJI@Z @ 0x1800C19B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18009A16C (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::OnAnimationCompleteImpl(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 102) )
  {
    *((_DWORD *)this + 102) = -1;
    CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  return 0LL;
}
