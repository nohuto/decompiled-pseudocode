/*
 * XREFs of ?TransposeRectAroundCenter@@YA?AUtagRECT@@AEBU1@@Z @ 0x1800BF10C
 * Callers:
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BE54C (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BE9A8 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall TransposeRectAroundCenter(struct tagRECT *__return_ptr retstr, const struct tagRECT *a2)
{
  LONG bottom; // r11d
  LONG top; // r10d
  int v5; // ebx
  int v6; // edi
  LONG v7; // ecx
  LONG v8; // r8d

  bottom = a2->bottom;
  top = a2->top;
  v5 = 0;
  v6 = 0;
  if ( a2->right - a2->left >= 0 )
    v6 = a2->right - a2->left;
  if ( bottom - top >= 0 )
    v5 = bottom - top;
  v7 = (a2->left + a2->right) / 2 - v5 / 2;
  retstr->left = v7;
  retstr->right = v5 + v7;
  v8 = (top + bottom) / 2 - v6 / 2;
  retstr->top = v8;
  retstr->bottom = v6 + v8;
  return retstr;
}
