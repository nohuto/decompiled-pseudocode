/*
 * XREFs of ?GetRotationAngle@CDWMDisplay@@QEBAHXZ @ 0x1800B9910
 * Callers:
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B96A8 (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMDisplay::GetRotationAngle(CDWMDisplay *this)
{
  switch ( *((_DWORD *)this + 58) )
  {
    case 2:
      return 90LL;
    case 3:
      return 180LL;
    case 4:
      return 270LL;
  }
  return 0LL;
}
