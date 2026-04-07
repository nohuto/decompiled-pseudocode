/*
 * XREFs of sub_1800B9FE8 @ 0x1800B9FE8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B9FE8(CDisplayDuplicateToExtendAnimatedVisual *_RCX)
{
  char v1; // of

  if ( !v1 )
    JUMPOUT(0x1800B9FF4LL);
  __asm { rcl     dword ptr [rsi+47h], cl }
  return CDisplayDuplicateToExtendAnimatedVisual::StartImpl(_RCX);
}
